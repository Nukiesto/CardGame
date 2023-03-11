using System;
using System.Linq;
using Main.BattleCardSpace;
using SurvDI.Application.Interfaces;
using SurvDI.UnityIntegration;
using UnityEngine;

namespace Main
{
    [Bind]
    public class BattleCardManager : MonoBehaviour, IPreInit, IInit
    {
        public BattleCard[] battleCards;

        [SerializeField] private RectTransform enemyCardsParent;
        [SerializeField] private RectTransform myCardsParent;
        
        [SerializeField] private BattleCard[] enemyCardsSet;
        [SerializeField] private BattleCard[] myCardsSet;

        public BattleCard MyCurrentCard { get; private set; }
        public BattleCard EnemyCurrentCard { get; private set; }
        public BattleCard[] MyCards { get; private set; } = Array.Empty<BattleCard>();
        public BattleCard[] EnemyCards { get; private set; } = Array.Empty<BattleCard>();
        
        public event Action<BattleCard> OnSelectedEvent;
        public event Action<BattleCard> OnNewCardEvent;
        
        public void PreInit()
        {
            OnNewCardEvent += s =>
            {
                s.OnClickBtnEvent += () =>
                {
                    if (s.IsEnemy)
                        MyCurrentCard.BattleCardAttack.Attack();
                };
            };
        }
        
        public void Init()
        {
            EnemyCards = enemyCardsSet.Select(battleCard => CreateCard(battleCard, enemyCardsParent, true)).ToArray();
            MyCards = myCardsSet.Select(battleCard => CreateCard(battleCard, myCardsParent, false)).ToArray();
            
            var list = EnemyCards.ToList();
            list.AddRange(MyCards);
            battleCards = list.ToArray();
            
            foreach (var battleCard in battleCards)
                battleCard.SetSelected(false);

            foreach (var battleCard in EnemyCards)
                battleCard.IsEnemy = true;
        }

        public void SetMyCurrentCard(int set)
        {
            MyCards[set].SetSelected(true);
            MyCurrentCard = MyCards[set];
            OnSelectedEvent?.Invoke(MyCurrentCard);
        }
        public void SetEnemyCurrentCard(int set)
        {
            EnemyCards[set].SetSelected(true);
            EnemyCurrentCard = EnemyCards[set];
        }
        private BattleCard CreateCard(BattleCard prefab, RectTransform parent, bool isEnemy)
        {
            var card = Instantiate(prefab, parent, true);
            card.transform.SetParent(parent);
            card.IsEnemy = isEnemy;
            DiController.InjectGameObject(card.gameObject);
            OnNewCardEvent?.Invoke(card);
            
            return card;
        }
    }
}