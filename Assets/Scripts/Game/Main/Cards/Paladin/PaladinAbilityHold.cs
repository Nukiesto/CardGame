using Main.BattleCardSpace;

namespace Main.Cards.Paladin
{
    public class PaladinAbilityHold : BattleCardAbility
    {
        public override AbilityType AbilityType => AbilityType.Hold;

        public override int GetDamage()
        {
            return damage;
        }
    }
}