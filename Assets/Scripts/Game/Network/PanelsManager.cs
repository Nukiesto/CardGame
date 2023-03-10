using System;
using System.Collections.Generic;
using Photon.Pun;
using SurvDI.Application.Interfaces;
using UnityEngine;
using UnityEngine.UI;

namespace Network
{
    public enum PanelType
    {
        ConnectToServer,
        Rooms,
        InRoom,
        MainMenu,
        PlayerInfo,
        CreateRoom
    }
    
    [Bind]
    public class PanelsManager : MonoBehaviourPunCallbacks
    {
        [Serializable]
        private class PanelUnit
        {
            public Button[] enterBtn;
            public GameObject ui;
            public PanelType type;
        }

        [SerializeField] private PanelUnit[] panels;
        
        private readonly Dictionary<PanelType, PanelUnit> _panels = new();
        
        private void Awake()
        {
            foreach (var panelUnit in panels)
                _panels.Add(panelUnit.type, panelUnit);
            foreach (var panelUnit in panels)
            {
                foreach (var eButton in panelUnit.enterBtn)
                {
                    eButton.onClick.AddListener(() =>
                    {
                        Open(panelUnit.type);
                    });
                }
            }
        }

        public void Open(PanelType type)
        {
            if (!_panels.TryGetValue(type, out var panelUnit)) return;
            
            foreach (var a in _panels)
                a.Value.ui.SetActive(false);
            panelUnit.ui.SetActive(true);
        }
    }
}