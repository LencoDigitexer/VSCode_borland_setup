void print_struct(struct Apotheke New[], int col)
{
	int num;
	char ch = 179;		// символ для вертикальной полоски
	stroka(2, 4, 52);
	char *t = "Наименов", *k = "Производ", *r = "Колво", *P = "Цена р", *Z = "Срок(М)";
	gotoxy(2, 5);  cout << ch; gotoxy(5, 5);  cout << t;
	gotoxy(15, 5); cout << ch; gotoxy(17, 5); cout << k;
	gotoxy(25, 5); cout << ch; gotoxy(27, 5); cout << r;
	gotoxy(34, 5); cout << ch; gotoxy(36, 5); cout << P;
	gotoxy(43, 5); cout << ch;
	gotoxy(46, 5); cout << ch; gotoxy(45, 5); cout << Z;
	gotoxy(53, 5); cout << ch;
	stroka(2, 6, 52);
	for(num = 0; num < col; num++)
	{
		gotoxy( 2, 7 + num); cout << ch;
		gotoxy( 4, 7 + num); cout << New[num].por;
		gotoxy(15, 7 + num); cout << ch;
		gotoxy(17, 7 + num); cout << New[num].name;
		gotoxy(25, 7 + num); cout << ch;
		gotoxy(29, 7 + num); cout << New[num].h;
		gotoxy(34, 7 + num); cout << ch;
		gotoxy(38, 7 + num); cout << New[num].p;
		gotoxy(43, 7 + num); cout << ch;
		gotoxy(48, 7 + num); cout << New[num].a;
		gotoxy(53, 7 + num); cout << ch;
	}
	stroka(2, 7 + num, 52);
}