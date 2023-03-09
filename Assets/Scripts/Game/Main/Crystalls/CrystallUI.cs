using Main.Other;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Main.Crystalls
{
    public class CrystallUI : MonoBehaviour
    {
        [SerializeField] private Image image;
        [SerializeField] private Sprite[] sprites;
        [SerializeField] private TextMeshProUGUI text;
        
        public void SetCrystallType(CrystallType crystallType)
        {
            image.sprite = sprites[(int)crystallType];
        }

        public void SetText(int count)
        {
            text.text = count.ToString();
        }

        private void OnDisable()
        {
            text.text = "";
        }
    }
}