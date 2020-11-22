void y_10(char *name, int num)
{
	// объявить переменные
	float x, y;
	// Экран вычистить цветом
	window(1, 1, 80, 25); textbackground(10); clrscr();
	// Построить окна и ввести/вывести переменные
	textcolor(14);
	Wind(7, 3, 77, 7, 0, 3);
	gotoxy(25, 2); cout << "Практическая работа " << num;
	gotoxy(10, 4); cout << name;
	textcolor(15);
	Wind(22, 13, 50, 16, 0, 4);
	// инициализировать аргумент
	gotoxy(3, 2); cout << "Введите x (> 0) = "; cin >> x;
	// вычислить значение функции
	
	y = exp(x) / log10(x);
	// вывести результат
	Wind(40, 19, 79, 23, 0, 5);

	gotoxy(12, 3); cout << "y(" << x << ") = " << setprecision(8) << y;
    fil_num(name, num);
    fil_rez(x, y);
}
