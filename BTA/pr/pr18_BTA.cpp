#include<conio.h>
#include<stdio.h>
#include <math.h> 
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include <stdlib.h>

#include"..\\h\\18_mas.h"	//��� 䠩� ������ �������ਥ�, ��⮬� �� � �ਬ�� ᤥ���� ᯨ᪮�. �᫨ � ��� ࠭���, � ���� ������
#include"..\\h\\18_print.h"
#include"..\\h\\18_file.h"

int main()
{
        page_1();
        window(1,1,80,25);  textbackground(11);clrscr();

        Wind(5, 5, 77, 21, 0, 1);
        
        char  *str = "fil_dat\\pr18_BTA.dat";
        const int N = 100;
        int d[N];	//⠪ �������, �᫨ � ��� �� ᯨ᪮� ���� ������
        //float d[N] = { 0.2, -6.95, 1.87, 0, -3.23, -5.43, 0.67, -2.74, 0.35, -4.66 }; // ��� ᯨ᮪ ���祭�� ���� 㤠����, �᫨ � ��� ��砩�묨 �᫠��
        gotoxy(12, 2); printf("���ᨢ d[%d] ����⢥���� ���祭��\n\n", N);
	    setrandom(d, N);
        get_mas(d, N);
        fil_mas(d, N, str);
        getch(); return 0;
        
}
