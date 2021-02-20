#include<conio.h>
#include<stdio.h>
#include<iostream>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\18_print.h"
#include"..\\h\\19_read.h"
int main()
{
page_1();
window(1,1,80,25);  textbackground(11);clrscr();
Wind(5, 5, 77, 15, 0, 1);
char  *str = "fil_dat\\pr18_EIN.dat";
//определение переменных, задание начальных значений
const int N = 45; int i, kol = 0;
float d[N], a = 5.2, p = 1, s = 0;
gotoxy(12, 2); printf("Массив d[%d] вещественных значений(Переделанный)\n\n", N);
read_mas1(d, N, str);  //вычитать массив из файла
//get_mas(d, N);	//вывести на экран

// обработка массива
gotoxy(12, 2); 
//printf("Значения > %.2f\n\n", a);
std::cout << std::endl << std::endl;
for(i = 0; i < N; i++)
{ 
        if(d[i] > a && d[i] != 0)	//условие выборки
        {	
            kol++; 
            //printf("%7.2f", d[i]);
            d[i] = 5.2;
        }
}
get_mas(d, N);
std::cout << std::endl << std::endl;
gotoxy(12, 14); printf("\t\tКол-во замен = %d\t", kol);
getch(); return 0;

}
