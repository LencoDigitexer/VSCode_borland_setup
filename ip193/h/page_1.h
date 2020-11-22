void page_1_old()
{
	textmode(3);
	window(1, 1, 80, 25); textbackground(7); clrscr();
	textcolor(4);
	gotoxy(17, 2); cputs("Ставропольский колледж связи имени В.А.Петрова");
	gotoxy(36, 24); cputs("Вариант 21");
	Wind(7, 6, 75, 21, 0, 1);
	textcolor(14);
	gotoxy(21, 3); cputs("Практическая работа по предмету");
	gotoxy(14, 5); cputs("\"Основы алгоритмизации и программирования\"");
	gotoxy(25, 7); cputs("Раздел  Borland123 C++");
	gotoxy(20, 11); cputs("Выполнил студент группы П_172");
	gotoxy(30, 13); cputs("Иванов Петр");
	getch();
}

void page_1(){

	textmode(3);
	window(1, 1, 80, 25); textbackground(7); clrscr();
	textcolor(16);

	Wind(5, 18, 65, 25, 0, 14);
	gotoxy(17, 2); cputs("Ставропольский колледж связи имени В.А. Петрова");

	Wind(5, 18, 65, 25, 0, 14);
	textcolor(11);
	gotoxy(10, 4); cputs("Выполнил студент группы ИП193");
	gotoxy(10, 6); cputs("Евсеенко Илья");

	Wind(15, 9, 60, 18, 0, 4);
	textcolor(14);
	gotoxy(2, 2); cputs("Практическая работа по предмету");
	gotoxy(2, 4); cputs("\"Основы алгоритмизации и программирования\"");
	gotoxy(2, 6); cputs("Раздел Borland C++");

	Wind(55, 21, 70, 23, 0, 5);
	textcolor(10);
	gotoxy(5, 2); cputs("Вариант 6");
	getch();
}