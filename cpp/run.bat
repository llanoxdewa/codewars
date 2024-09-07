@echo off
echo [status]: compile
g++ -std=c++17 -O3 -Wall -DLOCAL running_case.cpp -o running_case.exe
echo [status]: running
running_case.exe
pause
color
cls
