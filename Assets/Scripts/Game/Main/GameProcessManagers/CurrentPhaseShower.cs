using System;
using DG.Tweening;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Main.GameProcessManagers
{
    [Bind]
    public class CurrentPhaseShower : MonoBehaviour, IPreInit
    {
        [SerializeField] private Button endBtn;
        [SerializeField] private Image image;
        [SerializeField] private TextMeshProUGUI label;
        [SerializeField] private float fadeInDuration;
        [SerializeField] private float fadeOutDuration;
        [SerializeField] private float inFade;
        [SerializeField] private float waitTime;
        [SerializeField] private float waitTimeEnd;

        private Sequence _currentSequence;
        
        public void PreInit()
        {
            endBtn.onClick.AddListener(() =>
            {
                _currentSequence?.Kill();
            });
        }
        public void Set(string text, Action onEnd = null)
        {
            gameObject.SetActive(true);
            label.text = text;
            var invoked = false;
            //Debug.Log(text);
            _currentSequence = GetSequence();
            _currentSequence
                .Play()
                .OnKill(() =>
                {
                    gameObject.SetActive(false);
                    onEnd?.Invoke();
                    invoked = true;
                    //Debug.Log("OnKill");
                }).OnComplete(() =>
                {
                    if (invoked)
                        return;
                    //Debug.Log("OnComplete");
                    _currentSequence.Kill();
                });
        }

        private Sequence GetSequence()
        {
            return DOTween.Sequence()
                //FadeIn
                .Append(image.DOFade(inFade, fadeInDuration).SetEase(Ease.InSine))
                .Append(label.DOFade(inFade, fadeInDuration).SetEase(Ease.InSine))

                .AppendInterval(waitTime)

                //FadeOut
                .Append(image.DOFade(0, fadeOutDuration).SetEase(Ease.InSine))
                .Append(label.DOFade(0, fadeOutDuration).SetEase(Ease.InSine))

                .AppendInterval(waitTimeEnd);
        }
    }
}