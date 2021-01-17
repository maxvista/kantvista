#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () { 
	srand((unsigned)time(NULL));
	#include "array.h"
	char c = 'j';
	int kvi;
	char kv[5];
	printf("Drücke 1 für Vista.\n");
	printf("Drücke 2 für Kant.\n");
	scanf("%i", &kvi);
	if (kvi == 1) {
		int n = rand() % 49;
		printf ("%sVista\n", arr[n]);
	} else if (kvi == 2) {
		int n = rand() % 49;
		printf ("%sKant\n", arr[n]);
	} else {
		printf("Nicht gültige HurenEingabe\n");
	}
}
