#include<conio.h>
#include<stdio.h>
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
	// ��।����� ��६����
	char *f; f = new char[20];
	int n, god, rab;
	float l, r;
	// ����⮢� ०�� 梥⭮� 80 � 25
	textmode(3);
	// ��࠭ ������� ��� 梥⮬
	window(1, 1, 80, 25); textbackground(7); clrscr();

	// ����ந�� ���� � �����/�뢥�� ��६����
	Wind(12, 3, 72, 5, 0, 4);
	textcolor(14);		// 梥� ᨬ�����
	gotoxy(5, 2); cprintf("����� ࠡ��� "); cscanf("%d", &rab);
	clrscr();		// ������ ����
	gotoxy(3, 2);
	cprintf("�ࠪ��᪠� ࠡ�� %3d. ��ଫ���� �����-�뢮�� ���祭��", rab);

	Wind(5, 8, 75, 10, 0, 2);
	textcolor(15);		// 梥� ᨬ�����
	gotoxy(2, 2); cprintf("������� "); gets(f);
	gotoxy(40, 2); cprintf("������ "); cscanf("%d", &god);
	clrscr();
	gotoxy(2, 2); cprintf("�ਢ��, %20s", f);
	gotoxy(40, 2); cprintf("������ - %d ���", god);

	Wind(7, 13, 40, 15, 0, 11);
	textcolor(14);		// 梥� ᨬ�����
	gotoxy(2, 2); cprintf("������⢮ ���㦭��⥩ n = "); cscanf("%d", &n);
	clrscr();
	gotoxy(2, 2); cprintf("O��㦭��⥩ %d", n);

	Wind(45, 14, 77, 16, 0, 13);
	textcolor(15);		// 梥� ᨬ�����
	gotoxy(2, 2); cprintf("������ ���㦭��� r = "); cscanf("%f", &r);
	clrscr();
	gotoxy(2, 2); cprintf("������ ���㦭��� r = %f", r);

	// ���᫨��
	l = n * 2 * M_PI * r;

	Wind(18, 19, 67, 24, 0, 3);
	textcolor(4);		// 梥� ᨬ�����
	// �뢥�� १�����
	gotoxy(7, 2); cprintf("�ਢ��, %20s", f);
	gotoxy(4, 4); cprintf("�������. ����� %-3d ���㦭��⥩", n);
	gotoxy(13, 5); cprintf("ࠤ��ᮬ %7.3f ࠢ�� %9.2f", r, l);
	getch(); getch();
}
