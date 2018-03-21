#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float x;

	// Einlesen der Zahl
	x = atof(argv[1]);
	
	//Programm
	if (x > 0) {
		printf("x ist positiv!\n");
	}
	
	else if (x < 0) {
		printf("x ist negativ!\n");
	}

	else {
		printf("x ist genau 0!\n");
	}


	return 0;
}
