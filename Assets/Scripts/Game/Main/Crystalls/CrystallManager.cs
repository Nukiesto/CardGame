using System;
using System.Collections.Generic;
using System.Linq;
using InspectorUtils.Runtime;
using Main.BattleCardSpace;
using Main.Misc;
using Main.Other;
using SurvDI.Application.Interfaces;
using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Main.Crystalls
{
    [Bind]
    public class CrystallManager : MonoBehaviour, IPreInit
    {
        [Header("UI")] 
        [SerializeField] private TextMeshProUGUI crystallsCountTxt;
        [SerializeField] private GameObject crystallPrefab;
        [SerializeField] private Transform crystallsParent;
        
        [SerializeField] private List<CrystallType> _crystalls = new();

        private PoolMassive _crystallsUI;
        public event Action<int> OnCrystallCountUpdate;
        
        public void PreInit()
        {
            _crystallsUI = new PoolMassive(30, crystallsParent, crystallPrefab);
        }

        public void AddCrystall(CrystallType type)
        {
            if (type == CrystallType.Any || type == CrystallType.Undefined)
                Debug.LogError("CannotSet:" + type);
            _crystalls.Add(type);
            UpdateUI();
            OnCrystallCountUpdate?.Invoke(_crystalls.Count);
        }

        public void RemoveCrystall(CrystallType type)
        {
            if (type == CrystallType.Any)
            {
                var toRemove = _crystalls.FirstOrDefault(s => s != CrystallType.Universal);
                if (toRemove != CrystallType.Undefined)
                    type = toRemove;
                else
                {
                    toRemove = _crystalls.FirstOrDefault(s => s == CrystallType.Universal);
                    if (toRemove != CrystallType.Undefined)
                        type = toRemove;
                }
            }
            //Debug.Log("ToRemove:" + type);
            if (_crystalls.Contains(type))
                _crystalls.Remove(type);
            UpdateUI();
            OnCrystallCountUpdate?.Invoke(_crystalls.Count);
        }
        
        public int GetCountCrystall(CrystallType type)
        {
            if (type == CrystallType.Any)
                return _crystalls.Count;
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

        public void RemoveCrystalls(List<CrystallType> crystalls)
        {
            foreach (var crystall in crystalls)
                RemoveCrystall(crystall);
        }
        
        public bool HasCrystallsForAbility(BattleCardAbility cardAbility)
        {
            var has = cardAbility.Cost.Count(abilityCost => 
                GetCountCrystall(abilityCost.crystallType) >= abilityCost.count ||
                GetCountCrystall(CrystallType.Universal) >= abilityCost.count);
            
            return has == cardAbility.Cost.Length;
        }
        public List<CrystallType> SelectCrystalsForAbility(BattleCardAbility cardAbility)
        {
            var selected = new List<CrystallType>();
            foreach (var abilityCost in cardAbility.Cost)
            {
                if (GetCountCrystall(abilityCost.crystallType) >= abilityCost.count)
                {
                    for (var i = 0; i < abilityCost.count; i++)
                        selected.Add(abilityCost.crystallType);
                }
                else if (GetCountCrystall(CrystallType.Universal) >= abilityCost.count)
                {
                    for (var i = 0; i < abilityCost.count; i++)
                        selected.Add(CrystallType.Universal);
                }
            }

            return selected;
        }
    }
}