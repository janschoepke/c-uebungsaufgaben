#include <stdio.h>

int main() {
    int eingabe;
    int fakultaet = 1; // Ergebnisvariable für die Fakultät

    printf("Butte geben Sie zur Berechnung der Fakultaet eine Zahl ein!\n");
    scanf("%d", &eingabe);

    // Berechnung der Fakultät innerhalb einer Schleife
    for (int i = 1; i <= eingabe; i++) {
        fakultaet = fakultaet * i;
    }

    // Ergebnis ausgeben
    printf("Die Fakultät von %d ist %d.\n", eingabe, fakultaet);

    return 0;
}
