@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion
set ROOT=%~dp0
set MINGW=D:\Clion\CLion 2026.2.2\bin\mingw\bin
set PATH=%MINGW%;%PATH%

if not "%~1"=="" (
  set NAME=%~1
  goto build
)

echo.
echo Available practices:
echo.
set /a i=0
for /d %%d in ("%ROOT%practices\*") do (
  if exist "%%d\main.cpp" (
    set /a i+=1
    echo   !i!^) %%~nxd
    set P!i!=%%~nxd
  )
)
if %i%==0 ( echo   [none found] & pause & exit /b 1 )
echo.
set /p CHOICE=Enter number: 
set NAME=!P%CHOICE%!
if "%NAME%"=="" ( echo [ERROR] invalid choice & pause & exit /b 1 )

:build
if not exist "%ROOT%practices\%NAME%\main.cpp" (
  echo [ERROR] practices\%NAME%\main.cpp not found
  pause
  exit /b 1
)
echo.
echo ---- compiling %NAME% ----
"%MINGW%\g++.exe" -std=c++17 "%ROOT%practices\%NAME%\main.cpp" -o "%ROOT%build-%NAME%.exe"
if errorlevel 1 (
  echo.
  echo [ERROR] compile failed
  pause
  exit /b 1
)
echo ---- running %NAME% ----
echo.
"%ROOT%build-%NAME%.exe"
echo.
pause