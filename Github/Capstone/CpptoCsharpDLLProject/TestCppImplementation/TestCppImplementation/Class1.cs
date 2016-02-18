using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
using System.Threading;

namespace TestCppImplementation
{
    class Class1
    {
        [DllImport("OpenCVDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern void runFaceTracker(string filename);

        static void Main()
        {
            Console.WriteLine("This is C# program");
            runFaceTracker("testfile.mp4");
            Thread.Sleep(100000);
        }
    }
}
