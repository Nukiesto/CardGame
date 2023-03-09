using Main.BattleCardSpace;

namespace Main.Cards.Paladin
{
    public class PaladinAbilityNormal : BattleCardAbility
    {
        public override AbilityType AbilityType => AbilityType.Normal;

        public override int GetDamage()
        {
            return damage;
        }
    }
}