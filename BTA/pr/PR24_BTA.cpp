#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<dir.h>
#include<conio.h>
#define F 17 // ����� ������������ ⮢��
#define T 27 // ����� �������� �ந�����⥫�
// �������� 蠡���� ������� ⨯� Wert
struct Wert
{
	unsigned char n[F];
	int q;
	float p;
	int t;
	unsigned char prod[T];
};
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\24_line.h"
#include"..\\h\\24_print.h"
#include"..\\h\\24_file.h"
void main()
{
	page_1();
	_setcursortype(_NOCURSOR);
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	Wind(3, 3, 76, 21, 0, 1);
	char  *name = "..\\fil_dat\\pr24_VVV.dat";
	int col;
	// ���ᨢ ������� goods ������ ᯨ᪠ MAXN
	const int N = 16;
	struct Wert goods[N] =
	{
		"��᪠ॢ᪮�", 23, 39.90, 11, "��᪠ॢ᪨� ��������",
		"������", 25, 47.40, 4, "�����",
		"���", 80, 43.90, 3, "������᪨� ��������",
		"�ਭ��᪮�", 35, 44.00, 5, "�ਭ��᪮�",
		"��᮪� ��᮪�", 47, 44.90, 1, "��த᪮� ������ ����� 2",
		"�� �।�����", 25, 95.90, 2, "��襭쪠",
		"������", 24, 54.90, 2, "�����᪮� ������",
		"��ମ���", 34, 46.60, 7, "����-�����த",
		"������ ��뭪�", 45, 29.90, 7, "�ਢ᪮�",
		"����筮� ���⢮", 65, 23.90, 7, "�����",
		"�������� �ଠ", 34, 42.00, 3, "����",
		"����", 32, 75.90, 8, "�����",
		"����筠�", 23, 75.90, 9, "��� ��������",
		"�������", 25, 74.90, 11, "��������᪨� ��᮪�������",
		"�����᪠�", 25, 77.00, 12, "����뭮"
	};
	col = fil_struct(goods, name);
	print_struct(goods, col);
	getch();
}