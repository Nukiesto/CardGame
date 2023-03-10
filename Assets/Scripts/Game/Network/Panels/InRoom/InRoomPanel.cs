using ExitGames.Client.Photon;
using Main;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Network.Panels.InRoom
{
    [Bind]
    public class InRoomPanel : MonoBehaviourPunCallbacks, IPreInit
    {
        [SerializeField] private TextMeshProUGUI roomName;
        [SerializeField] private TextMeshProUGUI readyStatus;
        
        [SerializeField] private Button leaveBtn;
        [SerializeField] private Button startBtn;
        [SerializeField] private Button readyBtn;

        [Header("OtherPlayer")] 
        [SerializeField] private Sprite defaultOtherPlayerSprite;
        [SerializeField] private Image otherPlayerAvatar;
        [SerializeField] private TextMeshProUGUI otherPlayerNickname;
        [SerializeField] private TextMeshProUGUI otherPlayerReadyStatus;

        private int _otherPlayerActorNumber;
        private bool _hasOtherPlayer;

        private bool _isReadyPlayer;
        
        public void PreInit()
        {
            otherPlayerAvatar.sprite = defaultOtherPlayerSprite;
            otherPlayerNickname.text = "<color=red>Ждем игрока</color>";
            readyStatus.text = GetReadyText(false);
            
            readyBtn.onClick.AddListener(() =>
            {
                _isReadyPlayer = !_isReadyPlayer;
                var props = new Hashtable{{PlayerPropConst.IsPlayerReadyKey, _isReadyPlayer}};
                
                PhotonNetwork.LocalPlayer.SetCustomProperties(props);
                readyStatus.text = GetReadyText(_isReadyPlayer);
                
                PlayersPropertiesUpdated();
            });
            leaveBtn.onClick.AddListener(() =>
            {
                PhotonNetwork.LeaveRoom();
            });
            startBtn.onClick.AddListener(() =>
            {
                PhotonNetwork.CurrentRoom.IsOpen = false;
                PhotonNetwork.CurrentRoom.IsVisible = false;

                SceneManager.LoadScene("Game");
            });
        }

        public override void OnJoinedRoom()
        {
            var initialProps = new Hashtable
            {
                {PlayerPropConst.IsPlayerReadyKey, false}
            };
            PhotonNetwork.LocalPlayer.SetCustomProperties(initialProps);
            readyStatus.text = GetReadyText(false);
            InitRoom();
            
            if (!PhotonNetwork.IsMasterClient)
            {
                foreach (var player in PhotonNetwork.PlayerList)
                {
                    if (!player.IsLocal)
                    {
                        SetOtherPlayer(player);
                        break;
                    }
                }
            }
        }

        public override void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
        {
            if (!targetPlayer.IsLocal)
            {
                if (changedProps.TryGetValue(PlayerPropConst.IsPlayerReadyKey, out var isPlayerReady))
                {
                    otherPlayerReadyStatus.text = GetReadyText((bool)isPlayerReady);
                }
            }
            
            PlayersPropertiesUpdated();
        }

        public override void OnPlayerEnteredRoom(Player newPlayer)
        {
            if (!newPlayer.IsLocal)
            {
                _hasOtherPlayer = true;

                SetOtherPlayer(newPlayer);

                PlayersPropertiesUpdated();
            }
        }

        public override void OnPlayerLeftRoom(Player otherPlayer)
        {
            if (!otherPlayer.IsLocal)
            {
                _hasOtherPlayer = false;
                otherPlayerNickname.text = "<color=red>Ждем игрока</color>";
                otherPlayerAvatar.sprite = defaultOtherPlayerSprite;
                PlayersPropertiesUpdated();
            }
        }

        private bool CheckPlayersReady()
        {
            if (!PhotonNetwork.IsMasterClient)
                return false;
            if (PhotonNetwork.PlayerList.Length < 2)
                return false;
            
            foreach (var p in PhotonNetwork.PlayerList)
            {
                if (p.CustomProperties.TryGetValue(PlayerPropConst.IsPlayerReadyKey, out var isPlayerReady))
                {
                    if (!(bool)isPlayerReady)
                        return false;
                }
                else
                    return false;
            }

            return true;
        }

        public void PlayersPropertiesUpdated()
        {
            startBtn.gameObject.SetActive(CheckPlayersReady());
        }
        
        private void Clear()
        {
            startBtn.gameObject.SetActive(false);
            readyBtn.gameObject.SetActive(true);
        }
        private void InitRoom()
        {
            roomName.text = PhotonNetwork.CurrentRoom.Name;
            otherPlayerNickname.text = "<color=red>Ждем игрока</color>";
        }
        
        private void SetOtherPlayer(Player player)
        {
            otherPlayerReadyStatus.text = GetReadyText(false);
            otherPlayerNickname.text = player.NickName;
            otherPlayerAvatar.sprite = defaultOtherPlayerSprite;
            if (player.CustomProperties.TryGetValue(PlayerPropConst.PlayerDataKey, out var playerDataObj))
            {
                var playerData = (PlayerData)playerDataObj;
                otherPlayerAvatar.sprite = PlayerInfoManager.GetSprite(playerData.avatar);
            }

            if (player.CustomProperties.TryGetValue(PlayerPropConst.IsPlayerReadyKey, out var playerIsReady))
                otherPlayerReadyStatus.text = GetReadyText((bool)playerIsReady);
        }

        private static string GetReadyText(bool isReady)
        {
            return isReady ? "<color=green>Готов</color>" : "<color=red>Не готов</color>";
        }
    }
}