using System;
using System.Windows.Forms;
using System.Collections.Generic;
using System.Text;
using RGiesecke.DllExport;

namespace UnmanagedExportLibrary1
{
   internal static class UnmanagedExports
   {
      [DllExport("adddays", CallingConvention = System.Runtime.InteropServices.CallingConvention.StdCall)]
      static double AddDays(double dateValue, int days)
      {
         return DateTime.FromOADate(dateValue).AddDays(days).ToOADate();
      }

      [DllExport("test", CallingConvention = System.Runtime.InteropServices.CallingConvention.StdCall)]
      static void Test()
      {
          MessageBox.Show("TEST").ToString();          
      }
   }
}
