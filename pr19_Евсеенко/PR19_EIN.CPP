#include<conio.h>
#include<stdio.h>
#include<iostream>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include"..\\h\\18_print.h"
#include"..\\h\\19_read.h"
int main()
{
page_1();
window(1,1,80,25);  textbackground(11);clrscr();
Wind(5, 5, 77, 15, 0, 1);
char  *str = "fil_dat\\pr18_EIN.dat";
//��।������ ��६�����, ������� ��砫��� ���祭��
const int N = 45; int i, kol = 0;
float d[N], a = 5.2, p = 1, s = 0;
gotoxy(12, 2); printf("���ᨢ d[%d] ����⢥���� ���祭��(��।������)\n\n", N);
read_mas1(d, N, str);  //������ ���ᨢ �� 䠩��
//get_mas(d, N);	//�뢥�� �� ��࠭

// ��ࠡ�⪠ ���ᨢ�
gotoxy(12, 2); 
//printf("���祭�� > %.2f\n\n", a);
std::cout << std::endl << std::endl;
for(i = 0; i < N; i++)
{ 
        if(d[i] > a && d[i] != 0)	//�᫮��� �롮ન
        {	
            kol++; 
            //printf("%7.2f", d[i]);
            d[i] = 5.2;
        }
}
get_mas(d, N);
std::cout << std::endl << std::endl;
gotoxy(12, 14); printf("\t\t���-�� ����� = %d\t", kol);
getch(); return 0;

}
