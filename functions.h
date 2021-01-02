#include <stdio.h>
#include <stdlib.h> //for system(),rand() and all
#include <string.h>
#include <windows.h> //getstdhandle/consoleptr
#include <time.h>
#define TRUE 1
#define UNKNOWN 0
#define False -1
COORD coord = {0, 0}; // sets coordinates to (0,0) as global variables
void gotoXY(int x, int y)
{
    coord.X = x;
    coord.Y = y; // X and Y are the coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

#define delay5 Sleep(20)

void clearScreen()
{
    system("cls");
}
