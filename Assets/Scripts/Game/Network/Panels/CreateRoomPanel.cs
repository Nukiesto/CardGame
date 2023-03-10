using ExitGames.Client.Photon;
using Main;
using Network.Consts;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using SurvDI.Core.Services.SavingIntegration;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using WebSocketSharp;

namespace Network.Panels
{
    [Bind]
    public class CreateRoomPanel : MonoBehaviourPunCallbacks, IPreInit
    {
        [SerializeField] private TMP_InputField nameRoom;
        [SerializeField] private Button createRoomBtn;

        [Inject] private PlayerInfoManager _playerInfoManager;
        [Inject] private PlayerDataManager _playerDataManager;
        
        [Saveable] private string _defaultName = "Комната";
        
        public void PreInit()
        {
            nameRoom.text = _defaultName;
            
            createRoomBtn.onClick.AddListener(() =>
            {
                if (nameRoom.text.IsNullOrEmpty())
                {
                    _playerInfoManager.ErrorName();
                    return;
                }

                var roomOptions = new RoomOptions
                {
                    IsVisible = true,
                    IsOpen = true,
                    MaxPlayers = 2,
                    PlayerTtl = 10000,
                    CustomRoomProperties = new Hashtable
                    {
                        {RoomPropConst.PlayerDataKey, _playerDataManager.LoadPlayerData()}
                    },
                    CustomRoomPropertiesForLobby = new[]
                    {
                        RoomPropConst.PlayerDataKey
                    }
                };

                _defaultName = nameRoom.text;
                PhotonNetwork.CreateRoom(nameRoom.text, roomOptions);
            });
        }
    }
}