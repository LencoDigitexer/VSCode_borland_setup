#include<conio.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\13.h"
void main( void )
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	int i; char n; int _time;
m:
	Wind(4, 6, 29, 16, 0, 1);
	gotoxy(2, 2); cout << "Tariff price";
	gotoxy(2, 4); cout << "1 - Within the network";
	gotoxy(2, 5); cout << "2 - Other operator";
	gotoxy(2, 6); cout << "3 - To a local number";
    gotoxy(1, 8); cout << "Talk time(seconds) => "; cin >> _time;
	gotoxy(1, 10); cout << "input tariff num => "; cin >> i;
	switch(i)
	{
		case  1: _in(_time); break;
		case  2: _other(_time); break;
		case  3: _gor_number(_time); break;
		default: gotoxy(2, 10); cout << "Error"; break;
	}
	Wind(4, 19, 27, 21, 0, 18);
	gotoxy(2, 2); cout << "Continue - y/n ";
	if((n = getche()) == 'y' || n == 'Y')
		goto m;
	else
	{
		gotoxy(2, 2); clreol(); cout << "Goodbye!";
	}
	getch();
}
