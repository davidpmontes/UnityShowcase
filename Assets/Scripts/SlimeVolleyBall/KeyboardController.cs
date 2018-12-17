using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace SlimeVolleyBall 
{
    public class KeyboardController : MonoBehaviour
    {
        public string HorizontalSetting;
        public string JumpSetting;
        public string ResetSetting;

        public float Horizontal()
        {
            return Input.GetAxis(HorizontalSetting);
        }

        public bool Jump()
        {
            return Input.GetButton(JumpSetting);
        }

        public bool Reset()
        {
            return Input.GetButton(ResetSetting);
        }
    }
}

