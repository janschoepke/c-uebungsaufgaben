#include <stdio.h>

int main() {
    int i, j, k;

    // Äußere Schleife für die Zeilen
    for (i = 0; i < 9; i++) {
        // Leere Zeichen für die Ausrichtung der Pyramide
        for (j = 0; j < 8 - i; j++) {
            printf(" ");
        }

        // Abzählende Zahlen (von i bis 0)
        for (k = i; k >= 0; k--) {
            printf("%d", k);
        }

        // Aufzählende Zahlen (von 1 bis i)
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Neue Zeile nach jeder Zeile der Pyramide
        printf("\n");
    }

    return 0;
}