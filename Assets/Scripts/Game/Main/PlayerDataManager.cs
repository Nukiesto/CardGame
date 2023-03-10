using System;
using Network.Panels;
using SurvDI.Application.Interfaces;
using UnityEngine;
using UsefulScripts.NetScripts.Data;
using Random = UnityEngine.Random;

namespace Main
{
    [Serializable]
    public class PlayerData
    {
        public string nickname;
        public AvatarData avatar;
        public bool hasAvatar;
        
        public static PlayerData GetDefault()
        {
            return new PlayerData
            {
                nickname = "PlayerUndefined" + Random.Range(0, 10000),
                hasAvatar = false
            };
        }
    }
    [Bind]
    public class PlayerDataManager : MonoBehaviour
    {
        private PlayerData _playerData;
        private const string PlayerDataFname = "PlayerData.data";

        public void SavePlayerData()
        {
            DataSaver.Save(PlayerDataFname, _playerData ??= PlayerData.GetDefault());
        }
        public PlayerData LoadPlayerData()
        {
            var data = DataSaver.Load<PlayerData>(PlayerDataFname) ?? PlayerData.GetDefault();
            _playerData = data;
            return _playerData;
        }

        private void OnDestroy()
        {
            SavePlayerData();
        }
    }
}