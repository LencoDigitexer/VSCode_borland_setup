void y_09(char *name, int num)
{
	
	float x, y;
	
	window(1, 1, 80, 25); textbackground(11); clrscr();
	
	textcolor(14);
	Wind(7, 3, 77, 7, 0, 6);
	gotoxy(25, 2); cout << "Практическая работа " << num;
	gotoxy(10, 4); cout << name;
	textcolor(15);
	Wind(40, 13, 70, 16, 0, 4);
	
	gotoxy(3, 2); cout << "Введите x (> 0) = "; cin >> x;
	
	y = exp(x) / log10(x);
	
	Wind(10, 19, 40, 23, 0, 2);
	cout.setf(ios::right);
	gotoxy(4, 3); cout << "y(" << x << ") = " << setprecision(8) << y;
}
