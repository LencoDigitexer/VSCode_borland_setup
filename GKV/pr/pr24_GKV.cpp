#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<dir.h>
#include<conio.h>
#define T  15		// ����� ⥪�� ��த�
#define A  14		// ����� ⥪�� ���窠
// ᮧ����� 蠡���� ������� ⨯�  puma
struct Kanzlei
{
	char name[T]; //�������� ���㬥��
	int number;            //�室�騩 �����
	int time;              //����� ����祭
	unsigned char who[A];  //���� ����祭� �ᯮ������
	int srok;              //�ப �ᯮ������
};
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\24_line.h"
#include"..\\h\\24_print.h"
#include"..\\h\\24_file.h"
void main()
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	Wind(25, 2, 53, 4, 4, 2);
	const int B = 12;
	textcolor(0);
	cout << "\n\t\t\t" << "���楫���. " << "������� = " << B-1;
	Wind(9, 6, 75, 24, 5, 6);
	textcolor(8);
	char  *name = "..\\fil_dat\\pr24_GKV.dat";
	int col;
	// ���ᨢ ������� cat ������ ᯨ᪠ MAXB
	
	struct Kanzlei cat[B] =
	{	
		"������", 543, 120920, "��ᨫ��", 1,
        "����७��", 542, 300320, "����ﭥ", 4,
        "����७�����", 876, 91220, "��堨��", 3,
        "�����", 123, 70620, "��ᨫ��", 1,
        "��筠� ����窠", 61120, 130321, "���⨭�", 5,
        "���쬮", 124, 50121, "�����", 4,
        "����থ���", 976, 20221, "�����᫠��", 7,
        "��ॢ��", 132, 100321, "��⥬��", 9,
        "����", 154, 90321, "����", 1,
        "��ᯨᠭ��", 894, 191220, "����ﭥ", 6,
        "��� ���  ", 67, 170820, "��ᨫ��", 3,	
	};
	col = fil_struct(cat, name);
	print_struct(cat, col);
	getch();
}