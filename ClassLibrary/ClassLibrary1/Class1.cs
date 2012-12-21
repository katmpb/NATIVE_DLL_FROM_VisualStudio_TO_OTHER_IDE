using System;
using System.Windows.Forms;
using System.Collections.Generic;
using System.Text;
using RGiesecke.DllExport;

namespace ClassLibrary1
{
    public static class Class1    
    {
        [DllExport("test", CallingConvention = System.Runtime.InteropServices.CallingConvention.StdCall)]
        static void Test()
        {
            MessageBox.Show("TEST").ToString();
        }
    }
}
