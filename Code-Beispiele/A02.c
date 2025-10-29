#include <stdio.h>

/**
 *
 * Aufgabe: Telefonbuch Light
 * Schreiben Sie ein Programm, welches nacheinander die Vorwahl und im
 * Anschluss die Telefonnummer des Programmbenutzers abfragt, und nach Abschluss
 * der Abfrage die Nummer im Format Ihre Telefonnummer: <vorwahl> / <rufnummer> ausgibt.
 */
int main() {
    int vorwahl;
    int rufnummer;

    // Benutzer nach der Vorwahl fragen
    printf("Bitte geben Sie Ihre Vorwahl ein: ");
    scanf("%d", &vorwahl);

    // Benutzer nach der Telefonnummer fragen
    printf("Bitte geben Sie Ihre Telefonnummer ein: ");
    scanf("%d", &rufnummer);

    // Telefonnummer im gewünschten Format ausgeben
    // Problem: Fuehrende 0 wird nicht korrekt gespeichert
    // (Handynummern haben 4-stellige Vorwahlen, Festnetznummern in Deutschland 5)
    printf("Ihre Telefonnummer: 0%d / %d\n", vorwahl, rufnummer);

    return 0;
}
