#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define T  15	// ����� ⥪�� ��த�
#define A  14	// ����� ⥪�� ���窠
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
#include"..\\h\\25_read.h"
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
	const int MAXB = 12;		// ����� ᯨ᪠
	struct Kanzlei cat[MAXB];
	char *name = "..\\fil_dat\\pr24_GKV.dat";
	int i, col, num = 0;
	col = read_struct(cat, name);

	print_struct(cat, col);
	// �ࠢ���� ����� ������ ��誨 � ������묨 ���祭�ﬨ
	// �᫨ �� �᫮��� ����祭 �⢥� ��, �뢥�� ���祭��
	// �� �࠭ � ������� ���稪
	Wind(5, 23, 79, 25, 8, 3);
	int sum=0;
	for(i = 0; i < col; i++){
	   sum = sum + cat[i].srok;
	}
    cout << "\n\t������⢮ ����, ����祭��� �� �ᯮ������ ������� ���㬥��: ";
	cout   << sum;
	
	getch();
}