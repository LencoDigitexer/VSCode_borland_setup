#include <conio.h>
#include"..\\h\\wind.h"
#include"..\\h\\page_1.h"
#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>

int main()
{
	unsigned int z, a=46, x=1, y=1, b=75;
	page_1();
	window(1,1,80,25);  textbackground(11);clrscr();

	Wind(3, 3, 80, 15, 0, 1);

	FILE *f;
	if ((f = fopen("..\\fil_dat\\pr14_BTA.dat", "w")) == NULL)
	{
		fprintf(stderr, "Ошибка! Не удается открыть файл...\n");
		return 1;
	}

	z = a;
	for(z = a; z <= b; z++)
	{                                             
		fprintf(f, "Символ %c - Код %d\n", z, z);
		
		gotoxy(x, y++); cprintf("Символ %c - Код %d", z, z);
		if(y % 11 == 0)
		{
			x += 25;
			y = 1;
		}		
	}

	fclose(f);
        getch();
}