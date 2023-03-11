using System;
using Photon.Pun;
using UnityEngine;

namespace Main.GameProcessManagers.GamePhases
{
    public abstract class GamePhaseBase : MonoBehaviourPun
    {
        public event Action OnCompletedEvent;
        public abstract GamePhase GamePhase { get; }
        public abstract GamePhase NextPhase { get; }
        private bool _isCompleted;
        public bool IsCompleted
        {
            get => _isCompleted;
            protected set
            {
                _isCompleted = value;
                if (_isCompleted)
                    OnCompletedEvent?.Invoke();
            } 
        }

        public void StartPhase()
        {
            _isCompleted = false;
            OnStart();
        }
        protected abstract void OnStart();
        public abstract void OnEnd();
    }
}