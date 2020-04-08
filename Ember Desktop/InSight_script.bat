
rem // turn echo off
@echo off

rem // clear the screen
cls

rem // CR
echo.

rem // set variable isd to fully qualified path name of this script
rem // which should be the same as the isd directory
set isd=%~dp0

rem // launch ISD and pass in all the options passed to this script
"%isd%InSightDesktop.exe" -consoleLog -nosplash -application com.ember.shell.application logFile=isd.log scriptLoc=%* | MORE

