#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
const int S=5, K=6, N=S*K;
#include"..\\h\\20_print.h"
#include"..\\h\\20_mas.h"
#include"..\\h\\20_file.h"
#include"..\\h\\21_read.h"
#include"..\\h\\18_print.h"
#include"..\\h\\18_file.h"

void main()
{   char *str = "fil_dat\\pr20_BTA.dat";
	char *str2 = "fil_dat\\pr21_BTA.dat";
	//page_1();
	window(1, 1, 80, 25); textbackground(6); clrscr();

	int mas[S][K], ss[N], i, j, col = 0; 
	read_mas2(mas, S, str);
    
    for(i = 0; i < S; i++)
	{
			
		for(j = 0; j < K; j++)
		{
			if(mas[i][j] > 0)
			{
				ss[col] = mas[i][j];
				col++;
                
			}
		} 			
	}

	Wind(5, 3, 75, 15, 5, 3);
	//Wind(17, 6, 75,23, 5, 3);
	gotoxy(20, 1); cout <<"Двумерный массив[" << S << "][" << K << "]";
	gotoxy(20, 3); cout <<"Диапозон значений от 1 до 300\n";
	ww(mas, S);


    
	Wind(5, 17, 75, 24, 5, 3);
	gotoxy(10, 3); cout <<"Положительные значения матрицы(одномерный массив)\n";

    //int min = 0;
    int max = 0;
    for(i = 0; i < S; i++)
	{
			
		for(j = 0; j < K; j++)
		{
			if(mas[i][j] > max)
			{
				//ss[col] = mas[i][j];
				//col++;
                cout << " " << max;
			}
		} 			
	}
	//get_mas(ss, col);
	fil_mas(ss, col, str2);
	getch();
}
