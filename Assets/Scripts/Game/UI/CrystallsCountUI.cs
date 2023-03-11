using Main.Crystalls;
using Photon.Pun;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UnityEngine;

namespace UI
{
    [Bind]
    public class CrystallsCountUI : MonoBehaviourPun, IPreInit
    {
        [SerializeField] private TextMeshProUGUI enemyCount;
        [SerializeField] private TextMeshProUGUI playerCount;

        [Inject] private CrystallManager _crystallManager;
        
        private int _playerCount;
        private int _enemyCount;
        
        public void PreInit()
        {
            UpdateCountUI();
            _crystallManager.OnCrystallCountUpdate += s =>
            {
                photonView.RPC(nameof(SetCountRPC), RpcTarget.All, s, !photonView.IsMine);
            };
        }

        private void UpdateCountUI()
        {
            enemyCount.text = _enemyCount.ToString();
            playerCount.text = _playerCount.ToString();
        }
        [PunRPC]
        private void SetCountRPC(int count, bool isEnemy)
        {
            if (PhotonNetwork.IsMasterClient)
            {
                if (isEnemy)
                    _enemyCount = count;
                else
                    _playerCount = count;
            }
            else
            {
                if (!isEnemy)
                    _enemyCount = count;
                else
                    _playerCount = count;
            }
           
            UpdateCountUI();
        }
    }
}