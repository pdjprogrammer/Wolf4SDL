This file explains how you can compile Wolf4SDL using Bloodshed's Dev-C++.

The steps explained in this document have been tested on Windows 10 and 11 x64.

Please make sure that you review the "Troubleshooting" section at the end of
the file should you get any issues when compiling.

--------------
| Important: |
--------------
- To avoid possible conflicts between the DevCpp compiler and Code::Blocks Compiler,
  it is not recommended to install both DevCpp and Code::Blocks.

  The recommended IDE is Code::Blocks or Visual Studio.

  YOU HAVE TO USE THE CORRECT LIBRARIES ACCORDING TO THE PLATFORM YOU ARE COMPILING FOR (x86 or x64)

  Dev-C++ only comes with a x86 compiler. Make sure you use the x86 SDL2 Libraries.

-----------------
| Needed files: |
-----------------
 - Dev-C++ 5.0 Beta 9.2 (4.9.9.2) with Mingw/GCC 3.4.2 (about 9 MB)
   - https://www.bloodshed.net/

--------------
| Libraries: |
--------------
- Run _script-sdl2-mingw.bat
	- This will automatically download and setup the libraries.
	
----------------
| Installation |
----------------
 - Install Dev-C++ to "C:\Dev-Cpp"
 - Open Wolf4SDL.dev and compile!

--------------------
| Data file setup: |
--------------------
 - Copy the data files (e.g. *.WL6) you want to use to the Wolf4SDL source code folder
 - If you want to use the data files of the full Activision version of Wolfenstein 3D v1.4,
   you can just skip to the next section.
 - Otherwise open "version.h" and comment/uncomment the definitions according to the
   description given in this file.
   
-----------------------
| Compiling Wolf4SDL: |
-----------------------
 - Compile via "Execute" -> "Compile"
 - No errors should be displayed
 - Run Wolf4SDL via "Execute" -> "Run"

--------------------
| Troubleshooting: |
--------------------
 - Issue #1:
   - Compiler will show "[Build Error] [obj/Wolf4SDL.exe] Error 1"
     
	 By looking at the "Compile Log", you will also see at the end a
     line like this: "gcc.exe: Internal error: Aborted (program collect2)"
   
 - Solution: 
   - Navigate to "C:\Dev-Cpp\libexec\gcc\mingw32\3.4.2\"
   - Find the file called "collect2.exe" and rename it to "collect2.exe.old"
     (you can also delete it)
   - Try to compile again and it will work.
   
 - Issue #2:
   - Compiler will show "undefined reference to `__cpu_features_init'"
   
 - Solution:
   - Make sure there is no C:\mingw folder. Otherwise Dev-C++ will mix different
     versions of MinGW libraries.
