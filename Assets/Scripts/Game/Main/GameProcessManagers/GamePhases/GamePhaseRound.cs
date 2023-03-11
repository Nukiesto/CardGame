using System;
using System.Collections.Generic;
using System.Linq;
using Main.Abilities;
using Main.GameProcessManagers.GamePhases.RoundPhases;
using Network;
using Photon.Pun;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UnityEngine;

namespace Main.GameProcessManagers.GamePhases
{
    public enum RoundPhase
    {
        MovePlayer,
        MoveEnemy,
        Final,
        Undefined
    }
    [Bind]
    public class GamePhaseRound : GamePhaseBase, IPreInit
    {
        [SerializeField] private TextMeshProUGUI moveText;
        [SerializeField] private RoundBtn roundBtn;
        [SerializeField] private List<RoundPhaseBase> roundPhases;
        
        public bool IsPlayerNow => _currentPhaseType == RoundPhase.MovePlayer;
        
        public override GamePhase GamePhase => GamePhase.Round;
        public override GamePhase NextPhase => GamePhase.CrystallGet;

        [SerializeField] private RoundPhase _currentPhaseType;
        public RoundPhase CurrentPhase
        {
            get => _currentPhaseType;
        }

        private RoundPhaseBase _currentPhase;
        
        [Inject] private AbilitiesUIManager _abilitiesUIManager;
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private GameNetworkManager _gameNetworkManager;
        
        public bool SomeOneEndRound => _gameNetworkManager.players.Count(s => s.IsEndRound) > 0;

        public bool CanEndRound => !SomeOneEndRound && (CurrentPhase != RoundPhase.Final);
        
        protected override void OnStart()
        {
            if (PhotonNetwork.IsMasterClient)
            {
                foreach (var networkPlayer in _gameNetworkManager.players)
                {
                    var isStart = networkPlayer.IsFirstStart;
                    networkPlayer.Clear();
                    if (isStart)
                    {
                        Debug.Log("FirstMoveBy: " + networkPlayer.photonView.ViewID);
                        networkPlayer.SetMove();
                    }
                }
            }

            foreach (var networkPlayer in _gameNetworkManager.players)
                networkPlayer.OnStartNewRound();
        }

        public override void OnEnd()
        {
            roundBtn.End();
        }

        public void PreInit()
        {
            _battleCardManager.OnNewCardEvent += s =>
            {
                if (PhotonNetwork.IsMasterClient)
                {
                    s.BattleCardAttack.OnAttackEvent += () =>
                    {
                        var isEnemy = CurrentPhase == RoundPhase.MoveEnemy && s.IsEnemy;
                        Debug.Log($"ATTACK IS ENEMY: {isEnemy}");
                        _currentPhase.SetComplited();
                        Debug.Log($"CheckFinalPhase {CheckFinalPhase() || _gameNetworkManager.CurrentPlayer.IsEndRound}");
                        if (CheckFinalPhase())
                            SetFinalPhase();
                        else
                        {
                            if (isEnemy)
                            {
                                if (!_gameNetworkManager.CurrentPlayer.IsEndRound)
                                    _gameNetworkManager.CurrentPlayer.SetMove();
                                else
                                    _gameNetworkManager.OtherPlayer.SetMove();
                            }
                            else
                            {
                                if (!_gameNetworkManager.OtherPlayer.IsEndRound)
                                    _gameNetworkManager.OtherPlayer.SetMove();
                                else
                                    _gameNetworkManager.CurrentPlayer.SetMove();
                            }
                        }
                    };
                }
            };
        }

        private void SetMove(Action onEnd)
        {
            moveText.text = IsPlayerNow ? "Ваш ход" : "Ход противника";
            _currentPhaseShower.Set(moveText.text, () =>
            {
                _abilitiesUIManager.SetCanAttack(IsPlayerNow);
                onEnd?.Invoke();
            });
        }
        
        public void EndRoundPlayer(bool firstRound, bool isMine)
        {
            var startYou = firstRound ? ". Вы начинаете" : "";
            var textLeft = isMine ? "Вы закончили раунд" : "Противник закончил раунд";
            _currentPhaseShower.Set(textLeft + startYou, () =>
            {
                _currentPhase.SetComplited();
                
                if (PhotonNetwork.IsMasterClient)
                {
                    if (CheckFinalPhase())
                        SetFinalPhase();
                    Debug.Log("SET MOVE OTHER PLAYER");
                    if (!_gameNetworkManager.CurrentPlayer.IsEndRound)
                        _gameNetworkManager.CurrentPlayer.SetMove();
                    else if (!_gameNetworkManager.OtherPlayer.IsEndRound)
                        _gameNetworkManager.OtherPlayer.SetMove();
                }
            });
            roundBtn.SetEndRoundBtn(false);
        }

        private bool CheckFinalPhase()
        {
            return _gameNetworkManager.players.All(s => s.IsEndRound);
        }

        public void SetFinalPhase()
        {
            SetPhase(RoundPhase.Final, 0);
            //Debug.Log($"FINAL PHASE, is first start {_gameNetworkManager.players.Find(s=>s.IsFirstStart).photonView.ViewID}");
        }

        public void FinalPhaseEnd()
        {
            IsCompleted = true;
        }
        
        [PunRPC]
        private void SetPhaseRPC(RoundPhase roundPhase, int sender)
        {
            if (roundPhase == RoundPhase.MovePlayer || roundPhase == RoundPhase.MoveEnemy)
            {
                var isPlayer = _gameNetworkManager.CurrentPlayer.photonView.ViewID == sender;
                roundPhase = isPlayer ? RoundPhase.MovePlayer : RoundPhase.MoveEnemy;
            }
            
            Debug.Log($"SetPhase {roundPhase}");
            var phase = roundPhases.Find(s => s.RoundPhase == roundPhase);
            if (PhotonNetwork.IsMasterClient)
            {
                if (phase == null)
                {
                    IsCompleted = true;
                    return;
                }
            }
            
            if (_currentPhase != null)
                _currentPhase.OnEnd();
            
            //SetPhase
            _currentPhaseType = roundPhase;
            _currentPhase = phase;
            
            SetMove(() =>
            {
                _currentPhase.StartPhase();
            });

            if (CurrentPhase == RoundPhase.MoveEnemy || CurrentPhase == RoundPhase.Final)
                roundBtn.SetEndRoundBtn(false);
        }

        public void SetPhase(RoundPhase roundPhase, int sender)
        {
            if (_currentPhase != null && !_currentPhase.IsCompleted)
                return;
            photonView.RPC(nameof(SetPhaseRPC), RpcTarget.All, roundPhase, sender);
        }
    }
}