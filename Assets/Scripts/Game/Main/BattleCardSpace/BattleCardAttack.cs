using System;
using System.Collections;
using DG.Tweening;
using Main.Abilities;
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
    public class BattleCardAttack : MonoBehaviour, IPreInit, ITickable, IInit
    {
        [SerializeField] private BattleCard battleCard;
        [SerializeField] private GameObject attackEffect;
        [SerializeField] private float time;

        [Inject] private AbilitiesUIManager _abilitiesUIManager;
        [Inject] private BattleCardManager _battleCardManager;
        [Inject] private MoveManager _moveManager;
        [Inject] private CrystallManager _crystallManager;
        [Inject] private GameNetworkManager _gameNetworkManager;
        
        private CoRoutine _waitAttack;
        private bool _oneClick;

        public event Action OnAttackEvent;
        
        public void PreInit()
        {
            if (battleCard.IsEnemy)
                return;
            _abilitiesUIManager.OnClickAbilityEvent += s => { _oneClick = !_oneClick; };
        }
        public void Init()
        {
            
        }
        
        public void Tick()
        {
            if (_waitAttack is { IsDone: false })
                _waitAttack.Pump();
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
            var enemy = battleCard.IsEnemy ? _battleCardManager.MyCurrentCard : _battleCardManager.EnemyCurrentCard;

            attackEffect.SetActive(true);
            attackEffect.transform.localPosition = Vector3.zero;
            Debug.Log("Shot Enemy:" + battleCard.IsEnemy);
          
            attackEffect.transform
                .DOMove(enemy.transform.position, time)
                .SetEase(Ease.OutQuad)
                .OnKill(() =>
                {
                    Debug.Log("Попал");
                    attackEffect.SetActive(false);
                    OnAttackEvent?.Invoke();
                });
        }
    }
}