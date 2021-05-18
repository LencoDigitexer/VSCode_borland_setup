#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<dir.h>
#include<conio.h>
#define T  15		// длина текста порода
#define A  14		// длина текста кличка
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
#include"..\\h\\24_file.h"
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
	char  *name = "..\\fil_dat\\pr24_GKV.dat";
	int col;
	// массив структур cat длиной списка MAXB
	
	struct Kanzlei cat[B] =
	{	
		"Рапорт", 543, 120920, "Василию", 1,
        "Поощрение", 542, 300320, "Татьяне", 4,
        "Доверенность", 876, 91220, "Михаилу", 3,
        "Запрос", 123, 70620, "Василию", 1,
        "Личная карточка", 61120, 130321, "Кристине", 5,
        "Письмо", 124, 50121, "Ивану", 4,
        "Расторжение", 976, 20221, "Владиславу", 7,
        "Перевод", 132, 100321, "Артемию", 9,
        "Учёт", 154, 90321, "Дарье", 1,
        "Расписание", 894, 191220, "Татьяне", 6,
        "Акт приёма  ", 67, 170820, "Василию", 3,	
	};
	col = fil_struct(cat, name);
	print_struct(cat, col);
	getch();
}