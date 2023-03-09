using System;
using System.Collections.Generic;
using Main.Abilities;
using Main.GameProcessManagers.GamePhases.RoundPhases;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UnityEngine;
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
                if (_currentPhase != null && !_currentPhase.IsCompleted)
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
                _currentPhase.StartPhase();
                
                Debug.Log(CurrentPhase);
                SetMove();

                if (CurrentPhase == RoundPhase.MoveEnemy || CurrentPhase == RoundPhase.Final)
                    roundBtn.SetEndRoundBtn(false);
            }
        }
        
        private RoundPhaseBase _currentPhase;
        
        [Inject] private AbilitiesUIManager _abilitiesUIManager;
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        [Inject] private MoveManager _moveManager;
        
        
        public bool playerEndPlay;
        public bool isPlayerNext;
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
            
            foreach (var roundPhase in roundPhases)
            {
                roundPhase.OnCompletedEvent += () =>
                {
                    CurrentPhase = roundPhase.NextPhase;
                };
            }
        }

        private void SetMove()
        {
            moveText.text = IsPlayerNow ? "Ваш ход" : "Ход противника";
            _currentPhaseShower.Set(moveText.text, () =>
            {
                _abilitiesUIManager.SetCanAttack(IsPlayerNow);
            });
        }
        
        public void EndRoundPlayer()
        {
            _currentPhaseShower.Set("Вы начинаете", () =>
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