using System.Collections.Generic;
using Main.GameProcessManagers.GamePhases;
using Network;
using Photon.Pun;
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
    public class MoveManager : MonoBehaviourPun, IPreInit
    {
        [SerializeField] private List<GamePhaseBase> gamePhases;

        private GamePhase _currentPhaseType;
        public GamePhase CurrentPhase
        {
            get => _currentPhaseType;
            private set
            {
                if (_currentPhase != null && !_currentPhase.IsCompleted)
                    return;
                photonView.RPC(nameof(SetPhaseRPC), RpcTarget.All, value);
            } 
        }

        private GamePhaseBase _currentPhase;

        [Inject] private GameNetworkManager _gameNetworkManager;
        
        //Game Phases
        //-Choose cards
        //-Choose first battleCard
        //-CrystallGet
        //-Round
        public void PreInit()
        {
            if (photonView.IsMine)
            {
                _gameNetworkManager.OnStartGameEvent += () =>
                {
                    CurrentPhase = GamePhase.ChooseCards;
                };
                foreach (var gamePhase in gamePhases)
                {
                    gamePhase.OnCompletedEvent += () =>
                    {
                        CurrentPhase = gamePhase.NextPhase;
                    };
                }
            }
        }
        
        [PunRPC]
        private void SetPhaseRPC(GamePhase gamePhase)
        {
            var phase = gamePhases.Find(s => s.GamePhase == gamePhase);
                
            if (_currentPhase != null && _currentPhase.IsCompleted)
                _currentPhase.OnEnd();
            
            _currentPhase = phase;
            _currentPhase.StartPhase();
        }
    }
}