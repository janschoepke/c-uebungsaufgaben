#include <stdio.h>

int main() {
    int i;

    //Szenario 1: Kopfgesteuerte While-Schleife
    i = 10;
    while (i > 5) {
        printf("%d ", i);
        i--;
    }

    printf("\n\n");

    //Szenario 2: Fußgesteuerte While-Schleife
    i = 10;
    do {
        printf("%d ", i);
        i--;
    } while (i > 5);

    printf("\n\n");

    //Szenario 3: for-Schleife
    for (i = 10; i > 5; i--) {
        printf("%d ", i);
    }

    return 0;
}
