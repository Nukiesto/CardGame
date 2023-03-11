using System;
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Main;
using Network.Consts;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using SurvDI.UnityIntegration;
using UI;
using UnityEngine;
using UnityEngine.SceneManagement;
using UsefulScripts.NetScripts;


namespace Network
{
    [Bind]
    public class GameNetworkManager : MonoBehaviourPunCallbacks, IPreInit,IInit, IOnEventCallback
    {
        [SerializeField] private NetworkPlayer networkPlayerPrefab;
        
        [Inject] private MessageManager _messageManager;
        
        public NetworkPlayer CurrentPlayer { get; private set; }
        public NetworkPlayer OtherPlayer { get; private set; }
        
        private bool _isCreatedPlayer;
        public readonly List<NetworkPlayer> players = new();
       
        public event Action OnStartGameEvent;
        
        public void PreInit()
        {
            PhotonNetwork.AddCallbackTarget(this);
            OnStartGameEvent += () =>
            {
                if (PhotonNetwork.IsMasterClient)
                {
                    var randomPlayer = players.GetRandom();
                    randomPlayer.SetFirstStart(true);
                }
                OtherPlayer = players.Find(s => !s.photonView.IsMine);
            };
        }
        public void Init()
        {
            PhotonNetwork.LocalPlayer.SetCustomProperties(new Hashtable
            {
                {PlayerPropConst.PlayerIsLoadSceneKey, true}
            });
        }

        public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
        {
            if (!_isCreatedPlayer && CheckAllPlayerLoadedLevel())
            {
                _isCreatedPlayer = true;
                CreatePlayer();
            }
        }

        public void OnEvent(EventData photonEvent)
        {
            
        }
        
        private void CreatePlayer()
        {
            var go = PhotonNetwork.Instantiate(networkPlayerPrefab.name, Vector3.zero, Quaternion.identity);
            CurrentPlayer = go.GetComponent<NetworkPlayer>();
        }
        
        private static bool CheckAllPlayerLoadedLevel()
        {
            foreach (var p in PhotonNetwork.PlayerList)
            {
                if (p.CustomProperties.TryGetValue(PlayerPropConst.PlayerIsLoadSceneKey, out var playerLoadedLevel))
                {
                    if ((bool) playerLoadedLevel)
                    {
                        continue;
                    }
                }

                return false;
            }

            return true;
        }

        public void AddPlayer(NetworkPlayer networkPlayer)
        {
            if (!players.Contains(networkPlayer))
            {
                players.Add(networkPlayer);
                if (players.Count == PhotonNetwork.PlayerList.Length)
                {
                    OnStartGameEvent?.Invoke();
                }
            }
        }
        public override void OnDisconnected(DisconnectCause cause)
        {
            _messageManager.ShowMessage(cause.ToString(), "<color=red>Вы отключены</color>", OnLeftRoom);
        }
        public override void OnLeftRoom()
        {
            SceneManager.LoadScene("Menu");
        }
        private void OnDestroy()
        {
            PhotonNetwork.RemoveCallbackTarget(this);
        }
    }
}