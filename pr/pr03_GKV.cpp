#include<conio.h>
	// �㭪�� - ����஥��� ���� � ⥭��
	void Wind(int x1, int y1, int x2, int y2, int z1, int z2)
	{
		// ⥭� - ������ ���� 梥� z1
		window(x1, y1, x2, y2); textbackground(z1); clrscr();
		// ���孥� ���� ��������� 梥� z2
		window(x1 - 2, y1 - 1, x2 - 1, y2 - 1); textbackground(z2); clrscr();
	}
	void main()
	{
		int x, y;
		textmode(3);			// ��⠭����� ⥪�⮢� ०��
		window(1, 1, 80, 25);	// ������ ⥪�⮢�� ����
		textattr(15 + (7 << 4));	// ��⠭����� 梥� c������� � 䮭�
		clrscr();				// ������ ⥪�⮢�� ����
		gotoxy(4, 3);			// ��⠭����� ����� � �������� ������
		cputs("�㭪樨 ࠡ��� � ⥪�⮢� �࠭��");
		// �맮� ᮡ�⢥���� �㭪樨 ��� ����஥��� ���� � ⥭��
		Wind(7, 6, 36, 21, 0, 1);
		getch(); _setcursortype(_NOCURSOR);	// �몫���� �����
		gotoxy(10, 3); textcolor(YELLOW); cputs("Hello !");
		getch(); gotoxy(13, 3);					// ���⠢��� ����� � �������� ������
		_setcursortype(_SOLIDCURSOR);		// ������� ����� � ���� �����
		getch();
		_setcursortype(_NORMALCURSOR);	// ������� ����� - ����ન�����
		getch(); clreol();						// ����� c������ �� ����� �� ���� ��ப�
		getch(); textcolor(15); gotoxy(2, 7); normvideo(); cputs("������ �����");
		x = wherex(); y = wherey(); gotoxy(x, y); cprintf("(%d, %d)", x, y);
		getch(); gotoxy(2, y + 2); lowvideo(); cputs("���������� �મ���");
		y = wherey(); 
		getch(); gotoxy(2, y + 2); highvideo(); cputs("����襭��� �મ���");
		x = wherex(); y = wherey(); getch();
		insline();								// ��⠢��� ������ ��ப� � ������ �����
		getch(); delline();						// ����� ��ப�, � ���ன ��室���� �����
		getch(); movetext(12, 12, 27, 20, 25, 16);	// ��७��� ᮤ�ন��� ��אַ㣮�쭨��
		getch();
	}