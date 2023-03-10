using System;
using ExitGames.Client.Photon;
using Main;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using SurvDI.UnityIntegration;
using UI;
using UnityEngine;
using UnityEngine.SceneManagement;


namespace Network
{
    [Bind]
    public class GameNetworkManager : MonoBehaviourPunCallbacks, IPreInit,IPostInit, IOnEventCallback
    {
        [SerializeField] private NetworkPlayer networkPlayerPrefab;
        [Inject] private MessageManager _messageManager;
        
        public NetworkPlayer CurrentPlayer { get; private set; }
        private bool _isCreatedPlayer;
        
        public override void OnDisconnected(DisconnectCause cause)
        {
            _messageManager.ShowMessage(cause.ToString(), "<color=red>Вы отключены</color>", OnLeftRoom);
        }
        public override void OnLeftRoom()
        {
            SceneManager.LoadScene("Menu");
        }
        public void PreInit()
        {
            PhotonNetwork.AddCallbackTarget(this);
        }
        private void OnDestroy()
        {
            PhotonNetwork.RemoveCallbackTarget(this);
        }

        public void PostInit()
        {
            PhotonNetwork.LocalPlayer.SetCustomProperties(new Hashtable{{PlayerPropConst.PlayerIsLoadSceneKey, true}});
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
    }
}