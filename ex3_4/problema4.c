#include <stdio.h>
#include <math.h>

#define CHARS_IN_TAB 8

// Problema 4

int main()
{
	double xmax = 10;
	double nmax = 5;

	// Citim limitele tabelului
	printf("Introduceti valoarea maxima pentru x: ");
	scanf("%lf", &xmax);
	printf("Introduceti valoarea maxima pentru n: ");
	scanf("%lf", &nmax);

	// Afisam capul de tabel
	for (int i=0; i<3; i++) {
		for (int j=0; j<nmax; j++) {	// ! conversie implicita la j<nmax
			if (i==0)
				printf(" %d\t", j+1);
			else if (i==1)
				printf("x\t");
			else
				for(int tab=0; tab<CHARS_IN_TAB; tab++) putchar('-');
			
		}
		putchar('\n');
	}

	// Afisam valorile din tabel
	for (double x=0; x<=xmax; x++) {
		for (double n=0; n<nmax; n++) {
			if (x==0)
				putchar('0');	// primul rand, toate valorile sunt 0
			else if (x==1)
				putchar('1');	// al doilea rand, toate valorile sunt 1
			else { 
				if (n==0)
					printf("%.0f", x);				// prima coloana, afisam pe x neschimbat
				else
					printf("%.0f", pow(x, n+1));	// afisam pe x la puterea n+1 (n de la 0 la 4)
			}
			putchar('\t');
		}
		putchar('\n');
	}
	return 0;
}

