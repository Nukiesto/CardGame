using System;
using Network.Panels;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    [Bind(Multy = true)]
    public class PlayerUIInfo : MonoBehaviour, IPreInit
    {
        [SerializeField] private Image icon;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private Sprite defaultSprite;
        
        [Inject] private PlayerInfoManager _playerInfoManager;
        
        public void PreInit()
        {
            _playerInfoManager.OnPlayerDataUpdateEvent += s =>
            {
                icon.sprite = defaultSprite;
                if (s.avatar != null)
                    icon.sprite = PlayerInfoManager.GetSprite(s.avatar);
                text.text = s.nickname;
            };
        }
    }
}