#include<conio.h>
#include<stdio.h>
#include<math.h>
// Определение собственной функции - построение окна с тенью
void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
{
	// тень - нижнее окно цвета z1
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	// верхнее окно заданного цвета z2
	window(x1 - 1, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
}
void main(void)
{
	// Определить переменные
	char *f; f = new char[20];
	int n, god, rab;
	float l, r;
	// Текстовый режим цветной 80 х 25
	textmode(3);
	// Экран вычистить серым цветом
	window(1, 1, 80, 25); textbackground(7); clrscr();

	// Построить окна и ввести/вывести переменные
	Wind(12, 3, 72, 5, 0, 4);
	textcolor(14);		// цвет символов
	gotoxy(5, 2); cprintf("Номер работы "); cscanf("%d", &rab);
	clrscr();		// очистить окно
	gotoxy(3, 2);
	cprintf("Практическая работа %3d. Оформление ввода-вывода значений", rab);

	Wind(5, 8, 75, 10, 0, 2);
	textcolor(15);		// цвет символов
	gotoxy(2, 2); cprintf("Фамилия "); gets(f);
	gotoxy(40, 2); cprintf("Возраст "); cscanf("%d", &god);
	clrscr();
	gotoxy(2, 2); cprintf("Привет, %20s", f);
	gotoxy(40, 2); cprintf("Возраст - %d лет", god);

	Wind(7, 13, 40, 15, 0, 11);
	textcolor(14);		// цвет символов
	gotoxy(2, 2); cprintf("Количество окружностей n = "); cscanf("%d", &n);
	clrscr();
	gotoxy(2, 2); cprintf("Oкружностей %d", n);

	Wind(45, 14, 77, 16, 0, 13);
	textcolor(15);		// цвет символов
	gotoxy(2, 2); cprintf("Радиус окружности r = "); cscanf("%f", &r);
	clrscr();
	gotoxy(2, 2); cprintf("Радиус окружности r = %f", r);

	// Вычислить
	l = n * 2 * M_PI * r;

	Wind(18, 19, 67, 24, 0, 3);
	textcolor(4);		// цвет символов
	// Вывести результаты
	gotoxy(7, 2); cprintf("Привет, %20s", f);
	gotoxy(4, 4); cprintf("Задание. Длина %-3d окружностей", n);
	gotoxy(13, 5); cprintf("радиусом %7.3f равна %9.2f", r, l);
	getch(); getch();
}
