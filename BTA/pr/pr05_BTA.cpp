#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
// ��।������ ᮡ�⢥���� �㭪樨 - ����஥��� ���� � ⥭��
void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
{
	// ⥭� - ������ ���� 梥� z1
	window(x1, y1, x2, y2); textbackground(z1); clrscr();
	// ���孥� ���� ��������� 梥� z2
	window(x1 - 1, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
}
void main(void)
{
	textmode(3);
	// ��।����� ��६����
	char *f; f = new char[20];
	char *s = "��ଠ�஢���� ���� / �뢮� ������ � �++";
	int  n, num;
	float l, r, razmer, itog_stoim, cena, col_vo;
	textcolor(15);
	window(1, 1, 80, 25); textbackground(7); clrscr();
	// ����� - �뢥�� ��६����
	Wind(12, 4, 70, 10, 0, 14);
	gotoxy(5, 2); cout << "������� "; cin >> f;
	gotoxy(5, 4); cout << "����� ࠡ��� "; cin >> num;
	clrscr();
	cout.setf (ios::left);
	gotoxy(20, 2); cout << "�ਢ��, " << setw(20) << f;
	gotoxy(4, 4); cout << "�ࠪ��᪠� ࠡ�� " << num
				<< " (8 c/c - " << oct << num << ", 16 c/c - " << hex << num << ")";
	gotoxy(8, 6);  cout << s;
	textcolor(14); 
	Wind(5, 18, 39, 24, 0, 4);
	gotoxy(3, 2); cout << "������ ����饭�� � ����� = "; cin >> razmer;
	gotoxy(3, 4); cout << "�⮨����� �㫮�� = "; cin >> cena;
	gotoxy(3, 6); cout << "������: 8 c/c - " << oct << razmer << ", 16 c/c - " << hex << razmer;
	// ���᫨��
	col_vo = razmer / 2;
    itog_stoim = cena * col_vo;
	// �뢥�� १�����
	Wind(43, 14, 77, 20, 0, 5);
	cout.setf (ios::fixed, ios::floatfield);
	gotoxy(3, 2); cout << "���� " << dec  << setprecision(1) << col_vo << " �㫮��� �⮡� ��������";
	cout.setf (ios::right);
	gotoxy(3, 4); cout << setprecision(5) << setw(7) << razmer
					<< " ���஢ ࠢ�� " << setprecision(5) << setw(9)  << itog_stoim;
	getch();		// ��ঠ�� �࠭ �� ������ ������
}