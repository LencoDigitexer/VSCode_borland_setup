#include<conio.h>
#include<string.h>
#include<dos.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
int main()
{
	//page_1();
	window(1,1,80,25);  textbackground(14);clrscr();
	// Строится окно с тенью: w = 50 - 10 = 40, h = 15 - 5 = 10
	Wind(5, 3, 78, 24, 0, 1);
	int x, y, m, n, w = 73, h = 21;
	char st[] = "Цикл do while - do while";
	// Ввести допустимое количество строк
	do
	{        do{
		gotoxy (2, 2); clreol();

		cout << "Строк <= " << h - 3 << " m = "; cin >> m;
		} while(m <= 0);
	} while(m > h - 3);
	// Ввести допустимое количество столбцов
	do
	{       do{
		gotoxy (2, 6); clreol();
		cout << "Столбцов  <= " << w - 5 << " n = "; cin >> n;
		} while(n<=0);
	} while(n > w - 5);

	// Для вывода горизонтальных полосок
	clrscr(); gotoxy((w - strlen(st)) / 2, 2); cout << st;
	

	y = 1;
	do
	{
		x = 1;
		do
		{
			gotoxy(x + (w - n + 2) / 2, y + (h - m + 3) / 2);
			cout << "&";
			x++;
		} while(x <= n);
		y++;
		//delay(50);
	} while(y <= m);

	
	

	getch(); return 0;

	}