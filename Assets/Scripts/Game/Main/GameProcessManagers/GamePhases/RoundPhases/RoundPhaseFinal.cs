using SurvDI.Core.Common;
using UnityEngine;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    public class RoundPhaseFinal: RoundPhaseBase
    {
        public override RoundPhase RoundPhase => RoundPhase.Final;
        public override RoundPhase NextPhase => RoundPhase.Undefined;
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        
        protected override void OnStart()
        {
            _currentPhaseShower.Set("Финальная фаза", () =>
            {
                
            });
        }

        public override void OnEnd()
        {
            
        }
    }
}