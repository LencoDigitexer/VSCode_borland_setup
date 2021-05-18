void stroka(int x, int y, int kol)
	{
		for(int i = 0; i < kol; i++)
		{
			gotoxy(x + i, y);
			putchar(196);
		}
	}