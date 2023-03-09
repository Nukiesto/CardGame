using SurvDI.Application.Interfaces;

namespace Main.Players
{
    [Bind]
    public class Player : PlayerBase
    {
        public override bool IsPlayer => true;
    }
}