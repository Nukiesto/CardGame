using System;
using DG.Tweening;
using Main.Abilities;
using Main.AbilitiesInfo;
using Main.CardInfo;
using Main.Crystalls;
using Main.GameProcessManagers;
using Network;
using SimpleAsync;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;

namespace Main.BattleCardSpace
{
    [Bind(Multy = true)]
    public class BattleCardAttack : MonoBehaviour, IPreInit
    {
        [SerializeField] private BattleCard battleCard;
        [SerializeField] private GameObject attackEffect;
        [SerializeField] private float time;

        [Inject] private AbilitiesUIManager _abilitiesUIManager;
        [Inject] private AbilitiesInfoUI _abilitiesInfoUI;
        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private CardInfoManager _cardInfoManager;
        [Inject] private CrystallManager _crystallManager;
        [Inject] private GameNetworkManager _gameNetworkManager;
        
        private bool _oneClick;

        public event Action OnAttackEvent;
        
        public void PreInit()
        {
            if (battleCard.IsEnemy)
                return;
            _abilitiesUIManager.OnClickAbilityEvent += s => { _oneClick = !_oneClick; };
        }
        
        public void Attack()
        {
            if (!_oneClick && !battleCard.IsEnemy)
                return;
            var ability = _battleCardManager.MyCurrentCard.SelectedAbility;
            if (!battleCard.IsEnemy)
            {
                if (_crystallManager.HasCrystallsForAbility(ability))
                    _crystallManager.RemoveCrystalls(_crystallManager.SelectCrystalsForAbility(ability));
                else
                    return;
            }
            
            _oneClick = false;
            _gameNetworkManager.CurrentPlayer.Attack(ability.AbilityType);
        }

        public void AttackAbility(AbilityType ability)
        {
            var myCard = !battleCard.IsEnemy ? _battleCardManager.MyCurrentCard : _battleCardManager.EnemyCurrentCard;
            var enemy = battleCard.IsEnemy ? _battleCardManager.MyCurrentCard : _battleCardManager.EnemyCurrentCard;
            
            attackEffect.SetActive(true);
            attackEffect.transform.localPosition = Vector3.zero;

            attackEffect.transform
                .DOMove(enemy.transform.position, time)
                .SetEase(Ease.OutQuad)
                .OnKill(() =>
                {
                    enemy.CurrentHp -= myCard.GetAbility(ability).GetDamage();
                    _abilitiesInfoUI.Close();
                    _cardInfoManager.SetOpen(false);
                    attackEffect.SetActive(false);
                    OnAttackEvent?.Invoke();
                });
        }
    }
}