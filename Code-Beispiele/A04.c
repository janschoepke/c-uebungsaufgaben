#include <stdio.h>

/*
* Aufgabe: Obstladen: Schreiben Sie ein Programm, welches für jedes im Laden
* angegebene Obst in einer Variable den zugehörigen Preis speichert. Angenommen,
* ein Kunde kauft von jedem Obst ein Exemplar. Wie viel Geld müsste der Kunde bezahlen?
 */
int main() {
    // Preis pro Obstsorten in Euro
    float apfel = 2.50;
    float banane = 1.20;
    float orange = 1.80;
    float kiwi = 3.00;
    float trauben = 5.08;

    // Berechnung der Gesamtsumme
    float summe = apfel + banane + orange + kiwi + trauben;

    // Ausgabe der Summe
    printf("Summe: %.2f Euro\n", summe);

    return 0;
}
