using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    [Bind]
    public class RoundPhaseFinal: RoundPhaseBase
    {
        public override RoundPhase RoundPhase => RoundPhase.Final;
        public override RoundPhase NextPhase => RoundPhase.Undefined;
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        [Inject] private GamePhaseRound _gamePhaseRound;
        
        protected override void OnStart()
        {
            _currentPhaseShower.Set("Финальная фаза", () =>
            {
                IsCompleted = true;
                _gamePhaseRound.FinalPhaseEnd();
            });
        }

        public override void OnEnd()
        {
            
        }
    }
}