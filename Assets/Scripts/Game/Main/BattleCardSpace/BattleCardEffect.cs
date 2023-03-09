using UnityEngine;

namespace Main.BattleCardSpace
{
    public abstract class BattleCardEffect : ScriptableObject
    {
        [SerializeField] private Sprite icon;

        public Sprite Icon => icon;
    }
}