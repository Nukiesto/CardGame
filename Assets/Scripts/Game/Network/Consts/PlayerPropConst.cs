using Photon.Pun;
using UnityEngine;

namespace Network
{
    public static class PlayerPropConst
    {
        public const string PlayerDataKey = "PlayerData";//PlayerData
        public const string IsPlayerReadyKey = "IsPlayerReady";//bool
        public const string PlayerIsLoadSceneKey = "PlayerIsLoadScene";//bool
        
        public static void AddIsNot(string code, object data)
        {
            if (!PhotonNetwork.InRoom)
            {
                if (!PhotonNetwork.LocalPlayer.CustomProperties.ContainsKey(code))
                    PhotonNetwork.LocalPlayer.CustomProperties.Add(code, data);
                else
                    PhotonNetwork.LocalPlayer.CustomProperties[code] = data;
            }
            else
            {
                Debug.LogError("Вы в комнате, и не можете редактировать данные таким образом");
            }
        }
    }
}