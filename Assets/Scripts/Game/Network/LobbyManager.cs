using Main;
using Network.Consts;
using Network.Panels;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.UI;
using WebSocketSharp;

namespace Network
{
    [Bind]
    public class LobbyManager : MonoBehaviourPunCallbacks, IPreInit, IInit, ITickable
    {
        [SerializeField] private TextMeshProUGUI currentStatusTxt;
        [SerializeField] private Button connectToServerBtn;

        [Inject] private PanelsManager _panelsManager;
        [Inject] private MessageManager _messageManager;
        [Inject] private PlayerDataManager _playerDataManager;
        [Inject] private PlayerInfoManager _playerInfoManager;
        
        public void PreInit()
        {
            _panelsManager.Open(PanelType.ConnectToServer);
            PhotonNetwork.AutomaticallySyncScene = true;
            
            connectToServerBtn.onClick.AddListener(ConnectToServer);
        }

        public void Init()
        {
#if UNITY_EDITOR
            ConnectToServer();
#endif
        }
        private void ConnectToServer()
        {
            connectToServerBtn.gameObject.SetActive(false);
            //if (PhotonNetwork.NetworkClientState != ClientState.PeerCreated)
            //    return;
            var playerData = _playerDataManager.LoadPlayerData();
            if (playerData.nickname.IsNullOrEmpty())
            {
                _playerInfoManager.ErrorName();
                return;
            }
                
            PlayerPropConst.AddIsNot(PlayerPropConst.PlayerDataKey, playerData);
                
            PhotonNetwork.LocalPlayer.NickName = playerData.nickname;
            
#if UNITY_EDITOR
            if (InstanceManager.InstanceManager.isSecondaryInstance)
                PhotonNetwork.LocalPlayer.NickName = "SecondaryPlayer";
#endif
            PhotonNetwork.ConnectUsingSettings();
        }
        public override void OnDisconnected(DisconnectCause cause)
        {
            if (cause == DisconnectCause.ApplicationQuit)
                return;
            _panelsManager.Open(PanelType.ConnectToServer);
            connectToServerBtn.gameObject.SetActive(true);
            _messageManager.ShowMessage(cause.ToString(), "<color=red>Ошибка подключения</color>");
        }

        public override void OnConnectedToMaster()
        {
            PhotonNetwork.JoinLobby();
        }

        public override void OnJoinedLobby()
        {
            _panelsManager.Open(PanelType.MainMenu);
        }

        public override void OnLeftLobby()
        {
            _panelsManager.Open(PanelType.ConnectToServer);
        }

        public override void OnCreatedRoom()
        {
            _panelsManager.Open(PanelType.InRoom);
        }

        public override void OnJoinedRoom()
        {
            _panelsManager.Open(PanelType.InRoom);
        }

        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            _panelsManager.Open(PanelType.MainMenu);
            _messageManager.ShowMessage(message + " ErrorCode: " + returnCode, "<color=red>Ошибка создания комнаты</color>");
        }
        public override void OnJoinRoomFailed(short returnCode, string message)
        {
            _panelsManager.Open(PanelType.Rooms);
            _messageManager.ShowMessage(message + " ErrorCode: " + returnCode, "<color=red>Ошибка входа в комнату</color>");
        }

        public override void OnLeftRoom()
        {
            _panelsManager.Open(PanelType.MainMenu);
        }

        public void Tick()
        {
            currentStatusTxt.text = PhotonNetwork.NetworkClientState.ToString();
        }
    }
}