using System;
using System.Diagnostics.CodeAnalysis;
using ExitGames.Client.Photon;
using Main;
using Main.BattleCardSpace;
using Main.Players;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using SurvDI.UnityIntegration;
using Player = Main.Players.Player;

namespace Network
{
    [Serializable]
    public class NetPlayerEventData
    {
        public object data;
        public int target;
    }
    [Bind(Multy=true)]
    [SuppressMessage("ReSharper", "SwitchStatementHandlesSomeKnownEnumValuesWithDefault")]
    public class NetworkPlayer : MonoBehaviourPun, IPreInit, IInit, IOnEventCallback
    {
        private PlayerBase _player;
        
        [Inject] private Player _playerGet;
        [Inject] private Enemy _enemyGet; 
        [Inject] private BattleCardManager _battleCardManager;

        private BattleCard CurrentCard => photonView.IsMine ? _battleCardManager.MyCurrentCard : _battleCardManager.EnemyCurrentCard;

        private void Awake()
        {
            DiController.InjectGameObject(gameObject);
        }

        public void PreInit()
        {
            PhotonNetwork.AddCallbackTarget(this);
        }
        public void Init()
        {
            if (photonView.IsMine)
                _player = _playerGet;
            else
                _player = _enemyGet;

            SetSelectedCard(0);
        }
        private void OnDestroy()
        {
            PhotonNetwork.RemoveCallbackTarget(this);
        }
        
        public void SetSelectedCard(int card)
        {
            photonView.RPC(nameof(SetSelectedCardRPC), RpcTarget.All, card);
            //RaiseEvent(Events.SetSelected, card);
        }
        public void Attack(AbilityType abilityType)
        {
            photonView.RPC(nameof(AttackRPC), RpcTarget.All, abilityType);
            //RaiseEvent(Events.Attack, abilityType);
        }
        public void EndRound()
        {
            
        }
        
        [PunRPC]
        private void AttackRPC(AbilityType abilityType)
        {
            CurrentCard.BattleCardAttack.AttackAbility(abilityType);
        }
        [PunRPC]
        private void SetSelectedCardRPC(int set)
        {
            if (photonView.IsMine)   
                _battleCardManager.SetMyCurrentCard(set);
            else
                _battleCardManager.SetEnemyCurrentCard(set);
        }

        private void RaiseEvent(Events events, object obj)
        {
            return;
            PhotonNetwork.RaiseEvent((byte)events, new NetPlayerEventData{data = obj,target = photonView.ViewID}, new RaiseEventOptions { Receivers = ReceiverGroup.All}, SendOptions.SendReliable);
        }
        public void OnEvent(EventData photonEvent)
        {
            return;
            if (photonEvent.CustomData is NetPlayerEventData eventData)
            {
                if (eventData.target != photonView.ViewID)
                    return;
                var data = eventData.data;
                switch ((Events)photonEvent.Code)
                {
                    case Events.Attack:
                        AttackRPC((AbilityType)data);
                        break;
                    case Events.SetSelected:
                        SetSelectedCardRPC((int)data);
                        break;
                }
            }
        }
    }
}