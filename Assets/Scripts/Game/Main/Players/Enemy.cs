using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;

namespace Main.Players
{
    [Bind]
    public class Enemy : PlayerBase
    {
        [Inject] private BattleCardManager _battleCardManager;
        
        public override bool IsPlayer => false;
        
        public override void OnMoveStart()
        {
            /*RandomAttack
            //Debug.Log(_battleCardManager.EnemyCards[0]);
            var card = _battleCardManager.EnemyCards[0];
            card.SelectedAbility = card.GetAbility(AbilityType.Normal);
            card.BattleCardAttack.Attack();
            */
        }
    }
}