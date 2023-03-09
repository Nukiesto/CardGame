using System.Collections.Generic;
using System.Linq;
using InspectorUtils.Runtime;
using Main.Misc;
using Main.Other;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Main.Crystalls
{
    [Bind]
    public class CrystallManager : MonoBehaviour, IInit
    {
        [SerializeField] private int startCountCrystalls;
        [SerializeField] private CrystallType startType;

        [Header("UI")] 
        [SerializeField] private TextMeshProUGUI crystallsCountTxt;
        [SerializeField] private GameObject crystallPrefab;
        [SerializeField] private Transform crystallsParent;
        
        private readonly List<CrystallType> _crystalls = new();

        private PoolMassive _crystallsUI;
        
        
        public void Init()
        {
            _crystallsUI = new PoolMassive(30, crystallsParent, crystallPrefab);
            for (var i = 0; i < startCountCrystalls; i++)
            {
                AddCrystall(startType);
            }
        }

        public void AddCrystall(CrystallType type)
        {
            _crystalls.Add(type);
            UpdateUI();
        }

        public void RemoveCrystall(CrystallType type)
        {
            if (_crystalls.Contains(type))
                _crystalls.Remove(type);
            UpdateUI();
        }
        
        public int GetCountCrystall(CrystallType type)
        {
            return _crystalls.Count(s => s == type);
        }

        private void UpdateUI()
        {
            _crystalls.Sort();
            crystallsCountTxt.text = _crystalls.Count.ToString();
            _crystallsUI.DisableAll();
            
            foreach (var type in _crystalls)
            {
                var crystall = (CrystallUI)_crystallsUI.Get(Vector3.zero).obj;
                crystall.SetCrystallType(type);
            }
        }

        [Button]
        private void TestAddRandom()
        {
            AddCrystall((CrystallType)Random.Range(0,7));
        }

        [Button]
        private void TestRemove()
        {
            if (_crystalls.Count > 0)
                RemoveCrystall(_crystalls.First());
        }

        public void Clear()
        {
            _crystalls.Clear();
            UpdateUI();
        }
    }
}