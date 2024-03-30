--------------
| CodeBlocks |
--------------

This file explains how you can compile Wolf4SDL using CodeBlocks 20.03 x86 with MinGW.

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

-----------------
| Needed files: |
-----------------
- CodeBlocks 20.03 with MinGW
  http://www.codeblocks.org/downloads/binaries

--------------
| Libraries: |
--------------
- Run _script-sdl2-mingw.bat
	- This will automatically download and setup the libraries.

----------------
| Installation |
----------------
- Install CodeBlocks 20.03 - Directory has no importance.

-----------------------
| CodeBlocks Settings |
-----------------------
- Open "Wolf4SDL.cbp" (Make sure to select correct project)

- Go to "Settings" -> "Compiler".

- Find the tab "Toolchain Executables".

- Click on "Auto-detect".
  - You should see a message box confirming "Auto-detected installation path of "GNU GCC Compiler"...
  - Path should be the Code::Blocks path with "[Code::Blocks Path]\MinGW".
  - See Troubleshooting if getting another message.
   
-----------------------
| Compiling Wolf4SDL: |
-----------------------
- Compile via "Build" -> "Build"
- No errors should be displayed

--------------------
| Troubleshooting: |
--------------------

| Issue #1 |
  - Could not auto-detect installation path of "GNU GCC Compiler"
    message when auto-detecting in Toolchain executables.
  
- Solution: 
  - Navigate to the Code::Blocks installation path in "[Code::Blocks Path]\share\CodeBlocks\compilers".
  - Open the file "options_gcc.xml" in Notepad.
    - Will usually require to be run as administrator in order to be able to save the file.

  - In the upper part, in the section "<if platform="windows">" remove the prefix "mingw32-" (including the minus) for the C, CPP and LD entry.
    - After modifications, the block should look like this:

    --------------------------------------------------------------
    <if platform="windows">
        <Program name="C"         value="gcc.exe"/>
        <Program name="CPP"       value="g++.exe"/>
        <Program name="LD"        value="g++.exe"/>
        <Program name="DBGconfig" value="gdb_debugger:Default"/>
        <Program name="LIB"       value="ar.exe"/>
        <Program name="WINDRES"   value="windres.exe"/>
        <Program name="MAKE"      value="mingw32-make.exe"/>
    </if>
    --------------------------------------------------------------

- RESTART THE EDITOR
  - Retry the auto-detection, it should work.

| Issue #2 |
- Possible to get an error related to "Makefile"
   
- Solution: 
  - Go to the root directory of the source repository
  - Delete "Makefile", "Makefile.dc" and "Makefile.win"
  - Try to compile again and it will work.