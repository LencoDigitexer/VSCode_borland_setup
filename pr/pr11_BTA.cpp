#include<conio.h>
#include<iostream.h>
#include<stdio.h>

int main(void) {
    clrscr();
    // init variables
    float b, z;
    char ch;
	unsigned long a, sum;
	unsigned long dt, t, s, d, e, td;
    FILE * f;
    #define ESC 27
    // open file
    if ((f = fopen("fil_dat\\pr11_BTA.dat", "w")) == NULL) {
        fprintf(stderr, "Error! Can't open a file...\n");
        return 1;
    }
	cout << "Эта программа, проверяющая, верно ли утверждение, что сумма цифр введенного вами целого числа является четной..\n";
    start:
        // input variables
		cout << "Ввести число не больше 100000: ";
		cin >> a;
		if(a > 100000){ 
			cout << "Число больше 100000. Ошибка" << endl; 
			return 1; 
		} else {
	   dt = a / 100000;
	   td = a % 100000/10000;
		t = a % 10000/1000;
		s = a % 1000/100;
		d = a % 100/10;
		e = a % 10;
		sum = dt + t + s + d + e;
		}
		if( sum%2 == 0 ) {
			cout << "[+] Сумма цифр числа " << a << " (= " << sum << ") четно. Утверждение верно."  << endl;
			fprintf (f, "[+] Сумма цифр числа %f\tb (=%f\t) четно. Утверждение верно.", a, sum);
		}
		// if the expression is not equal to b
		else {
			cout << "[-] Сумма цифр числа " << a << " (= " << sum << ") нечетно. Утверждение неверно."  << endl;
			fprintf (f, "[-] Сумма цифр числа %f\tb (=%f\t) нечетно. Утверждение неверно.", a, sum);
		}
		cout << "\nДля прекращения ввода Esc\n";
		
		if ((ch = getch()) != ESC){
			goto start;
		} else {
			fclose(f);

			getch();
		}
		return 0;
}