#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
// #include"..\\h\\18_mas.h"	//��� 䠩� ������ �������ਥ�, ��⮬� �� � �ਬ�� ᤥ���� ᯨ᪮�. �᫨ � ��� ࠭���, � ���� ������
#include"..\\h\\18_print.h"
//#include"..\\h\\18_file.h"
#include"..\\h\\19_read.h"
int main()
{
        page_1();
        window(1,1,80,25);  textbackground(11);clrscr();
        Wind(2, 5, 80, 15, 0, 1);
        char  *str = "fil_dat\\pr19_MVI.dat";
		int i, min,x, max, kolo, kolp, kolc, s, p,f;
		double per=1;
        const int N = 50;
        int y[N]= {27,46,50, 96, -4, 66, 3, 13, 20, -12, 42, -12, 120, 75, 87, 80, -12, 60, 22, 92, 116, 118, -7, 17, 116, 1, 60, -13, 76, 119, 78, 111, 17, 49, 33, -15, 113, -12, 63, 65, 63, 35, 26, 104, 109, 100, -4, 59, 26, 60}; // ��� ᯨ᮪ ���祭�� ���� 㤠����, �᫨ � ��� ��砩�묨 �᫠��
        gotoxy(20, 2); printf("���ᨢ y[%d] 楫��᫥���� ���祭��\n", N);
		read_mas1(y, N, str);  //������ ���ᨢ �� 䠩��
	      // ��-� ����� ��������, �᫨ � ��� ��砩�묨 �᫠�� ���� ���������, � �� ᯨ᪮�
        get_mas(y, N);
		min = max = y[0];
		for (i = 0; i < N; i++)
		{
			
			//cout << y[i] << " " << i << " ";
			// ���� �������쭮�� ���祭��
			// ������� ���᪠ - ������ ��砫�� ���祭�� �� 横��
			//min = max = y[0];
			if(y[i] < y[min]){
				//f=i;
				min = i;
				//cout << min;
			}
			// ���� ���ᨬ��쭮�� ���祭��
			if(y[i] > y[max])
			max = i;
		}

cout<<y[max] << " " <<y[min]<<endl;

		for (i = max+1; i < min; i++)
		{
			//cout << y[i] << " ";
			per = per * y[i];
			cout << per << endl;
			/*
			//cout<<per <<" ";
			if (y[i] > min, y[i] < max)
			per = per * y[i];
			cout << y[i] << " ";
			}
			cout<<per;
					getch(); 
					return 0;
					*/
		}
		cout << per;
}