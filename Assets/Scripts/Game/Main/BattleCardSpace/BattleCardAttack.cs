using System;
using System.Collections;
using DG.Tweening;
using Main.Abilities;
using Main.GameProcessManagers;
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
            if (!_oneClick)
                return;
            _oneClick = false;
            var enemy = _battleCardManager.EnemyCurrentCard;
            var player = _battleCardManager.MyCurrentCard;
            
            attackEffect.SetActive(true);
            attackEffect.transform.localPosition = Vector3.zero;
            
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