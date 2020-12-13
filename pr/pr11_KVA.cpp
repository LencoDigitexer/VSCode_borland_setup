#include<conio.h>

#include<iostream.h>

#include<stdio.h>

int main(void) {
    clrscr();
    // init variables
    int a, b, c, d;
	int z=0, y=0;
    char ch;
    FILE * f;
    #define ESC 27
    // open file
    if ((f = fopen("fil_dat\\pr11_EIN.dat", "w")) == NULL) {
        fprintf(stderr, "Error! Can't open a file...\n");
        return 1;
    }
	cout << "Эта программа находит количество нечетных и четных чисел и 4 введенных\n";
    start:
        // input variables
		cout << "Введите a: ";
		cin >> a;
		cout << "Введите b: ";
		cin >> b;
		cout << "Введите c: ";
		cin >> c;
		cout << "Введите d: ";
		cin >> d;
		// substitute a - for x and check whether this expression is equal to the number b
		cout << "Четные числа: ";
			if(a%2==0){
				cout << a << " ";
				z++;
			}
			if(b%2==0){
				cout << b << " ";
				z++;
			}
			if(c%2==0){
				cout << c << " ";
				z++;
			}
			if(d%2==0){
				cout << d << " ";
				z++;
			}
		cout << endl<<"Количество четных чисел " << z << endl;
		cout << "Нечетные числа: ";
			if(a%2!=0){
				cout << a << " ";
				y++;
			}
			if(b%2!=0){
				cout << b << " ";
				y++;
			}
			if(c%2!=0){
				cout << c << " ";
				y++;
			}
			if(d%2!=0){
				cout << d << " ";
				y++;
			}
		cout << endl <<"Количество нечетных чисел " << y << endl;
		cout << "\nTo stop entering Esc\n";
		
		if ((ch = getch()) != ESC){
			goto start;
		} else {
			fclose(f);
			getch();
		}
		return 0;
}