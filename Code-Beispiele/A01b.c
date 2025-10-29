#include <stdio.h>

int main() {
    int zahl1, zahl2, summe;

    // Eingabe der beiden Zahlen durch den Benutzer
    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &zahl1);

    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &zahl2);

    // Addition der beiden Zahlen
    summe = zahl1 + zahl2;

    // Ausgabe des Ergebnisses
    printf("Die Summe von %d und %d ist %d.\n", zahl1, zahl2, summe);

    return 0;
}