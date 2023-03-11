using System;
using System.Diagnostics.CodeAnalysis;
using ExitGames.Client.Photon;
using Main;
using Main.BattleCardSpace;
using Main.GameProcessManagers.GamePhases;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using SurvDI.UnityIntegration;
using UnityEngine;

namespace Network
{
    [Serializable]
    public class NetPlayerEventData
    {
        public object data;
        public int target;
    }
    [Bind(Multy=true)]
    [SuppressMessage("ReSharper", "SwitchStatementHandlesSomeKnownEnumValuesWithDefault")]
    public class NetworkPlayer : MonoBehaviourPun, IPreInit
    {
        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private GamePhaseRound _gamePhaseRound;
        [Inject] private GameNetworkManager _gameNetworkManager;
        
        private BattleCard CurrentCard => photonView.IsMine ? _battleCardManager.MyCurrentCard : _battleCardManager.EnemyCurrentCard;
        private NetworkPlayer OtherPlayer => _gameNetworkManager.OtherPlayer;

        public bool isEndRound;
        public bool isStartFirst;

        public bool IsEndRound
        {
            get => isEndRound;
            private set => isEndRound = value;
        }
        public bool IsFirstStart
        {
            get => isStartFirst;
            private set => isStartFirst = value;
        }
        
        private void Awake()
        {
            DiController.InjectGameObject(gameObject);
        }
        public void PreInit()
        {
            _gameNetworkManager.AddPlayer(this);
            SetSelectedCard(0);
        }

        public void OnStartNewRound()
        {
           Clear();
        }
        
        public void SetSelectedCard(int card)
        {
            photonView.RPC(nameof(SetSelectedCardRPC), RpcTarget.All, card);
            //RaiseEvent(Events.SetSelected, card);
        }
        public void Attack(AbilityType abilityType)
        {
            photonView.RPC(nameof(AttackRPC), RpcTarget.All, abilityType);
            //RaiseEvent(Events.Attack, abilityType);
        }
        public void SetMove()
        {
            Debug.Log($"SEND RPC <color={(photonView.IsMine ? "green" : "red")}>{photonView.ViewID}</color>");
            photonView.RPC(nameof(SetMoveRPC), RpcTarget.All);
        }
        public void EndRoundBtnClick()
        {
            photonView.RPC(nameof(EndRoundBtnClickRPC), RpcTarget.All);
        }
        public void FinalPhaseRound()
        {
            photonView.RPC(nameof(EndRoundBtnClickRPC), RpcTarget.All);
        }

        public void Clear()
        {
            photonView.RPC(nameof(ClearRPC), RpcTarget.All);
        }
        
        public void SetFirstStart(bool set)
        {
            photonView.RPC(nameof(SetFirstStartRPC), RpcTarget.All, set);
        }
        [PunRPC]
        private void AttackRPC(AbilityType abilityType)
        {
            CurrentCard.BattleCardAttack.AttackAbility(abilityType);
        }
        [PunRPC]
        private void SetSelectedCardRPC(int set)
        {
            if (photonView.IsMine)   
                _battleCardManager.SetMyCurrentCard(set);
            else
                _battleCardManager.SetEnemyCurrentCard(set);
        }
        [PunRPC]
        private void SetMoveRPC()
        {
            if (!IsEndRound)
            {
                if (PhotonNetwork.IsMasterClient)
                {
                    Debug.Log($"SetMovePlayer: <color={(photonView.IsMine ? "green" : "red")}>{photonView.ViewID}</color>");
                    _gamePhaseRound.SetPhase(photonView.IsMine ? RoundPhase.MovePlayer : RoundPhase.MoveEnemy, photonView.ViewID);
            
                }
            }
            else
                Debug.LogError("Cannot set move, is endround");
        }
        [PunRPC]
        private void EndRoundBtnClickRPC()
        {
            if (!IsEndRound)
            {
                SetFirstStart(!_gamePhaseRound.SomeOneEndRound);
                IsEndRound = true;
                
                _gamePhaseRound.EndRoundPlayer(!_gamePhaseRound.SomeOneEndRound, photonView.IsMine);
            }
            
            Debug.Log($"<color=red>END ROUND</color> {photonView.ViewID}");
        }
        [PunRPC]
        private void SetFirstStartRPC(bool setValue)
        {
            Debug.Log($"SET FIRST START {setValue} <color={(photonView.IsMine ? "green" : "red")}>{photonView.ViewID}</color>");
            IsFirstStart = setValue;
        }
        [PunRPC]
        private void FinalPhaseRPC()
        {
            Debug.Log($"<color=red>FinalPhase</color> {photonView.ViewID}");
        }
        [PunRPC]
        public void ClearRPC()
        {
            IsEndRound = false;
            IsFirstStart = false;
        }
    }
}