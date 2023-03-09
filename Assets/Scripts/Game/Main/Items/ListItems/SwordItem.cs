using UnityEngine;

namespace Main.Items.ListItems
{
    [CreateAssetMenu(fileName = "Sword", menuName = "Data/Sword", order = 0)]
    public class SwordItem : ItemBase
    {
        public override ItemType ItemType => ItemType.Weapon;
        public int damageAdd;
    }
}