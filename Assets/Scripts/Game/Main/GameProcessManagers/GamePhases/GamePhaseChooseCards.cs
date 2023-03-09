using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;

namespace Main.GameProcessManagers.GamePhases
{
    [Bind]
    public class GamePhaseChooseCards : GamePhaseBase
    {
        public override GamePhase GamePhase => GamePhase.ChooseCards;
        public override GamePhase NextPhase => GamePhase.CrystallGet;
        
        [Inject] private CurrentPhaseShower _currentPhaseShower;
        
        protected override void OnStart()
        {
            _currentPhaseShower.Set("Фаза выбора карт", () =>
            {
                IsCompleted = true;
            });
        }

        public override void OnEnd()
        {
            
        }
    }
}