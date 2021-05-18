#include<conio.h>
	// Функция - построение окна с тенью
	void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
	{
		// тень - нижнее окно цвета z1
		window(x1, y1, x2, y2); textbackground(z1); clrscr();
		// верхнее окно заданного цвета z2
		window(x1 - 2, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
	}
	void main()
	{
		int x, y;
		textmode(3);			// установить текстовый режим
		window(1, 1, 80, 25);	// открыть текстовое окно
		textattr(15 + (7 << 4));	// установить цвет cимволов и фона
		clrscr();				// очистить текстовое окно
		gotoxy(4, 3);			// установить курсор в заданную позицию
		cputs("Функции работы с текстовым экраном");
		// Вызов собственной функции для построения окна с тенью
		Wind(7, 6, 36, 21, 0, 1);
		getch(); _setcursortype(_NOCURSOR);	// выключить курсор
		gotoxy(10, 3); textcolor(YELLOW); cputs("Hello !");
		getch(); gotoxy(13, 3);					// поставить курсор в заданную позицию
		_setcursortype(_SOLIDCURSOR);		// включить курсор в виде блока
		getch();
		_setcursortype(_NORMALCURSOR);	// включить курсор - подчеркивание
		getch(); clreol();						// стереть cимволы от курсора до конца строки
		getch(); textcolor(15); gotoxy(2, 7); normvideo(); cputs("Позиция курсора");
		x = wherex(); y = wherey(); gotoxy(x, y); cprintf("(%d, %d)", x, y);
		getch(); gotoxy(2, y + 2); lowvideo(); cputs("Пониженная яркость");
		y = wherey(); 
		getch(); gotoxy(2, y + 2); highvideo(); cputs("Повышенная яркость");
		x = wherex(); y = wherey(); getch();
		insline();								// вставить пустую строку в позицию курсора
		getch(); delline();						// стереть строку, в которой находится курсор
		getch(); movetext(12, 12, 27, 20, 25, 16);	// перенести содержимое прямоугольника
		getch();
	}