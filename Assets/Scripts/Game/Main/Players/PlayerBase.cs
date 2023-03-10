using UnityEngine;

namespace Main.Players
{
    public abstract class PlayerBase : MonoBehaviour
    {
        //public event Action OnEndRoundEvent;
        public abstract bool IsPlayer { get; }
        public abstract void OnMoveStart();
        public bool isEndRound;
        public bool isStartFirstInNextRound;
    }
}