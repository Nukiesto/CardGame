using Main;
using Network.Consts;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Network.Panels.RoomList
{
    public class RoomListUnit : MonoBehaviour
    {
        [SerializeField] private GameObject isOpen;
        [SerializeField] private TextMeshProUGUI nameText;
        [SerializeField] private Button joinRoomBtn;
        [SerializeField] private RectTransform rect;
        [SerializeField] private Image playerAvatar;
        [SerializeField] private Sprite defaultSprite;
        
        private string _roomName;
        public RectTransform RectTransform => rect;
        private void Awake()
        {
            joinRoomBtn.onClick.AddListener(() =>
            {
                if (PhotonNetwork.InLobby)
                    PhotonNetwork.LeaveLobby();

                PhotonNetwork.JoinRoom(_roomName);
            });
        }

        public void Set(RoomInfo roomInfo)
        {
            playerAvatar.sprite = defaultSprite;
            if (roomInfo.CustomProperties.TryGetValue(RoomPropConst.PlayerDataKey, out var playerDataObj))
                if (playerDataObj is PlayerData playerData)
                    playerAvatar.sprite = PlayerInfoManager.GetSprite(playerData.avatar);
            
            isOpen.SetActive(roomInfo.IsOpen);
            nameText.text = roomInfo.Name;
            _roomName = roomInfo.Name;
        }
    }
}