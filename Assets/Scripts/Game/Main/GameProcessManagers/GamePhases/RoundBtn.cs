using Network;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using UnityEngine;
using UnityEngine.UI;

namespace Main.GameProcessManagers.GamePhases
{
    [Bind]
    public class RoundBtn : MonoBehaviour, IPreInit
    {
        [SerializeField] private Button openBtn;
        [SerializeField] private GameObject textFirstMove;
        [SerializeField] private Button endRoundBtn;

        [Inject] private GamePhaseRound _round;
        [Inject] private GameNetworkManager _gameNetworkManager;
        
        private bool _isOpenedEndBtn;
        
        public void End()
        {
            endRoundBtn.gameObject.SetActive(false);
        }

        public void PreInit()
        {
            _gameNetworkManager.OnStartGameEvent += () =>
            {
                endRoundBtn.onClick.AddListener(() =>
                {
                    _gameNetworkManager.CurrentPlayer.EndRoundBtnClick();
                });
                openBtn.onClick.AddListener(() =>
                {
                    if (_round.CurrentPhase == RoundPhase.MovePlayer && !_gameNetworkManager.CurrentPlayer.IsEndRound)
                        SetEndRoundBtn(!_isOpenedEndBtn);
                });
            };
        }
        
        public void SetEndRoundBtn(bool open)
        {
            _isOpenedEndBtn = open;
            endRoundBtn.gameObject.SetActive(open);
            textFirstMove.gameObject.SetActive(_round.CanEndRound && open && !_round.SomeOneEndRound);
        }
    }
}