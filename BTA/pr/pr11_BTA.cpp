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
	cout << "�� �ணࠬ��, �஢������, ��୮ �� �⢥ত����, �� �㬬� ��� ���������� ���� 楫��� �᫠ ���� �⭮�..\n";
    start:
        // input variables
		cout << "����� �᫮ �� ����� 100000: ";
		cin >> a;
		if(a > 100000){ 
			cout << "��᫮ ����� 100000. �訡��" << endl; 
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
			cout << "[+] �㬬� ��� �᫠ " << a << " (= " << sum << ") �⭮. �⢥ত���� ��୮."  << endl;
			fprintf (f, "[+] �㬬� ��� �᫠ %f\tb (=%f\t) �⭮. �⢥ত���� ��୮.", a, sum);
		}
		// if the expression is not equal to b
		else {
			cout << "[-] �㬬� ��� �᫠ " << a << " (= " << sum << ") ���⭮. �⢥ত���� ����୮."  << endl;
			fprintf (f, "[-] �㬬� ��� �᫠ %f\tb (=%f\t) ���⭮. �⢥ত���� ����୮.", a, sum);
		}
		cout << "\n��� �४�饭�� ����� Esc\n";
		
		if ((ch = getch()) != ESC){
			goto start;
		} else {
			fclose(f);

			getch();
		}
		return 0;
}