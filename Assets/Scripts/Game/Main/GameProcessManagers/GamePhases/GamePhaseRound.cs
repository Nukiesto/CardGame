using System;
using System.Collections.Generic;
using Main.Abilities;
using Main.GameProcessManagers.GamePhases.RoundPhases;
using Main.Players;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

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
            private set
            {
                if (_currentPhase != null && !_currentPhase.IsCompleted || CurrentPhase == RoundPhase.Undefined)
                    return;
                
                var phase = roundPhases.Find(s => s.RoundPhase == value);
                if (phase == null)
                {
                    IsCompleted = true;
                    return;
                }
                if (_currentPhase != null && _currentPhase.IsCompleted)
                    _currentPhase.OnEnd();
                _currentPhaseType = value;
                
                _currentPhase = phase;

                SetMove(() => { _currentPhase.StartPhase();});

                if (CurrentPhase == RoundPhase.MoveEnemy || CurrentPhase == RoundPhase.Final)
                    roundBtn.SetEndRoundBtn(false);
            }
        }
        
        private RoundPhaseBase _currentPhase;
        
        [Inject] private AbilitiesUIManager _abilitiesUIManager;
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        [Inject] private MoveManager _moveManager;
        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private Player _player;
        
        public bool playerEndPlay;
        public bool isPlayerFirstPlay;
        public bool someOneEndRound;

        public bool CanEndRound => !someOneEndRound && (CurrentPhase != RoundPhase.Final);
        
        public event Action SomeEndRoundEvent;
        
        protected override void OnStart()
        {
            CurrentPhase = true ? RoundPhase.MovePlayer : RoundPhase.MoveEnemy;
        }

        public override void OnEnd()
        {
            roundBtn.End();
        }

        public void PreInit()
        {
            _battleCardManager.OnNewCardEvent += s =>
            {
                //Debug.Log(s.IsEnemy);
                s.BattleCardAttack.OnAttackEvent += () =>
                {
                    //Debug.Log("Attack Enemy:" + s.IsEnemy);
                    _currentPhase.SetComplited();
                    CurrentPhase = !s.IsEnemy ? RoundPhase.MoveEnemy : RoundPhase.MovePlayer;
                };
            };
            foreach (var roundPhase in roundPhases)
            {
                roundPhase.OnCompletedEvent += () =>
                {
                    //CurrentPhase = roundPhase.NextPhase;
                };
            }
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
        
        public void EndRoundPlayer(bool firstRound)
        {
            _player.isStartFirstInNextRound = firstRound;
            var startYou = firstRound ? ". Вы начинаете" : "";
            _currentPhaseShower.Set("Вы закончили раунд" + startYou, () =>
            {
                _currentPhase.SetComplited();
                CurrentPhase = RoundPhase.MoveEnemy;
            });
            someOneEndRound = true;
            roundBtn.SetEndRoundBtn(false);
            SomeEndRoundEvent?.Invoke();
        }
    }
}