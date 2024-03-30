cls
@echo off
setlocal
set libFolderName=libraries
set compilerPath=vc
set tempFolderName=temp
set localPath=%cd%\%libFolderName%
set tempPath=%libFolderName%\temp
set sdl2Filename=SDL2-devel-2.0.18-VC.zip
set sdl2MixerFilename=SDL2_mixer-devel-2.0.4-VC.zip
set sdl2ArchivePath=%tempPath%\%sdl2Filename%
set sdl2MixerArchivePath=%tempPath%\%sdl2MixerFilename%

mkdir %libFolderName%
cd %libFolderName%
mkdir %tempFolderName%
cd ..

@echo Downloading SDL2...

powershell -Command "(New-Object Net.WebClient).DownloadFile('https://www.libsdl.org/release/%sdl2Filename%', '%sdl2ArchivePath%')"
powershell -Command "Invoke-WebRequest https://www.libsdl.org/release/%sdl2Filename% -OutFile %sdl2ArchivePath%"

@echo Downloading SDL2 Mixer...

powershell -Command "(New-Object Net.WebClient).DownloadFile('https://www.libsdl.org/projects/SDL_mixer/release/%sdl2MixerFilename%', '%sdl2MixerArchivePath%')"
powershell -Command "Invoke-WebRequest https://www.libsdl.org/projects/SDL_mixer/release/%sdl2MixerFilename% -OutFile %sdl2MixerArchivePath%"

@echo Extracting SDL2...

Call :UnZipFile "%localPath%\%compilerPath%" "%localPath%\%tempFolderName%\%sdl2Filename%"

@echo Extracting SDL2 Mixer...
Call :UnZipFile "%localPath%\%compilerPath%" "%localPath%\%tempFolderName%\%sdl2MixerFilename%"

@echo Removing temporary files...
rmdir /S /Q "%localPath%\%tempFolderName%"

echo.
@echo SDL2 and SDL2_Mixer libraries downloaded.
echo.
@echo You can now compile using Visual Studio 2019 or 2022.
pause

:UnZipFile <newzipfile>
set vbs="%temp%\_.vbs"
if exist %vbs% del /f /q %vbs%
>%vbs%  echo Set fso = CreateObject("Scripting.FileSystemObject")
>>%vbs% echo If NOT fso.FolderExists(%1) Then
>>%vbs% echo fso.CreateFolder(%1)
>>%vbs% echo End If
>>%vbs% echo set objShell = CreateObject("Shell.Application")
>>%vbs% echo set FilesInZip=objShell.NameSpace(%2).items
>>%vbs% echo objShell.NameSpace(%1).CopyHere(FilesInZip)
>>%vbs% echo Set fso = Nothing
>>%vbs% echo Set objShell = Nothing
cscript //nologo %vbs%
if exist %vbs% del /f /q %vbs%