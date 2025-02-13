#include <stdio.h>

int main() {
    int birthdays[10][3]; // Array zur Speicherung von Tag, Monat und Jahr für bis zu 10 Nutzer
    int numUsers = 0;

    printf("Wie viele Nutzer möchten Sie eingeben (maximal 10)? ");
    scanf("%d", &numUsers);

    if (numUsers > 10 || numUsers < 1) {
        printf("Ungültige Anzahl an Nutzern. Bitte wählen Sie eine Zahl zwischen 1 und 10.\n");
        return 1;
    }

    // Schleife zur Eingabe der Geburtstagsdaten für jeden Nutzer
    for (int i = 0; i < numUsers; i++) {
        printf("\nNutzer %d:\n", i + 1);

        printf("Bitte geben Sie den Geburtstag ein (Tag): ");
        scanf("%d", &birthdays[i][0]); // Tag speichern

        printf("Bitte geben Sie den Geburtsmonat ein (Monat): ");
        scanf("%d", &birthdays[i][1]); // Monat speichern

        printf("Bitte geben Sie das Geburtsjahr ein (Jahr): ");
        scanf("%d", &birthdays[i][2]); // Jahr speichern
    }

    // Ausgabe aller gespeicherten Geburtstagsdaten
    printf("\nGespeicherte Geburtstagsdaten:\n");
    for (int i = 0; i < numUsers; i++) {
        printf("Nutzer %d: %02d.%02d.%d\n", i + 1, birthdays[i][0], birthdays[i][1], birthdays[i][2]);
    }

    return 0;
}