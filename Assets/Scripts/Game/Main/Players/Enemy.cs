using SurvDI.Application.Interfaces;

namespace Main.Players
{
    [Bind]
    public class Enemy : PlayerBase
    {
        public override bool IsPlayer => false;
    }
}