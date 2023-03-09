using Main.Crystalls;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;

namespace Main.GameProcessManagers.GamePhases
{
    [Bind]
    public class GamePhaseCrystallGet : GamePhaseBase
    {
        public override GamePhase GamePhase => GamePhase.CrystallGet;
        public override GamePhase NextPhase => GamePhase.Round;
        
        [Inject] private CrystallManager _crystallManager;
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        
        protected override void OnStart()
        {
            _currentPhaseShower.Set("Фаза броска", () =>
            {
                IsCompleted = true;
            });
            _crystallManager.Clear();
        }

        public override void OnEnd()
        {
            
        }
    }
}