using Main.BattleCardSpace;

namespace Main.Cards.Paladin
{
    public class PaladinAbilityUlt : BattleCardAbility
    {
        public override AbilityType AbilityType => AbilityType.Ult;

        public override int GetDamage()
        {
            return damage;
        }
    }
}