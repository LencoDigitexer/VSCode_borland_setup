#include<conio.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\13.h"
void main( void )
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	char i; char n; int _time;
m:
	Wind(4, 6, 29, 16, 0, 1);
	gotoxy(2, 2); cout << "Тарифные планы";
	gotoxy(2, 4); cout << "в - Внутри сети";
	gotoxy(2, 5); cout << "д - Другие операторы";
	gotoxy(2, 6); cout << "г - На городские номера";
    gotoxy(1, 8); cout << "Время созвона(сек) => "; cin >> _time;
	gotoxy(1, 10); cout << "Выбери номер тарифа => "; cin >> i;
	switch(i)
	{
		case  'в': _in(_time); break;
		case  'д': _other(_time); break;
		case  'г': _gor_number(_time); break;
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
