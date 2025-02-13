#include <stdio.h>

int main() {
    int eingabe;

    do {
        printf("\n\nBitte geben Sie eine Ganzzahl ein (0 beendet die Eingabe): ");
        scanf("%d", &eingabe);
        printf("Die Zahl ist %d", eingabe);
    } while (eingabe != 0);

    return 0;
}
