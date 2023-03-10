using System;
using System.Collections.Generic;
using System.Linq;
using InspectorUtils.Runtime;
using Main.Items;
using UnityEngine;
using UnityEngine.UI;

namespace Main.BattleCardSpace
{
    public class BattleCard : MonoBehaviour
    {
        [SerializeField] private int maxEnergy;
        [SerializeField] private int maxHp;
        [SerializeField] private Button btn;
        [SerializeField] private List<BattleCardAbility> abilities;
        [SerializeField] private BattleCardUI battleCardUI;
        [SerializeField] private BattleCardAttack battleCardAttack;
        
        [Header("Test")] 
        [SerializeField] private ItemBase[] testAdd;
        
        [Header("Items")]
        [SerializeField] private int maxCountWeapon = 1;
        [SerializeField] private int maxCountSupport = 1;
        
        private int _currentHp;
        public int CurrentHp
        {
            get => _currentHp;
            set
            {
                _currentHp = Mathf.Clamp(value, 0, maxHp);
                OnHpChangedEvent?.Invoke();
            } 
        }

        public event Action OnHpChangedEvent;
        public event Action OnClickBtnEvent;

        public bool IsEnemy { get; set; }
        private int _currentEnergy;
        public int CurrentEnergy
        {
            get => _currentEnergy;
            set
            {
                _currentEnergy = Mathf.Clamp(value, 0, maxEnergy);
                battleCardUI.SetEnergy(_currentEnergy, maxEnergy);
            }
        }

        private readonly List<ItemBase> _items = new();
        public ItemBase[] Items => _items.ToArray();
        public BattleCardAttack BattleCardAttack => battleCardAttack;
        public BattleCardAbility SelectedAbility { get; set; }
        
        private void Start()
        {
            CurrentHp = maxHp;
            CurrentEnergy = 0;
            btn.onClick.AddListener(()=>{OnClickBtnEvent?.Invoke();});
        }

        public void SetSelected(bool set)
        { 
            battleCardUI.SetSelected(set);
        }

        public void AddItem(ItemBase item)
        {
            if (CanAddItem(item))
            {
                _items.Add(item);
                battleCardUI.SetItems(_items);
            }
        }

        public bool CanAddItem(ItemBase item)
        {
            return item.ItemType == ItemType.Weapon
                ? _items.Count(s => s.ItemType == ItemType.Weapon) < maxCountWeapon
                : _items.Count(s => s.ItemType == ItemType.Support) < maxCountSupport;
        }
        public BattleCardAbility GetAbility(AbilityType type)
        {
            return abilities.Find(s => s.AbilityType == type);
        }
        
        [Button]
        public void TestAddEnergy()
        {
            CurrentEnergy++;
        }
    
        [Button]
        public void TestMinusEnergy()
        {
            CurrentEnergy--;
        }

        [Button]
        public void TestAddItems()
        {
            foreach (var item in testAdd)
                AddItem(item);
        }
    }
}