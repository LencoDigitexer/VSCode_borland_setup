void print_struct(struct Kanzlei New[], int col)
{
	int num;
	char ch = 179;		// символ для вертикальной полоски
	stroka(2, 2, 62);
	char *t = "Название", *k = "Номер", *r = "Получен", *P = "Кому поручено", *Y = "Срок";
	gotoxy(2, 3);  cout << ch; gotoxy(6, 3);  cout << t;
	gotoxy(18, 3); cout << ch; gotoxy(19, 3); cout << k;
	gotoxy(24, 3); cout << ch; gotoxy(26, 3); cout << r;
	gotoxy(34, 3); cout << ch; gotoxy(36, 3); cout << P;
	gotoxy(52, 3); cout << ch; gotoxy(55, 3); cout << Y;
	gotoxy(63, 3); cout << ch;
	stroka(2, 4, 62);
	for(num = 0; num < col; num++)
	{
		gotoxy( 2, 5 + num); cout << ch;
		gotoxy( 3, 5 + num); cout << New[num].name;
		gotoxy(18, 5 + num); cout << ch;
		gotoxy(20, 5 + num); cout << New[num].number;
		gotoxy(24, 5 + num); cout << ch;
		gotoxy(26, 5 + num); cout << New[num].time;
		gotoxy(34, 5 + num); cout << ch;
		gotoxy(36, 5 + num); cout << New[num].who;
		gotoxy(52, 5 + num); cout << ch;
		gotoxy(57, 5 + num); cout << New[num].srok;
		gotoxy(63, 5 + num); cout << ch;

	}
	stroka(2, 5 + num, 63);
}