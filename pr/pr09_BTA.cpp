#include<conio.h>
#include<math.h>
#include<iostream.h>
#include<iomanip.h>
// ������祭�� ᮡ�⢥���� ������⥪
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\09_y.h"
void main()
{
	// �맮� ��ࢮ� ��࠭���
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();

	// ��।������ ��६�����
	char *name = "���饭�� � �㭪�� ᮡ�⢥���� ������⥪�";
	int num = 9;

	// �맮� �㭪樨 � �������㠫�� ��������
	y_09(name, num);
	getch();
}
