This file explains how you can compile Wolf4SDL using Bloodshed's Dev-C++.

The steps explained in this document have been tested on Windows 10 and 11 x64.

Please make sure that you review the "Troubleshooting" section at the end of
the file should you get any issues when compiling.

--------------
| Important: |
--------------
- To avoid possible conflicts between the DevCpp compiler and Code::Blocks Compiler,
  it is not recommended to install both DevCpp and Code::Blocks.

  The recommended IDE is Code::Blocks.

-----------------
| Needed files: |
-----------------
 - Dev-C++ 5.0 Beta 9.2 (4.9.9.2) with Mingw/GCC 3.4.2 (about 9 MB)
   - http://www.bloodshed.net/dev/devcpp.html

 - SDL2 2.0.18
   - https://www.libsdl.org/release/SDL2-devel-2.0.18-mingw.tar.gz

 - SDL2_Mixer 2.0.4
   - https://www.libsdl.org/projects/SDL_mixer/release/SDL2_mixer-devel-2.0.4-mingw.tar.gz

----------------
| Installation |
----------------
 - Install Dev-C++ to "C:\Dev-Cpp"

 - Extract SDL2 and SDL2_Mixer on your desktop.

 - SDL2 and SDL2_Mixer "include" folder:
   - Inside the SDL2 folder/archive, navigate to "\i686-w64-mingw32\include\"
   - Copy and paste the SDL2 folder (THE ENTIRE FOLDER, NOT THE CONTENT) into "C:\Dev-Cpp\include\"
   - SDL2 includes should be in "C:\Dev-Cpp\include\SDL2"
   - Repeat same steps for SDL2_Mixer.

 - SDL2 and SDL2_Mixer "lib" folder:
   - Create a folder called "SDL2" inside "C:\Dev-Cpp\lib\"
   - Inside the SDL2 folder/archive, navigate to "\i686-w64-mingw32\lib\"
   - Take all the FILES ONLY (no folders) (files with .a and .la extensions) and copy them into "C:\Dev-Cpp\lib\SDL2"
   - Repeat same steps for SDL2_Mixer.

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
