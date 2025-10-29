#include <stdio.h>
#include <string.h>

const int MAX_ENTRIES = 10;
const int MAX_LENGTH = 30;

// Funktion, um das Menü auszugeben
void menu() {
    printf("\nMenue:\n");
    printf("1. Eingabe\n");
    printf("2. Ausgabe\n");
    printf("3. Loeschen\n");
    printf("4. Programm beenden\n");
    printf("Wählen Sie eine Option: ");
}

// Funktion zum Hinzufügen eines Eintrags
void eingabe(char telefonliste[MAX_ENTRIES][4][MAX_LENGTH], int *anzahl) {
    if (*anzahl < MAX_ENTRIES) {
        printf("\nGeben Sie den Namen ein: ");
        scanf("%s", telefonliste[*anzahl][0]);
        printf("Geben Sie den Vornamen ein: ");
        scanf("%s", telefonliste[*anzahl][1]);
        printf("Geben Sie die Vorwahl ein: ");
        scanf("%s", telefonliste[*anzahl][2]);
        printf("Geben Sie die Telefonnummer ein: ");
        scanf("%s", telefonliste[*anzahl][3]);

        (*anzahl)++;
        printf("\nDatensatz hinzugefügt!\n");
    } else {
        printf("\nDie Liste ist voll! Es können keine weiteren Einträge vorgenommen werden.\n");
    }
}

// Funktion zum Ausgeben der Telefonliste
void ausgabe(char telefonliste[MAX_ENTRIES][4][MAX_LENGTH], int anzahl) {
    if (anzahl == 0) {
        printf("\nDie Liste ist leer!\n");
        return;
    }

    printf("\nTelefonliste:\n");
    printf("Nr.\tName\tVorname\tVorwahl\tTelefonnummer\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < anzahl; i++) {
        printf("%d.\t%s\t%s\t%s\t%s\n", i + 1, telefonliste[i][0], telefonliste[i][1], telefonliste[i][2], telefonliste[i][3]);
    }
}

// Funktion zum Löschen eines Eintrags
void loeschen(char telefonliste[MAX_ENTRIES][4][MAX_LENGTH], int *anzahl) {
    int loesch_index;

    if (*anzahl == 0) {
        printf("\nDie Liste ist leer, keine Einträge zum Löschen!\n");
        return;
    }

    printf("\nGeben Sie die Nummer des zu löschenden Eintrags ein: ");
    scanf("%d", &loesch_index);

    // Überprüfen, ob der Index gültig ist
    if (loesch_index < 1 || loesch_index > *anzahl) {
        printf("\nUngültiger Index!\n");
        return;
    }

    // Verschieben der Elemente nach dem Löschen
    for (int i = loesch_index - 1; i < *anzahl - 1; i++) {
        // Kopieren der Daten des nächsten Eintrags in den aktuellen Eintrag
        for (int j = 0; j < 4; j++) {
            strcpy(telefonliste[i][j], telefonliste[i + 1][j]);
        }
    }

    (*anzahl)--;  // Die Anzahl der Einträge verringern
    printf("\nDatensatz gelöscht!\n");
}

// Hauptfunktion
int main() {
    char telefonliste[MAX_ENTRIES][4][MAX_LENGTH];  // Array für die Telefonliste: MAX_ENTRIES Datensätze, jeder Datensatz hat 4 Felder
    int anzahl = 0;  // Zähler für die Anzahl der Einträge
    int auswahl;

    while (1) {
        menu();  // Menü anzeigen
        scanf("%d", &auswahl);  // Benutzerwahl einlesen

        switch (auswahl) {
            case 1:
                eingabe(telefonliste, &anzahl);  // Datensatz hinzufügen
                break;
            case 2:
                ausgabe(telefonliste, anzahl);  // Telefonliste ausgeben
                break;
            case 3:
                loeschen(telefonliste, &anzahl);  // Datensatz löschen
                break;
            case 4:
                printf("\nProgramm wird beendet.\n");
                return 0;
            default:
                printf("\nUngültige Wahl. Versuchen Sie es erneut.\n");
        }
    }

    return 0;
}
