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
        
        private bool _isOpenedEndBtn;
        
        public void End()
        {
            endRoundBtn.gameObject.SetActive(false);
        }

        public void PreInit()
        {
            endRoundBtn.onClick.AddListener(() =>
            {
                if (!_round.playerEndPlay)
                {
                    _round.playerEndPlay = true;
                    _round.isPlayerFirstPlay = !_round.someOneEndRound;
                    _round.EndRoundPlayer(_round.isPlayerFirstPlay);
                }
            });
            openBtn.onClick.AddListener(() =>
            {
                if (_round.CurrentPhase == RoundPhase.MovePlayer && !_round.playerEndPlay)
                    SetEndRoundBtn(!_isOpenedEndBtn);
            });
        }
        
        public void SetEndRoundBtn(bool open)
        {
            _isOpenedEndBtn = open;
            endRoundBtn.gameObject.SetActive(open);
            textFirstMove.gameObject.SetActive(_round.CanEndRound && open && !_round.someOneEndRound);
        }
    }
}