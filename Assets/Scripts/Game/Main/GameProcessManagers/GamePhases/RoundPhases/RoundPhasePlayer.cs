using UnityEngine;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    public class RoundPhasePlayer : RoundPhaseBase
    {
        public override RoundPhase RoundPhase => RoundPhase.MovePlayer;
        public override RoundPhase NextPhase => RoundPhase.Undefined;
        
        protected override void OnStart()
        {
            
        }

        public override void OnEnd()
        {
            
        }
    }
}