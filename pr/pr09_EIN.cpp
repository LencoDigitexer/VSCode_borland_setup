#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<iomanip.h>
// подключение собственных библиотек
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\09_y.h"
void main()
{
	// вызов первой страницы
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();

	// определение переменных
	char *name = "Обращение к функциям собственной библиотеки";
	int num = 9;

	// вызов функции с индивидуальным заданием
	y_09(name, num);
	getch();
}
