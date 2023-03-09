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
        [SerializeField] private AbilityUIUnit normal;
        [SerializeField] private AbilityUIUnit hold;
        [SerializeField] private AbilityUIUnit ult;
        
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
                
                normal.SetOpen(false);
                hold.SetOpen(false);
                ult.SetOpen(false);
                var currentCard = _battleCardManager.MyCurrentCard;
                _cardInfoManager.SetOpen(false);
                
                for (var i = 0; i < currentCard.Items.Length; i++)
                {
                    var item = currentCard.Items[i];
                    items[i].SetItem(item, item.itemName);
                    items[i].gameObject.SetActive(true);
                }
                switch (s)
                {
                    case AbilityType.Normal:
                        normal.abilityInfo.SetAbility(currentCard.GetAbility(s));
                        normal.SetOpen(true);
                        break;
                    case AbilityType.Hold:
                        hold.abilityInfo.SetAbility(currentCard.GetAbility(s));
                        hold.SetOpen(true);
                        break;
                    case AbilityType.Ult:
                        ult.abilityInfo.SetAbility(currentCard.GetAbility(s));
                        ult.SetOpen(true);
                        break;
                    default:
                        throw new ArgumentOutOfRangeException(nameof(s), s, null);
                }
            };
        }

        public void Close()
        {
            ui.SetActive(false);
            normal.abilityInfo.OnSetDisable();
            hold.abilityInfo.OnSetDisable();
            ult.abilityInfo.OnSetDisable();
            
            foreach (var item in items)
            {
                item.gameObject.SetActive(false);
                item.OnSetDisable();
            }
        }
    }
}