using Main.BattleCardSpace;
using Main.Crystalls;
using Main.Items;
using Main.Misc;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Main.CardInfo
{
    [Bind(Multy = true)]
    public class CardInfoAbilityInfoUI : MonoBehaviour, IPreInit
    {
        [SerializeField] private RectTransform desc;
        [SerializeField] private Button btn;
        [SerializeField] private Image icon;
        [SerializeField] private TextMeshProUGUI descText;
        [SerializeField] private RectTransform ver;
        [SerializeField] private TextMeshProUGUI nameText;
        
        [SerializeField] private CrystallUI crystallUIPrefab;
        [SerializeField] private Transform crystallParent;
        public AbilityType abilityType;
        
        private PoolMassive _crystalls;
        
        public void PreInit()
        {
            _crystalls = new PoolMassive(5, crystallParent, crystallUIPrefab.gameObject);
            btn.onClick.AddListener(() =>
            {
                desc.gameObject.SetActive(!desc.gameObject.activeSelf);
            });
        }

        public void SetAbility(BattleCardAbility ability)
        {
            Set(ability.Icon, ability.Description);
            
            _crystalls.DisableAll();
            foreach (var abilityCostPerCrystal in ability.Cost)
            {
                var crystall = (CrystallUI)_crystalls.Get(Vector3.zero).obj;
                crystall.SetText(abilityCostPerCrystal.count);
                crystall.SetCrystallType(abilityCostPerCrystal.crystallType);
            }
        }

        public void SetItem(ItemBase item, string nameSet)
        {
            nameText.text = nameSet;
            Set(item.icon, item.description);
        }

        private void Set(Sprite iconSet, string text)
        {
            icon.sprite = iconSet;
            
            descText.text = text;
            desc.gameObject.SetActive(false);
            
            var sizeDelta = desc.sizeDelta;
            var height = descText.GetPreferredValues(descText.text).y;
            var lines = descText.GetTextInfo(descText.text).lineCount;
            
            height *= lines;
            sizeDelta.y = height;
            desc.sizeDelta = sizeDelta;
            LayoutRebuilder.ForceRebuildLayoutImmediate(ver);
        }
        public void OnSetDisable()
        {
            desc.gameObject.SetActive(false);
        }
    }
}