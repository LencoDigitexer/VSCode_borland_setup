#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<iostream.h>
#include<iomanip.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\10_num.h"
#include"..\\h\\10_rez.h"
#include"..\\h\\10_y.h"
void main()
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	// ��।������ ��६�����
	char *name = "�㭪樨 ࠡ��� � 䠩���� - �뢮� ���祭�� � 䠩�";
	int num = 10;
    y_10(name, num);
	getch();
}

