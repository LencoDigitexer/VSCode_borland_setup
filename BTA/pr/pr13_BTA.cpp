#include<conio.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\131.h"
void main( void )
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	char i; char n; int _time;
m:
	Wind(4, 6, 29, 16, 0, 1);
	gotoxy(2, 2); cout << "Время суток";
	gotoxy(2, 4); cout << "у - утро";
	gotoxy(2, 5); cout << "н - ночь";
	gotoxy(2, 6); cout << "в - вечер";
	gotoxy(2, 7); cout << "д - день";
	gotoxy(1, 9); cout << "Выбери время суток => "; cin >> i;
	switch(i)
	{
		case  'у': y(_time); break;
		case  'н': no(_time); break;
		case  'в': v(_time); break;
		case  'д': d(_time); break;
		case  'У': y(_time); break;
		case  'Н': no(_time); break;
		case  'В': v(_time); break;
		case  'Д': d(_time); break;
		default: gotoxy(2, 10); cout << "Ошибка"; break;
	}
	Wind(4, 19, 27, 21, 0, 18);
	gotoxy(2, 2); cout << "Продолжить? - y/n ";
	if((n = getche()) == 'y' || n == 'Y')
		goto m;
	else
	{
		gotoxy(2, 2); clreol(); cout << "До свидания!";
	}
	getch();
}
