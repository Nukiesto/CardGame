using System.Collections.Generic;
using Main.Misc;
using Photon.Pun;
using Photon.Realtime;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Network.Panels.RoomList
{
    [Bind]
    public class RoomListManager : MonoBehaviourPunCallbacks, ITickable
    {
        [SerializeField] private TextMeshProUGUI countRoomsText;
        [SerializeField] private RoomListUnit roomListUnit;
        [SerializeField] private RectTransform roomListUnitsParent;
        [SerializeField] private VerticalLayoutGroup ver;
        
        private readonly Dictionary<string, RoomInfo> _cachedRoomList = new();

        private PoolMassive _rooms;

        private void Awake()
        {
            _rooms = new PoolMassive(20, roomListUnitsParent.transform, roomListUnit.gameObject);
        }

        public override void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            ClearList();
            
            foreach (var info in roomList)
            {
                if (!info.IsOpen || !info.IsVisible || info.RemovedFromList)
                {
                    if (_cachedRoomList.ContainsKey(info.Name))
                        _cachedRoomList.Remove(info.Name);

                    continue;
                }
                
                if (_cachedRoomList.ContainsKey(info.Name))
                    _cachedRoomList[info.Name] = info;
                else
                    _cachedRoomList.Add(info.Name, info);
            }
            foreach (var info in _cachedRoomList.Values)
            {
                var obj = _rooms.Get(Vector3.zero);
                obj.transform.localScale = Vector3.one;
                
                var unit = (RoomListUnit)obj.obj;
                unit.Set(info);
            }

            var height = _cachedRoomList.Values.Count * roomListUnit.RectTransform.sizeDelta.y + _cachedRoomList.Values.Count * ver.spacing;
            var size = new Vector2(roomListUnitsParent.sizeDelta.x, height);
            roomListUnitsParent.sizeDelta = size;
            LayoutRebuilder.ForceRebuildLayoutImmediate(roomListUnitsParent);
            
            countRoomsText.text = "Кол-во комнат: " + PhotonNetwork.CountOfRooms;
        }
        
        public override void OnJoinedLobby()
        {
            _cachedRoomList.Clear();
            ClearList();
        }
        public override void OnLeftLobby()
        {
            _cachedRoomList.Clear();
            ClearList();
        }

        public override void OnJoinedRoom()
        {
            _cachedRoomList.Clear();
        }

        private void ClearList()
        {
            _rooms.DisableAll();
        }

        public void Tick()
        {
            countRoomsText.text = "Кол-во комнат: " + PhotonNetwork.CountOfRooms;
        }
    }
}