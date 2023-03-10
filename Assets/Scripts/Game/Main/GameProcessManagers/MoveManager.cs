using System;
using System.Collections.Generic;
using Main.GameProcessManagers.GamePhases;
using Main.Players;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.GameProcessManagers
{
    public enum GamePhase
    {
        ChooseCards,
        ChooseBattleCard,
        CrystallGet,
        Round,
    }
    
    [Bind]
    public class MoveManager : MonoBehaviour, IPreInit, IInit
    {
        [SerializeField] private List<GamePhaseBase> gamePhases;
        [SerializeField] private PlayerBase[] players;
        
        [Header("Other")]
        [SerializeField] private bool firstPlayer;

        private GamePhase _currentPhaseType;
        
        public GamePhase CurrentPhase
        {
            get => _currentPhaseType;
            private set
            {
                if (_currentPhase != null && !_currentPhase.IsCompleted)
                    return;
                var phase = gamePhases.Find(s => s.GamePhase == value);
                
                if (_currentPhase != null && _currentPhase.IsCompleted)
                    _currentPhase.OnEnd();
                    
                _currentPhase = phase;
                _currentPhase.StartPhase();
            } 
        }

        private GamePhaseBase _currentPhase;

        
        //Game Phases
        //-Choose cards
        //-Choose first battleCard
        //-CrystallGet
        //-Round
        public void PreInit()
        {
            foreach (var player in players)
            {
                
            }
            
            foreach (var gamePhase in gamePhases)
            {
                gamePhase.OnCompletedEvent += () =>
                {
                    CurrentPhase = gamePhase.NextPhase;
                };
            }
        }
        public void Init()
        {
            CurrentPhase = GamePhase.ChooseCards;
        }

    }
}