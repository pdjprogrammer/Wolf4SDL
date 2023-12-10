<p align="center">
  <img src="https://github.com/brosseaualex/Wolf4SDL-Docs/blob/main/images/wolf4sdl_logo.png">
</p>


<h1 align="center"><em>Wolf4SDL+</em></h1>

<h2><em>Wolf4SDL</em></h2>

Wolf4SDL is an open-source port of id Software's classic first-person shooter Wolfenstein 3D to the cross-platform multimedia library "Simple DirectMedia Layer (SDL)" (http://www.libsdl.org). It is meant to keep the original feel while taking advantage of some improvements mentioned in the list below.

The overall work to get to where we are would not be possible without the following people, more credits at the end of the readme.

- Original Wolfenstein 3D by id Software (http://www.idsoftware.com)
- Wolf4SDL by Moritz "Ripper" Kroll (http://www.chaos-software.de.vu - OFFLINE)
- Modifications to r262 by Andy_Nonymous and others (http://diehardwolfers.areyep.com/viewtopic.php?t=6693)

<h2><em>Wolf4SDL+?</em></h2>
<p>The overall goal of Wolf4SDL+ was to "modernize" the engine with (in my opinion) some long overdue QOL improvements, without sacrificing the old-school feel while opening the engine to a broader audience.</p>

<p>To avoid any confusion and for both versions to be easily identifiable, I just added.</p>

<p>In order to preserve the original Wolf3D feel, all of the features added in Wolf4SDL+ version can be enabled or disabled using flags in version.h so the original Wolf4SDL has been left untouched.</p>

<p>The releases are also marked accordingly.</p>

<h2><em>Main features (Wolf4SDL+)</em></h2>

* Overhaul of the Input system
  - Full gamepad support.
  - Every in-game buttons can be remapped.
  - WASD movement key (dedicated buttons).
    - Can still use left/right keys. 
  - Mouse support overhaul.
    - Setting to Disable Y axis on mouse.
    - Mouse button support for the following actions : 
      - Run, Open, Fire, Strafe    
  - Set of 10 customizable "actions" and menu to assign/remap those buttons.
     - For modders to add their own actions more easily (Feature flag, code changes required to implement custom actions).

- Overhaul of the Menu system
  - New menu for each input type.
    - Keyboard / Mouse / Gamepad.
  - Game options menu (Incomplete).
    - Menu to enable / disable certain flags in-game.
  - Custom controls menu
    - Menu to remap the Custom Actions.

Main features (Wolf4SDL):
---
* Cross-platform:
  * Supported operating systems are at least:
    * Windows 98, Windows ME, Windows 2000, Windows XP, Windows Vista (32 and 64 bit), Windows 7 (32 and 64 bit), Windows 10 (32 and 64 bit)
    * Linux
    * BSD variants
    * Mac OS X (x86)
    * KallistiOS (used for Dreamcast)
    * Only little endian platforms like x86, ARM and SH-4 are currently supported.

- AdLib sounds and music:
  - This port includes the OPL2 emulator from MAME, so you can not only hear the AdLib sounds but also music without any AdLib-compatible soundcard in near to perfect quality!

* Multichannel digitized sounds:
  - Digitized sounds play on 8 channels! So in a fire fight you will always hear, when a guard opens the door behind you ;)

- Higher screen resolutions:
  - Aside from the original 320x200 resolution, Wolf4SDL currently supports any resolutions being multiples of 320x200 or 320x240, the default being 640x400.
  - Unlike some other ports, Wolf4SDL does NOT apply any bilinear or similar filtering, so the graphics are NOT blurred but pixelated just as we love it.

Additional features:
---
* Two additional view sizes:
  - Wolf4SDL supports one view size using the full width of the screen and showing the status bar, like in Mac-enstein, and one view size filling the whole screen (press TAB to see the status bar).

- (Nearly) unlimited sound and song lengths:
  - Mod developers are not restricted to 64kB for digitized sounds and IMF songs anymore, so longer songs and digitized sounds with better quality are possible.

* Resuming ingame music:
  - When you come back to the game from the menu or load a save game, the music will be resumed where it was suspended rather than started from the beginning.

- Freely movable pushwalls: 
  - Moving pushwalls can be viewed from all sides, allowing mod developers to place them with fewer restrictions. The player can also follow the pushwall directly instead of having to wait until the pushwall has left a whole tile.

* Optional integrated features for mod developers:
  - Wolf4SDL already contains the shading, directional 3D sprites, floor and ceiling textures, high resolution textures/sprites, parallax sky, cloud sky and outside atmosphere features, which can be easily activated in version.h.

The following versions of Wolfenstein 3D data files are currently supported by the source code (choose the version by commenting/uncommenting lines in version.h as described in that file):

```
 - Wolfenstein 3D v1.1 full Apogee
 - Wolfenstein 3D v1.4 full Apogee
 - Wolfenstein 3D v1.4 full GT/ID/Activision
 - Wolfenstein 3D v1.4 full Imagineer (Japanese)
 - Wolfenstein 3D v1.0 shareware Apogee
 - Wolfenstein 3D v1.1 shareware Apogee
 - Wolfenstein 3D v1.2 shareware Apogee
 - Wolfenstein 3D v1.4 shareware
 - Spear of Destiny full
 - Spear of Destiny demo
 - Spear of Destiny - Mission 2: Return to Danger (not tested)
 - Spear of Destiny - Mission 3: Ultimate Challenge (not tested)
```

How to play:
---
To play Wolfenstein 3D with Wolf4SDL, you just have to copy the original data
files (e.g. *.WL6) into the same directory as the Wolf4SDL executable.
Please make sure, that you use the correct version of the executable with the
according data files version as the differences are hardcoded into the binary!

If you play in windowed mode (--windowed parameter), press SCROLLLOCK or F12
to grab the mouse. Press it again to release the mouse.

Usage:
------
Wolf4SDL supports the following command line options:
```
 --help                 This help page
 --tedlevel <level>     Starts the game in the given level
 --baby                 Sets the difficulty to baby for tedlevel
 --easy                 Sets the difficulty to easy for tedlevel
 --normal               Sets the difficulty to normal for tedlevel
 --hard                 Sets the difficulty to hard for tedlevel
 --nowait               Skips intro screens
 --windowed[-mouse]     Starts the game in a window [and grabs mouse]
 --res <width> <height> Sets the screen resolution
                        (must be multiple of 320x200 or 320x240)
 --resf <w> <h>         Sets any screen resolution >= 320x200
                        (which may result in graphic errors)
 --bits <b>             Sets the screen color depth
                        (Use this when you have palette/fading problem
                        or perhaps to optimize speed on old systems.
                        Allowed: 8, 16, 24, 32, default: "best" depth)
 --nodblbuf             Don't use SDL's double buffering
 --extravbls <vbls>     Sets a delay after each frame, which may help to
                        reduce flickering (SDL does not support vsync...)
                        (unit is currently 8 ms, default: 0)
 --joystick <index>     Use the index-th joystick if available
 --joystickhat <index>  Enables movement with the given coolie hat
 --samplerate <rate>    Sets the sound sample rate (given in Hz)
 --audiobuffer <size>   Sets the size of the audio buffer (-> sound latency)
                        (given in bytes)
 --ignorenumchunks      Ignores the number of chunks in VGAHEAD.*
                        (may be useful for some broken mods)
 --configdir <dir>      Directory where config file and save games are stored
                        (Windows default: current directory,
                        others: $HOME/.wolf4sdl)

For Spear of Destiny the following additional options are available:
 --mission <mission>    Mission number to play (1-3)
 --goodtimes            Disable copy protection quiz
```

Compiling from source code:
---------------------------
The current version of the source code is available on GitHub at: https://github.com/brosseaualex/Wolf4SDL

**_Preferred methods for compiling the source code:_**

```
- Visual C++ 2022 (Wolf4SDL.VC2022.sln and Wolf4SDL.VC2022.vcproj) (see README-VC.txt)
- Visual C++ 2019 (Wolf4SDL.VC2019.sln and Wolf4SDL.VC2019.vcproj) (see README-VC.txt)
- Code::Blocks 8.02 (Wolf4SDL.cbp)
- Dev-C++ 5.0 Beta 9.2 (4.9.9.2) (Wolf4SDL.dev) (see README-devcpp.txt)
- CMake (Jetbrains Clion)
- Makefile (for Linux, BSD variants and MinGW/MSYS)
 ```

**_Deprecated, projects most likely broken, would only need an update. Unsupported for now._**
```
- Xcode (for Mac OS X, macosx/Wolf4SDL.xcodeproj/project.pbxproj)
- Special compiling for Dreamcast (see README-dc.txt)
- Special compiling for GP2X (see README-GP2X.txt)
```

To compile the source code you need the development libraries for SDL2 and SDL2_
 - SDL2 2.0.18 (https://www.libsdl.org/release/)
 - SDL2_mixer 2.0.4 (https://www.libsdl.org/projects/SDL_mixer/release/)

You also need to adjust the include and library paths in the projects accordingly.

Please note, that there is no official SDL_mixer development pack for MinGW,
yet, but you can get the needed files from a Dev-C++ package here:
http://sourceforge.net/project/showfiles.php?group_id=94270&package_id=151751
Just rename the file extension from ".devpack" to ".tar.bz2" and unpack it
with for example WinRAR. Then add the directories include/SDL and lib to the
according search paths in your project.

IMPORTANT: Do not forget to take care of version.h!
   By default it compiles for "Wolfenstein 3D v1.4 full GT/ID/Activision"!

TODOs:
------
 - Center non-ingame screens for resolutions being a multiple of 320x240
 - Add support for any graphic resolution >= 320x200

Known bugs:
-----------
 - None! ;D

Troubleshooting:
----------------
 - If your frame rate is low, consider using the original screen resolution
   (--res 320 200) or lowering the sound quality (--samplerate 22050)

Credits:
--------
 - Special thanks to id Software! Without the source code we would still have
   to pelt Wolfenstein 3D with hex editors and disassemblers ;D
 - Special thanks to the DOSBox team for providing a GPL'ed OPL2/3 emulator!
 - Special thanks to the MAME developer team for providing the source code
   of the OPL2 emulator!
 - Many thanks to "Der Tron" for hosting the svn repository, making Wolf4SDL
   FreeBSD compatible, testing, bugfixing and cleaning up the code!
 - Thanks to Chris Chokan for his improvements on Wolf4GW (base of Wolf4SDL)
 - Thanks to Pickle for the GP2X support and help on 320x240 support
 - Thanks to fackue for the Dreamcast support
 - Thanks to Chris Ballinger for the Mac OS X support
 - Thanks to Xilinx, Inc. for providing a list of maximum-length LFSR counters
   used for higher resolutions of fizzle fade

Licenses:
---------
 - The original source code of Wolfenstein 3D:
     At your choice:
     - license-id.txt or
     - license-gpl.txt
 - The OPL2 emulator:
     At your choice:
     - license-mame.txt (fmopl.cpp)
     - license-gpl.txt (dbopl.cpp, USE_GPL define in version.h or set GPL=1 for Makefile)
