#include <stdio.h>

// Enum zur Speicherung der Monatsnamen
enum Monate {
    JANUAR = 1, FEBRUAR, MAERZ, APRIL, MAI, JUNI,
    JULI, AUGUST, SEPTEMBER, OKTOBER, NOVEMBER, DEZEMBER
};

// Funktion zur Rückgabe des Monatsnamens als String
const char* getMonatName(int monat) {
    switch (monat) {
        case JANUAR: return "Januar";
        case FEBRUAR: return "Februar";
        case MAERZ: return "März";
        case APRIL: return "April";
        case MAI: return "Mai";
        case JUNI: return "Juni";
        case JULI: return "Juli";
        case AUGUST: return "August";
        case SEPTEMBER: return "September";
        case OKTOBER: return "Oktober";
        case NOVEMBER: return "November";
        case DEZEMBER: return "Dezember";
        default: return "Ungültig";
    }
}

int main() {
    int maxNutzer = 10;
    int nutzerZahl;
    int geburtstagsDaten[maxNutzer][3]; // Tag, Monat, Jahr

    printf("Wie viele Nutzer möchten Sie eingeben (maximal 10)? ");
    scanf("%d", &nutzerZahl);

    if (nutzerZahl < 1 || nutzerZahl > maxNutzer) {
        printf("Bitte geben Sie eine Zahl zwischen 1 und 10 ein.\n");
        return 1;
    }

    // Nutzerdaten eingeben
    for (int i = 0; i < nutzerZahl; i++) {
        printf("\nNutzer %d:\n", i + 1);
        printf("Bitte geben Sie den Geburtstag ein (Tag): ");
        scanf("%d", &geburtstagsDaten[i][0]);

        // Monatseingabe mit Validierung
        int monat;
        while (1) {
            printf("Bitte geben Sie den Geburtsmonat ein (Monat, 1-12): ");
            if (scanf("%d", &monat) == 1 && monat >= JANUAR && monat <= DEZEMBER) {
                geburtstagsDaten[i][1] = monat;
                break;
            } else {
                printf("Ungültige Eingabe. Bitte geben Sie eine Zahl zwischen 1 und 12 ein.\n");
                while (getchar() != '\n'); // Eingabepuffer leeren
            }
        }

        printf("Bitte geben Sie das Geburtsjahr ein (Jahr): ");
        scanf("%d", &geburtstagsDaten[i][2]);
    }

    // Gespeicherte Geburtstagsdaten ausgeben
    printf("\nGespeicherte Geburtstagsdaten:\n");
    for (int i = 0; i < nutzerZahl; i++) {
        int tag = geburtstagsDaten[i][0];
        int monat = geburtstagsDaten[i][1];
        int jahr = geburtstagsDaten[i][2];

        // Monat aus dem Enum in Textform ausgeben
        printf("Nutzer %d: %02d. %s %d\n", i + 1, tag, getMonatName(monat), jahr);
    }

    return 0;
}
