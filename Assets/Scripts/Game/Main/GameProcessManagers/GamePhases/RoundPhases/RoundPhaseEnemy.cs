using UnityEngine;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    public class RoundPhaseEnemy : RoundPhaseBase
    {
        public override RoundPhase RoundPhase => RoundPhase.MoveEnemy;
        public override RoundPhase NextPhase => RoundPhase.Undefined;
        
        protected override void OnStart()
        {
            
        }

        public override void OnEnd()
        {
            
        }
    }
}