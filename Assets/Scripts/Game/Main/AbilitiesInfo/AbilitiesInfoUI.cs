using System;
using Main.Abilities;
using Main.BattleCardSpace;
using Main.CardInfo;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.AbilitiesInfo
{
   
    [Bind]
    public class AbilitiesInfoUI : MonoBehaviour, IPreInit
    {
        [Serializable]
        public class AbilityUIUnit
        {
            public GameObject[] ui;
            public CardInfoAbilityInfoUI abilityInfo;
            
            public void SetOpen(bool set)
            {
                foreach (var o in ui)
                    o.SetActive(set);
            }
        }

        [SerializeField] private GameObject ui;
        [SerializeField] private AbilityUIUnit[] abilities;
        
        [Inject] private AbilitiesUIManager _abilitiesUIManager;
        [Inject] private CardInfoManager _cardInfoManager;
        [Inject] private BattleCardManager _battleCardManager;

        [SerializeField] private CardInfoAbilityInfoUI[] items;
        
        private AbilityType _opened;
        
        public void PreInit()
        {
            _abilitiesUIManager.OnClickAbilityEvent += s =>
            {
                if (_opened == s)
                {
                    Close();
                    _opened = 0;
                    return;
                }
                Close();
                
                _opened = s;
                ui.SetActive(true);

                foreach (var abilityUIUnit in abilities)
                    abilityUIUnit.SetOpen(false);

                var currentCard = _battleCardManager.MyCurrentCard;
                _cardInfoManager.SetOpen(false);
                
                for (var i = 0; i < currentCard.Items.Length; i++)
                {
                    var item = currentCard.Items[i];
                    items[i].SetItem(item, item.itemName);
                    items[i].gameObject.SetActive(true);
                }

                foreach (var abilityUIUnit in abilities)
                {
                    if (abilityUIUnit.abilityInfo.abilityType == s)
                    {
                        abilityUIUnit.abilityInfo.SetAbility(currentCard.GetAbility(s));
                        abilityUIUnit.SetOpen(true);
                    }
                }
            };
        }

        public void Close()
        {
            ui.SetActive(false);
            foreach (var abilityUIUnit in abilities)
                abilityUIUnit.abilityInfo.OnSetDisable();

            foreach (var item in items)
            {
                item.gameObject.SetActive(false);
                item.OnSetDisable();
            }
        }
    }
}