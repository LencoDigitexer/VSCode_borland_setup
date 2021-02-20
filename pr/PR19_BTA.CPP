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
Wind(5, 5, 77, 21, 0, 1);
char *str = "fil_dat\\pr18_BTA.dat";
//определение переменных, задание начальных значений
const int N = 100; int i, kol = 0;
int d[N];
gotoxy(12, 2); printf("Массив d[%d] вещественных значений\n\n", N);
read_mas1(d, N, str);  //вычитать массив из файла
get_mas(d, N);	//вывести на экран
getch();
window(1,1,80,25);  textbackground(11);clrscr();
Wind(5, 5, 77, 21, 0, 1);
gotoxy(12, 2); printf("Массив d[%d] вещественных значений(Переделанный)\n\n", N);
// обработка массива
gotoxy(12, 2); 
//printf("Значения > %.2f\n\n", a);
std::cout << std::endl << std::endl;

for(i = 0; i < N; i=i+2)
{ 
        if(i%10==0){
            printf("\n");
        }
        if(d[i] < d[i+1])	//если следующий элемент меньше
        {	
            kol++; 
            printf("%9d", d[i+1]);
        } else {
            printf("%9d", d[i]);
        }
}

//get_mas(d, N);
std::cout << std::endl << std::endl;
gotoxy(12, 16); printf("\t\tКол-во замен = %d\t", kol);
getch(); return 0;

}
