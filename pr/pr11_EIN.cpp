#include<conio.h>

#include<iostream.h>

#include<stdio.h>

int main(void) {
    clrscr();
    // init variables
    float a, b, z;
    char ch;
    FILE * f;
    #define ESC 27
    // open file
    if ((f = fopen("fil_dat\\pr11_EIN.dat", "w")) == NULL) {
        fprintf(stderr, "Error! Can't open a file...\n");
        return 1;
    }
	cout << "Hi, this program determines whether the graph of the function y = 5x^2-7x + 2 passes through a given point with coordinates (a, b).\n";
    start:
        // input variables
		cout << "Input a: ";
		cin >> a;
		cout << "Input b: ";
		cin >> b;
		// substitute a - for x and check whether this expression is equal to the number b
		if(5*a*a-7*a+2 == b) {
			cout << "[+] Point with coordinates " << "(" << a << ":" << b << ")" << " included in the function schedule y = 5x^2 - 7x + 2" << endl;
			fprintf (f, "[+] Point with coordinates a = %f\tb = %f\t included in the function schedule y = 5x^2 - 7x + 2", a, b);
		}
		// if the expression is not equal to b
		else {
			cout << "[-] Point with coordinates " << "(" << a << ":" << b << ")" << " not included in the function schedule y = 5x^2 - 7x + 2" << endl;
			fprintf (f, "[-] Point with coordinates a = %f\tb = %f\t not included in the function schedule y = 5x^2 - 7x + 2", a, b);
		}
		cout << "\nTo stop entering Esc\n";
		cout << "To continue typing, press any key\n";
		
		if ((ch = getch()) != ESC){
			goto start;
		} else {
			fclose(f);
			
			cout << "\nThank you for using my program\n";
			getch();
		}
		return 0;
}