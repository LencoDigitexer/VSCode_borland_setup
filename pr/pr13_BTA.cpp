#include<conio.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\131.h"
void main( void )
{
	page_1();
	window(1, 1, 80, 25); textattr(15 + (7 << 4)); clrscr();
	char i; char n; int _time;
m:
	Wind(4, 6, 29, 16, 0, 1);
	gotoxy(2, 2); cout << "�६� ��⮪";
	gotoxy(2, 4); cout << "� - ���";
	gotoxy(2, 5); cout << "� - ����";
	gotoxy(2, 6); cout << "� - ����";
	gotoxy(2, 7); cout << "� - ����";
	gotoxy(1, 9); cout << "�롥� �६� ��⮪ => "; cin >> i;
	switch(i)
	{
		case  '�': y(_time); break;
		case  '�': no(_time); break;
		case  '�': v(_time); break;
		case  '�': d(_time); break;
		case  '�': y(_time); break;
		case  '�': no(_time); break;
		case  '�': v(_time); break;
		case  '�': d(_time); break;
		default: gotoxy(2, 10); cout << "�訡��"; break;
	}
	Wind(4, 19, 27, 21, 0, 18);
	gotoxy(2, 2); cout << "�த������? - y/n ";
	if((n = getche()) == 'y' || n == 'Y')
		goto m;
	else
	{
		gotoxy(2, 2); clreol(); cout << "�� ᢨ�����!";
	}
	getch();
}
