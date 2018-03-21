#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a, b;
	b = 1;
	int i = 1;

	//Verzweigung, damit genau 1 parameter eingegeben werden
	if(argc == 2) {

		// Einlesen der Zahl
		a = atof(argv[1]);

		// Berechnung der Fakultät
		if (a == 0) {
			printf("Die Fakultät von 0 ist 0\n");
		}

		else if ( a < 0) {
			printf("Für negative Zahlen ist die Fakultät nicht definiert!\n");
		}

		else {
			while ( i <= a ){
				b = i*b;
				i++;
			}
		
	
		// Ausgabe
		printf("Die Fakultät der Zahl %i ist %i\n",
			a, b);
		printf("Anzahl der Bytes von zahl: %i\n", sizeof(b));

		}
	}

	else {
		printf(" Es wird 1 Parameter benötigt! \n");
	}
	return 0;

	//Ab der Zahl 13 stimmt die Fakultät nicht mehr!
					
}
