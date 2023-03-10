using Main.Players;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.GameProcessManagers.GamePhases.RoundPhases
{
    [Bind]
    public class RoundPhaseEnemy : RoundPhaseBase
    {
        public override RoundPhase RoundPhase => RoundPhase.MoveEnemy;
        public override RoundPhase NextPhase => RoundPhase.Undefined;
        [Inject] private Enemy _enemy;
        
        protected override void OnStart()
        {
            _enemy.OnMoveStart();
            Debug.Log("EnemyMove");
        }

        public override void OnEnd()
        {
            
        }
    }
}