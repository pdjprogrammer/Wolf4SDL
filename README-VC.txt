--------------
| Important: |
--------------
YOU HAVE TO USE THE CORRECT LIBRARIES ACCORDING TO THE PLATFORM YOU ARE COMPILING FOR (x86 or x64)

Visual Studio projects will look for the following folders to include libraries:

- [Wolf4SDL Project Path]\libraries\vc\include\
- [Wolf4SDL Project Path]\libraries\vc\lib\[PLATFORM (x86 or x64)]\

SDL2 has to be inside its own folders such as:

- [Wolf4SDL Project Path]\libraries\vc\include\SDL2
- [Wolf4SDL Project Path]\libraries\vc\lib\[PLATFORM (x86 or x64)]\SDL2

SDL2-2.0.18 for Visual Studio
https://www.libsdl.org/release/SDL2-devel-2.0.18-VC.zip

SDL2_mixer-2.0.4 for Visual Studio
https://www.libsdl.org/projects/SDL_mixer/release/SDL2_mixer-devel-2.0.4-VC.zip