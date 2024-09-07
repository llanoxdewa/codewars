#include <iostream>
#include <windows.h>

using namespace std;

int main(int arg,char* argv[]){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    string hasil = argv[1];
    if(hasil=="succes")
        SetConsoleTextAttribute(hConsole, 250);
    else if(hasil == "failed")
        SetConsoleTextAttribute(hConsole, 252);
    return 0;
}

