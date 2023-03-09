using System;
using Main.BattleCardSpace;
using Main.Crystalls;
using Main.Misc;
using UnityEngine;
using UnityEngine.UI;

namespace Main.Abilities
{
    public class AbilityBtn : MonoBehaviour
    {
        [SerializeField] private CrystallUI crystallUIPrefab;
        [SerializeField] private Transform crystallParent;
        [SerializeField] private Button btn;
        [SerializeField] private AbilityType abilityType;
        [SerializeField] private Image cannotAttackMask;
        
        private PoolMassive _crystalls;
        public Button Button => btn;
        public AbilityType AbilityType => abilityType;
        
        private void Awake()
        {
            _crystalls = new PoolMassive(5, crystallParent, crystallUIPrefab.gameObject);
        }
        public void SetAbility(BattleCardAbility ability)
        {
            gameObject.SetActive(true);
            _crystalls.DisableAll();
            foreach (var abilityCostPerCrystal in ability.Cost)
            {
                var crystall = (CrystallUI)_crystalls.Get(Vector3.zero).obj;
                crystall.SetText(abilityCostPerCrystal.count);
                crystall.SetCrystallType(abilityCostPerCrystal.crystallType);
            }
        }

        public void SetCanAttack(bool canAttack)
        {
            cannotAttackMask.enabled = !canAttack;
        }
    }
}