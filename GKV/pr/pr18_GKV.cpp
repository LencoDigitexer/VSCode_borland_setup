#include<conio.h>
#include<stdio.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
// #include"..\\h\\18_mas.h"	//��� 䠩� ������ �������ਥ�, ��⮬� �� � �ਬ�� ᤥ���� ᯨ᪮�. �᫨ � ��� ࠭���, � ���� ������
#include"..\\h\\18_print.h"
#include"..\\h\\18_file.h"
int main()
{
        page_1();
        window(1,1,80,25);  textbackground(11);clrscr();
        Wind(2, 5, 80, 15, 0, 1);
        char  *str = "..\\fil_dat\\pr18_GKV.dat";
        const int N = 15;
        int y[N] = {6,2,-1, 6, -4, 7, -2, 9, -4, 12, 7, 9, 11, 0, 1}; // ��� ᯨ᮪ ���祭�� ���� 㤠����, �᫨ � ��� ��砩�묨 �᫠��
        gotoxy(20, 2); printf("���ᨢ y[%d] 楫��᫥���� ���祭��\n\n", N);
	      // ��-� ����� ��������, �᫨ � ��� ��砩�묨 �᫠�� ���� ���������, � �� ᯨ᪮�
        get_mas(y, N);
        fil_mas(y, N, str);
        getch(); return 0;
}