#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "word.h"

int main () {
    srand((unsigned)time(NULL));
    int i;
    printf("Druecke 1 fuer Vista.\n");
    printf("Druecke 2 fuer Kant.\n");
    scanf("%i", &i);
    if (i == 1) {
            int n = rand() % 723;
            printf ("%svista\n", w[n]);
    } else if (i == 2) {
            int n = rand() % 723;
            printf ("%skant\n", w[n]);
    } else {
            printf("Nicht gueltige Eingabe.\n");
    }
}
