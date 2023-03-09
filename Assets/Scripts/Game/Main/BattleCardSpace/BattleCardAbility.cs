using InspectorUtils.Runtime;
using Main.Abilities;
using UnityEngine;

namespace Main.BattleCardSpace
{
    public enum AbilityType
    {
        Normal = 1,
        Hold = 2,
        Ult = 3
    }
    
    public abstract class BattleCardAbility : MonoBehaviour
    {
        [SerializeField] private AbilityCostPerCrystal[] cost;
        [SerializeField] protected int damage;

        [SerializeField, TextArea,] private string description;
        [SerializeField] private Sprite icon;
        
        public AbilityCostPerCrystal[] Cost => cost;
        public abstract AbilityType AbilityType { get; }
        public Sprite Icon => icon;
        public string Description => description;
        
        public abstract int GetDamage();

        [Button]
        public void TestDescriptionText()
        {
            Debug.Log(description);
        }
    }
}