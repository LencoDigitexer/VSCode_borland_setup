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
Wind(5, 5, 77, 21, 0, 1);
char *str = "fil_dat\\pr18_BTA.dat";
//��।������ ��६�����, ������� ��砫��� ���祭��
const int N = 100; int i, kol = 0;
int d[N];
gotoxy(12, 2); printf("���ᨢ d[%d] ����⢥���� ���祭��\n\n", N);
read_mas1(d, N, str);  //������ ���ᨢ �� 䠩��
get_mas(d, N);	//�뢥�� �� ��࠭
getch();
window(1,1,80,25);  textbackground(11);clrscr();
Wind(5, 5, 77, 21, 0, 1);
gotoxy(12, 2); printf("���ᨢ d[%d] ����⢥���� ���祭��(��।������)\n\n", N);
// ��ࠡ�⪠ ���ᨢ�
gotoxy(12, 2); 
//printf("���祭�� > %.2f\n\n", a);
std::cout << std::endl << std::endl;

for(i = 0; i < N; i=i+2)
{ 
        if(i%10==0){
            printf("\n");
        }
        if(d[i] < d[i+1])	//�᫨ ᫥���騩 ������� �����
        {	
            kol++; 
            printf("%9d", d[i+1]);
        } else {
            printf("%9d", d[i]);
        }
}

//get_mas(d, N);
std::cout << std::endl << std::endl;
gotoxy(12, 16); printf("\t\t���-�� ����� = %d\t", kol);
getch(); return 0;

}
