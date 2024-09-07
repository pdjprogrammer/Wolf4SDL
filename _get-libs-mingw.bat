cls
@echo off
setlocal
set libFolderName=libraries
set compilerPath=mingw
set tempFolderName=temp
set localPath=%cd%\%libFolderName%
set tempPath=%libFolderName%\temp
set sdl2Filename=SDL2-devel-2.30.7-mingw.tar.gz
set sdl2MixerFilename=SDL2_mixer-devel-2.8.0-mingw.tar.gz
set sdl2ArchivePath=%tempPath%\%sdl2Filename%
set sdl2MixerArchivePath=%tempPath%\%sdl2MixerFilename%

mkdir %libFolderName%
cd %libFolderName%
mkdir %tempFolderName%
mkdir %compilerPath%
cd ..

@echo Downloading SDL2...

powershell -Command "(New-Object Net.WebClient).DownloadFile('https://www.libsdl.org/release/%sdl2Filename%', '%sdl2ArchivePath%')"
powershell -Command "Invoke-WebRequest https://www.libsdl.org/release/%sdl2Filename% -OutFile %sdl2ArchivePath%"

@echo Downloading SDL2 Mixer...

powershell -Command "(New-Object Net.WebClient).DownloadFile('https://www.libsdl.org/projects/SDL_mixer/release/%sdl2MixerFilename%', '%sdl2MixerArchivePath%')"
powershell -Command "Invoke-WebRequest https://www.libsdl.org/projects/SDL_mixer/release/%sdl2MixerFilename% -OutFile %sdl2MixerArchivePath%"

@echo Extracting SDL2...

tar -zxvf "%localPath%\%tempFolderName%\%sdl2Filename%" --directory "%localPath%\%compilerPath%"

@echo Extracting SDL2 Mixer...
tar -zxvf "%localPath%\%tempFolderName%\%sdl2MixerFilename%" --directory "%localPath%\%compilerPath%"

@echo Removing temporary files...
rmdir /S /Q "%localPath%\%tempFolderName%"

echo.
@echo SDL2 and SDL2_Mixer libraries downloaded.
echo.
@echo You can now compile using CodeBlocks.
@echo.
@echo Make sure you are using the correct project (x86 or x64) according to your compiler.
pause