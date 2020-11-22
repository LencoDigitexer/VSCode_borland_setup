#include<conio.h>
#include<iostream.h>
#include<math.h>
// Определение собственной функции - построение окна с тенью
void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
{
	// тень - нижнее окно цвета z1
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	// верхнее окно заданного цвета z2
	window(x1 - 1, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
}

void main( void )
{
	// объявить переменные
	float x, y, a, b;
	// Текстовый режим цветной 80 х 25
	textmode(3);
	// Экран вычистить серым цветом
	window(1, 1, 80, 25); textbackground(7); clrscr();
	// Построить окна и ввести/вывести переменные
	textcolor(14);
	Wind(10, 4, 70, 10, 0, 1);
	gotoxy(20, 2); cout << "Практическая работа 7";
	gotoxy(5, 6); cout << "Вычисление математических функций и выражений";
	textcolor(15);
	Wind(20, 15, 55, 15, 0, 1);
	// инициализировать аргумент
	gotoxy(3, 4); cout << "Введите x > 0 "; cin >> x;
	// вычислить значение функции
	a = ;	// вычисление числителя
	b = ;	// вычисление знаменателя
	y = a / b;
	// вывести результат
	gotoxy(12, 6); cout << "y(" << x << ") = " << y;
	getch();
}