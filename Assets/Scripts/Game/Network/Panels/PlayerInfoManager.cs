using System;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using Main;
using SurvDI.Application.Interfaces;
using SurvDI.Core.Common;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;
using WebSocketSharp;
using Image = UnityEngine.UI.Image;

namespace Network.Panels
{
    [Serializable]
    public class AvatarData
    {
        public byte[] colors;
        public TextureFormat format;
        
        public AvatarData(TextureFormat textureFormat,byte[] colors)
        {
            this.colors = colors;
            format = textureFormat;
        }
    }
    [Bind]
    public class PlayerInfoManager : MonoBehaviour, IInit
    {
        [SerializeField] private TMP_InputField nickEnter;
        [SerializeField] private Image avatarImage;

        [SerializeField] private Button setAvatarBtn;
        [SerializeField] private Button saveBtn;
        
        [Header("ErrorAvatar")]
        [SerializeField] private string errorTitle;
        [SerializeField, TextArea] private string errorMsg;
        [FormerlySerializedAs("maxSizeAvatarKylobytes")] [SerializeField] private int maxSizeAvatarBytes;
        
        [Header("ErrorName")]
        [SerializeField] private string errorEmptyNameTitle;
        [SerializeField, TextArea] private string errorEmptyNameMsg;
        
        [Inject] private PlayerDataManager _playerDataManager;
        [Inject] private PanelsManager _panelsManager;
        [Inject] private MessageManager _messageManager;
        
        private PlayerData _playerData;
        public event Action<PlayerData> OnPlayerDataUpdateEvent;
        
        public void Init()
        {
            _playerData = _playerDataManager.LoadPlayerData();
            
            OnPlayerDataUpdateEvent?.Invoke(_playerData);
            nickEnter.text = _playerData.nickname;
            
            nickEnter.onValueChanged.AddListener(s =>
            {
                _playerData.nickname = s;
            });
            
            setAvatarBtn.onClick.AddListener(() =>
            {
                NativeGallery.GetImageFromGallery(path =>
                {
                    if (string.IsNullOrEmpty(path))
                        return;
                    var texture = NativeGallery.LoadImageAtPath(path, out var bytes, out var imagePath);
                    
                    if (maxSizeAvatarBytes < bytes.Length)
                        bytes = ResizeToDestination(imagePath, maxSizeAvatarBytes, out var success);

                    var avatarData = new AvatarData(texture.format, bytes);
                    
                    SetAvatar(avatarData);

                    _playerData.avatar = avatarData;
                    _playerData.hasAvatar = true;
                });
            });
            
            saveBtn.onClick.AddListener(() =>
            {
                if (nickEnter.text.IsNullOrEmpty())
                {
                    ErrorName();
                    return;
                }
                OnPlayerDataUpdateEvent?.Invoke(_playerData);
                _playerData.nickname = nickEnter.text;
                
                _playerDataManager.SavePlayerData();
                _panelsManager.Open(PanelType.ConnectToServer);
            });
            
            if (_playerData.avatar != null && _playerData.hasAvatar)
                SetAvatar(_playerData.avatar);
        }

        public void ErrorName()
        {
            _messageManager.ShowMessage(errorEmptyNameMsg, errorEmptyNameTitle);
        }
        private void SetAvatar(AvatarData avatarData)
        {
            avatarImage.sprite = GetSprite(avatarData);
            OnPlayerDataUpdateEvent?.Invoke(_playerData);
        }

        private static Texture2D GetTexture(TextureFormat textureFormat, byte[] image)
        {
            var avatar = new Texture2D(2, 2, textureFormat, true, false);
            avatar.LoadImage(image);
            return avatar;
        }
        public static Sprite GetSprite(AvatarData avatarData)
        {
            var avatar = GetTexture(avatarData.format, avatarData.colors);
            
            var sprite = Sprite.Create(avatar, new Rect(0f, 0f, avatar.width, avatar.height), Vector2.one/2f);
            return sprite;
        }

        private static byte[] ResizeToDestination(string path, int destination, out bool success)
        {
            var size = 256;
            var image = Resize(path, size, size);
            while (image.Length > destination)
            {
                size -= 64;
                if (size <= 0)
                {
                    success = image.Length < destination;
                    return image;
                }
                    
                image = Resize(path, size, size);
            }
            success = image.Length < destination;
            return image;
        }
        private static byte[] Resize(string path, int width, int height)
        {
            var image = (System.Drawing.Image)ResizeImage(System.Drawing.Image.FromFile(path), width, height);
            var imageConverter = new ImageConverter();
            return (byte[])imageConverter.ConvertTo(image, typeof(byte[]));
        }
        
        public static Bitmap ResizeImage(System.Drawing.Image image, int width, int height)
        {
            var destRect = new Rectangle(0, 0, width, height);
            var destImage = new Bitmap(width, height);

            destImage.SetResolution(image.HorizontalResolution, image.VerticalResolution);

            using var graphics = System.Drawing.Graphics.FromImage(destImage);
            
            graphics.CompositingMode = CompositingMode.SourceCopy;
            graphics.CompositingQuality = CompositingQuality.HighQuality;
            graphics.InterpolationMode = InterpolationMode.HighQualityBicubic;
            graphics.SmoothingMode = SmoothingMode.HighQuality;
            graphics.PixelOffsetMode = PixelOffsetMode.HighQuality;

            using var wrapMode = new ImageAttributes();
            
            wrapMode.SetWrapMode(System.Drawing.Drawing2D.WrapMode.TileFlipXY);
            graphics.DrawImage(image, destRect, 0, 0, image.Width,image.Height, GraphicsUnit.Pixel, wrapMode);

            return destImage;
        }
    }
}