#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
// Определение собственной функции - построение окна с тенью
void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
{
	// тень - нижнее окно цвета z1
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	// верхнее окно заданного цвета z2
	window(x1 - 1, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
}
void main(void)
{
	textmode(3);
	// Определить переменные
	char *f; f = new char[20];
	char *s = "Форматированный ввод / вывод данных в С++";
	int  n, num;
	float l, r, razmer, itog_stoim, cena, col_vo;
	textcolor(15);
	window(1, 1, 80, 25); textbackground(7); clrscr();
	// Ввести - вывести переменные
	Wind(12, 4, 70, 10, 0, 14);
	gotoxy(5, 2); cout << "Фамилия "; cin >> f;
	gotoxy(5, 4); cout << "Номер работы "; cin >> num;
	clrscr();
	cout.setf (ios::left);
	gotoxy(20, 2); cout << "Привет, " << setw(20) << f;
	gotoxy(4, 4); cout << "Практическая работа " << num
				<< " (8 c/c - " << oct << num << ", 16 c/c - " << hex << num << ")";
	gotoxy(8, 6);  cout << s;
	textcolor(14); 
	Wind(5, 18, 39, 24, 0, 4);
	gotoxy(3, 2); cout << "Размер помещения в метрах = "; cin >> razmer;
	gotoxy(3, 4); cout << "Стоимость рулона = "; cin >> cena;
	gotoxy(3, 6); cout << "Размер: 8 c/c - " << oct << razmer << ", 16 c/c - " << hex << razmer;
	// Вычислить
	col_vo = razmer / 2;
    itog_stoim = cena * col_vo;
	// Вывести результаты
	Wind(43, 14, 77, 20, 0, 5);
	cout.setf (ios::fixed, ios::floatfield);
	gotoxy(3, 2); cout << "Цена " << dec  << setprecision(1) << col_vo << " рулонов чтобы обклеить";
	cout.setf (ios::right);
	gotoxy(3, 4); cout << setprecision(5) << setw(7) << razmer
					<< " метров равна " << setprecision(5) << setw(9)  << itog_stoim;
	getch();		// держать экран до нажатия клавиши
}