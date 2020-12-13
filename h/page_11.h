void page_1(){

	textmode(3);
	window(1, 1, 80, 25); textbackground(5); clrscr();
	textcolor(15);

	Wind(5, 3, 55, 5, 0, 11);
	gotoxy(2, 2); cputs("Ставропольский колледж связи имени В.А. Петрова");

	Wind(5, 17, 65, 25, 0, 14);
	textcolor(16);
	gotoxy(10, 4); cputs("Выполнил студент группы ИП193");
	gotoxy(10, 6); cputs("Гончаренко Кирилл");

	Wind(30, 8, 78, 14, 0, 4);
	textcolor(14);
	gotoxy(2, 2); cputs("Практическая работа по предмету");
	gotoxy(2, 4); cputs("\"Основы алгоритмизации и программирования\"");
	gotoxy(2, 6); cputs("Раздел Borland C++");

	Wind(47, 21, 60, 23, 0, 9);
	textcolor(10);
	gotoxy(2, 2); cputs("Вариант 5");
	getch();
}