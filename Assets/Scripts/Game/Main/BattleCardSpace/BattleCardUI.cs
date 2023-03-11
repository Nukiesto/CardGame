using System.Collections.Generic;
using Main.Items;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Main.BattleCardSpace
{
    public class BattleCardUI : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI hpCounterTxt;
        [SerializeField] private Transform effectsParent;
        
        [Header("Items")]
        [SerializeField] private Transform itemsParent;
        [SerializeField] private ItemIconCardUI[] itemsIconCardUI;
        
        [Header("Selection")]
        [SerializeField] private Transform all;
        [SerializeField] private float offsetSelected;

        [Header("Energy")] 
        [SerializeField] private Image[] energy;
        [SerializeField] private Color disableColorEnergy;
        
        private BattleCard _battleCard;
        public bool IsEnemy => _battleCard.IsEnemy;
        
        private void Awake()
        {
            _battleCard = GetComponent<BattleCard>();
            _battleCard.OnHpChangedEvent += () =>
            {
                hpCounterTxt.text = _battleCard.CurrentHp.ToString();
            };
        }
        
        public void AddEffect()
        {
            
        }

        public void SetSelected(bool set)
        {
            all.localPosition = set ? new Vector3(0f, offsetSelected * (IsEnemy ? -1 : 1), 0f) : Vector3.zero;
        }

        public void SetEnergy(int current, int maxCount)
        {
            foreach (var image in energy)
                image.gameObject.SetActive(false);
            for (var i = 0; i < maxCount; i++)
                energy[i].gameObject.SetActive(true);

            foreach (var image in energy)
                image.color = disableColorEnergy;
            for (var i = 0; i < current; i++)
                energy[i].color = Color.white;
        }

        public void SetItems(List<ItemBase> items)
        {
            foreach (var itemIconCardUI in itemsIconCardUI)
                itemIconCardUI.gameObject.SetActive(false);
            
            for (var i = 0; i < items.Count; i++)
            {
                var itemBase = items[i];
                var itemCard = itemsIconCardUI[i];

                itemCard.icon.sprite = itemBase.icon;
                itemCard.gameObject.SetActive(true);
            }
        }
    }
}