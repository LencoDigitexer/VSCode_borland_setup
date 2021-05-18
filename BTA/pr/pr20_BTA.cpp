#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
const int S=5, K=6;
#include"..\\h\\20_print.h"
#include"..\\h\\20_mas.h"
#include"..\\h\\20_file.h"

void main()
{   char *str = "fil_dat\\pr20_BTA.dat";
	page_1();
	window(1, 1, 80, 25); textbackground(6); clrscr();

	int mas[S][K];

	ff(mas, S);

	file(mas, S, str);

	Wind(19, 5, 65, 20, 5, 3);
	gotoxy(10, 3); cout <<"Двумерный массив[" << S << "][" << K << "]";
	gotoxy(10, 5); cout <<"Диапозон значений от 1 до 300\n";
	ww(mas, S);
	getch();
}
