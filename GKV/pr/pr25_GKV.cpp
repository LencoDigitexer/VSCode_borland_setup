#include<stdio.h>
#include<iostream.h>
#include<io.h>
#include<fcntl.h>
#include<stdlib.h>
#include<dir.h>
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
#include"..\\h\\25_file.h"
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
	struct Kanzlei cat[B];
	char *name = "..\\fil_dat\\PR24_GKV.dat", *ph = searchpath(name);
	int col = read_struct(cat, name);
	//col = 13;
	//cout << "col " << col;
	print_struct(cat, col);
	Wind(5,24, 74, 25, 0, 2);
	gotoxy(3, 1);
	cout << ph;	// Маршрут доступа к файлу
	int handle = open(name, O_CREAT);
	int dl = filelength(handle);
	gotoxy(3, 2); cout << "Длина файла " << dl << " байт";
	name = "..\\fil_dat\\pr25_GKV.dat";
	file_path(ph, dl, name);
	getch();
}