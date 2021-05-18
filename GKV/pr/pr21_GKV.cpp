#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
const int S=6, K=10, N=S*K	;
#include"..\\h\\20_print.h"
#include"..\\h\\20_mas.h"
#include"..\\h\\20_file.h"
#include"..\\h\\21_read.h"
#include"..\\h\\18_print.h"
#include"..\\h\\18_file.h"
#include"..\\h\\21_col.h";
void main()
{       
    char *str = "..\\fil_dat\\pr20_GKV.dat";
	char *str2 = "..\\fil_dat\\pr21_GKV.dat";
	char *str3 = "..\\fil_dat\\pr21_col_GKV.dat";
	page_1();
	window(1, 1, 80, 25); textbackground(6); clrscr();

	int mas[S][K], ss[N], i, j, col = 0; 
	read_mas2(mas, S, str);

        for(i = 0; i < S; i++)
	{
		// возможно потребуется задать начальное значение	
		for(j = 0; j < K; j++)
		{
			if(mas[i][j]%2 == 0) // да, ноль это четное число https://ru.wikipedia.org/wiki/Чётность_нуля, поэтому он будет выводиться
			{
				ss[col] = mas[i][j];
				col++;
			}
		} 			
	}

	Wind(5, 3, 75, 15, 5, 3);
	//Wind(17, 6, 75,23, 5, 3);
	gotoxy(20, 1); cout <<"Двумерный массив[6][10]";
	gotoxy(20, 3); cout <<"Диапозон значений от -5 до 5\n";
	ww(mas, S);
	Wind(5, 17, 75, 24, 2, 9);
	gotoxy(8, 2); cout <<"Четные значения матрицы(одномерный массив)\n";
	get_mas(ss, col);
	fil_mas(ss, col, str2);
	fil_col(col, str3);
	getch();
}
