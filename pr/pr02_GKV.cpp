#include<stdio.h>
#include<conio.h>
void convert(int c);
void main(void)
{
    clrscr();
    int ch;

    window(1,1,79,25); textbackground(7); clrscr();
    window(5,3,77,24); textbackground(0); clrscr();
    window(3,2,76,23); textbackground(9); clrscr();

    textcolor(14); gotoxy(7,1);
    cprintf("Эта программа изображает ASCII-коды символов\n");
    textcolor(10); gotoxy(7,2);
    cprintf("Наберите строку символов и нажмите клавишу Enter\n");
    gotoxy(7,3);

    ch = getchar();
    printf("\t\tДесятичная\tВосьмеричная\tШестнадцатеричный\n");

    while (ch!='\n')
    {
        convert(ch);

        ch = getchar();
    }
    gotoxy(7,21); cprintf("Обработка закончена \n");
    getch();
}

void convert(int c)
{
    printf("\t%c\t%d\t\t%o\t\t%x\n", c,c,c,c);
    if(c < ' ')
        printf("Спецсимовлы \n");
}