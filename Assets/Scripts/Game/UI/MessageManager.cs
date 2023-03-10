using System;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [Bind]
    public class MessageManager : MonoBehaviour, IPreInit
    {
        [SerializeField] private GameObject ui;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private TextMeshProUGUI titleText;
        [SerializeField] private Button okBtn;

        private Action _onClickOk;
        
        public void PreInit()
        {
            okBtn.onClick.AddListener(() =>
            {
                ui.SetActive(false);
                _onClickOk?.Invoke();
                _onClickOk = null;
            });
        }
        public void ShowMessage(string textSet, string title, Action onClick = null)
        {
            titleText.text = title;
            text.text = textSet;
            ui.SetActive(true);
            _onClickOk = onClick;
        }
    }
}