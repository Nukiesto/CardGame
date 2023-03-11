using SurvDI.Application.Interfaces;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    [Bind]
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