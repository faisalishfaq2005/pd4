# include <iostream>
# include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
int x =50, y=5;
system("cls");
gotoxy(x,y);
cout<< "Faisal Ishfaq";

}


void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}