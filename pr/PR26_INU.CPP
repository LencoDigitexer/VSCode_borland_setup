#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define T  15
#define A  10	
// создание шаблона структур типа  puma
struct Apotheke
{
	unsigned char por[T];
	unsigned char name[A];
	int h;
	int p;
	int a;
};
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\24_line.h"
#include"..\\h\\24_print.h"
#include"..\\h\\24_file.h"
#include"..\\h\\25_read.h"
void main()
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	Wind(15, 3, 68, 22, 0, 1);
	const int B = 11;		// длина списка
	struct Apotheke lec[B], proz[B];
	char *name = "fil_dat\\pr24_INU.DAT", *str;
	str = new char[T];
	int i, col, num = 0;
	col = read_struct(lec, name);
	print_struct(lec, col);
	cout << "\n\t\tПроизводитель: "; cin >> str;
	// Каждое значение породы из массива структур сравнить
	// с введенным с клавиатуры значением и если они совпадут,
	// добавить в новый массив эту запись, счетчик нарастить
	for(i = 0; i < col; i++)
		if(strstr(lec[i].name, str))
		{
			proz[num] = lec[i];
			num++;
		}
	Wind(15, 3, 68, 22, 0, 1);
	if(num == 0)
	{
		gotoxy(17, 2); cout << "Группы не найдено";
	}
	else
	{
		name = "fil_dat\\pr26_INU.dat";
		fil_struct(proz, name);
		print_struct(proz, num);
	}
	getch();
}