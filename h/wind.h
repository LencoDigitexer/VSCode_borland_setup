void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
{	// построение тени цветом z1
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	// построение окна для вывода значений цветом z2
	window(x1 - 2, y1 - 1, x2 - 2, y2 - 1); textbackground(z2); clrscr();
}
