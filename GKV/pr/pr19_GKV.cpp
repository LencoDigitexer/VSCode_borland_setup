#include<conio.h>
#include<stdio.h>
#include<iostream>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
// #include"..\\h\\18_mas.h"	//этот файл закрыт комментарием, потому что в примере сделано списком. Если у вас рандом, то надо открыть
#include"..\\h\\18_print.h"
#include"..\\h\\18_file.h"
#include"..\\h\\19_read.h"
int main()
{
        page_1();
        window(1,1,80,25);  textbackground(11);clrscr();
        Wind(2, 5, 80, 15, 0, 6);
        char  *str = "..\\fil_dat\\pr18_GKV.dat";
        const int N = 15;
        int sum=0;
        int y[N];
        //int y[N] = {6,2,-1, 6, -4, 7, -2, 9, -4, 12, 7, 9, 11, 0, 1}; // этот список значений надо удалить, если у вас случайными числами
        read_mas1(y, N, str);
        gotoxy(20, 2); printf("Массив y[%d] целочисленных значений исходный\n\n", N);
	      // что-то здесь добавить, если у вас случайными числами надо заполнить, а не списком
        get_mas(y, N);
        fil_mas(y, N, str);
        getch(); 
        Wind(2, 17, 80, 24, 0, 10);
        gotoxy(20, 2); printf("Числа, для которых a[i] >= i\n\n");
        std::cout << "\t\t\t";
        for(int i=0; i<N; i++){
            if(y[i] >= i){
                std::cout << y[i] << " ";
                sum++;
            }
        }
        gotoxy(20, 10); printf("\n\n\t\t     Колличество этих чисел = %d\n\n", sum);
        getch(); 
        return 0;
}