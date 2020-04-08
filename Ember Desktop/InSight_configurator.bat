
rem // turn echo off
@echo off

rem // clear the screen
rem cls //don't clear the screen

rem // CR
echo.

rem // set variable isd to fully qualified path name of this script
rem // which should be the same as the isd directory
set isd=%~dp0

rem // check for build .xml if it doesn't exist, copy into this directory

rem // launch ISD and pass in all the options passed to this script
"%isd%InSightDesktop.exe" -nosplash -product com.ember.app_configurator.product %* 
