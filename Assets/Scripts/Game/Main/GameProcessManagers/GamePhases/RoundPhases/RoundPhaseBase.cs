using System;
using UnityEngine;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    public abstract class RoundPhaseBase : MonoBehaviour
    {
        public event Action OnCompletedEvent;
        public abstract RoundPhase RoundPhase { get; }
        public abstract RoundPhase NextPhase { get; }
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

        public void SetComplited()
        {
            IsCompleted = true;
        }
    }
}