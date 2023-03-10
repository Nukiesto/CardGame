using System;
using Main.BattleCardSpace;
using Main.GameProcessManagers.GamePhases;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.Abilities
{
    [Bind]
    public class AbilitiesUIManager : MonoBehaviour, IPreInit
    {
        [SerializeField] private AbilityBtn[] abilities;

        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private GamePhaseRound _phaseRound;
        
        public event Action<AbilityType> OnClickAbilityEvent;
        
        public void PreInit()
        {
            _battleCardManager.OnSelectedEvent += SetCard;
            foreach (var abilityBtn in abilities)
            {
                abilityBtn.Button.onClick.AddListener(() =>
                {
                    if (_phaseRound.CurrentPhase == RoundPhase.MovePlayer)
                    {
                        _battleCardManager.MyCurrentCard.SelectedAbility = _battleCardManager.MyCurrentCard.GetAbility(abilityBtn.AbilityType);
                        OnClickAbilityEvent?.Invoke(abilityBtn.AbilityType);
                    }
                });
            }
        }

        public void SetCanAttack(bool setCan)
        {
            foreach (var abilityBtn in abilities)
                abilityBtn.SetCanAttack(setCan);
        }
        
        private void SetCard(BattleCard battleCard)
        {
            foreach (var abilityBtn in abilities)
                abilityBtn.SetAbility(battleCard.GetAbility(abilityBtn.AbilityType));
        }
    }
}