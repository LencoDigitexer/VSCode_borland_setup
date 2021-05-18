#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define T  15	// длина текста порода
#define A  14	// длина текста кличка
// создание шаблона структур типа  puma
struct Kanzlei
{
	char name[T]; //Название документа
	int number;            //Входящий номер
	int time;              //Когда получен
	unsigned char who[A];  //Кому поручено исполнение
	int srok;              //Срок исполнения
};
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\24_line.h"
#include"..\\h\\24_print.h"
#include"..\\h\\25_read.h"
void main()
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	Wind(25, 2, 53, 4, 4, 2);
	const int B = 12;
	textcolor(0);
	cout << "\n\t\t\t" << "Канцелярия. " << "Структур = " << B-1;
	Wind(9, 6, 75, 24, 5, 6);
	textcolor(8);
	const int MAXB = 12;		// длина списка
	struct Kanzlei cat[MAXB];
	char *name = "..\\fil_dat\\pr24_GKV.dat";
	int i, col, num = 0;
	col = read_struct(cat, name);

	print_struct(cat, col);
	// Сравнить высоту каждой кошки с заданными значениями
	// Если на условие получен ответ да, вывести значение
	// на экран и нарастить счетчик
	Wind(5, 23, 79, 25, 8, 3);
	int sum=0;
	for(i = 0; i < col; i++){
	   sum = sum + cat[i].srok;
	}
    cout << "\n\tКоличество дней, затраченных на исполнение каждого документа: ";
	cout   << sum;
	
	getch();
}