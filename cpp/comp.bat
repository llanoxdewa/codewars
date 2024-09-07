@echo off
set file=%1
echo [status]: compile %file%.cpp with c++17

g++ -std=c++17 -O3 -Wall -DLOCAL %file%.cpp -o %file%.exe

echo [status]: done
color


