using System;
using Main.Abilities;
using Main.AbilitiesInfo;
using Main.BattleCardSpace;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.CardInfo
{
    [Bind]
    public class CardInfoManager : MonoBehaviour, IInit
    {
        [SerializeField] private GameObject battleCardUI;
        [SerializeField] private CardInfoAbilityInfoUI normal;
        [SerializeField] private CardInfoAbilityInfoUI hold;
        [SerializeField] private CardInfoAbilityInfoUI ult;

        [SerializeField] private CardInfoAbilityInfoUI[] items;
        
        public bool IsOpen { get; private set; }
        public BattleCard CurrentCard { get; private set; }

        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private AbilitiesInfoUI _abilitiesInfoUI;
        
        public void Init()
        {
            foreach (var battleCard in _battleCardManager.battleCards)
            {
                battleCard.OnClickBtnEvent += () =>
                {   
                    if (IsOpen&&CurrentCard == battleCard)
                        OpenBattleCard(battleCard, false);
                    else
                        OpenBattleCard(battleCard, true);
                };
            }
        }

        private void OpenBattleCard(BattleCard battleCard, bool open)
        {
            SetOpen(false);
            
            CurrentCard = battleCard;
            SetOpen(open);

            normal.SetAbility(battleCard.GetAbility(AbilityType.Normal));
            hold.SetAbility(battleCard.GetAbility(AbilityType.Hold));
            ult.SetAbility(battleCard.GetAbility(AbilityType.Ult));

            for (var i = 0; i < battleCard.Items.Length; i++)
            {
                var item = battleCard.Items[i];
                items[i].SetItem(item, item.itemName);
                items[i].gameObject.SetActive(true);
            }
        }

        public void SetOpen(bool open)
        {
            battleCardUI.SetActive(open);
            IsOpen = open;
            if (!IsOpen)
            {
                CurrentCard = null;
                normal.OnSetDisable();
                hold.OnSetDisable();
                ult.OnSetDisable();

                foreach (var item in items)
                {
                    item.gameObject.SetActive(false);
                    item.OnSetDisable();
                }
            }
            if (open && _battleCardManager.EnemyCurrentCard != CurrentCard && CurrentCard != null)
                _abilitiesInfoUI.Close();
        }
    }
}