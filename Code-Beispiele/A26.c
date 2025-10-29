#include <stdio.h>
#include <string.h>

const int MAX_ENTRIES = 10;

// Struktur für die Telefonliste
typedef struct {
    char name[30];
    char vorname[30];
    char vorwahl[10];
    char telefonnummer[20];
} Teilnehmer;

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
void eingabe(Teilnehmer liste[], int *anzahl) {
    if (*anzahl < MAX_ENTRIES) {
        printf("\nGeben Sie den Namen ein: ");
        scanf("%s", liste[*anzahl].name);
        printf("Geben Sie den Vornamen ein: ");
        scanf("%s", liste[*anzahl].vorname);
        printf("Geben Sie die Vorwahl ein: ");
        scanf("%s", liste[*anzahl].vorwahl);
        printf("Geben Sie die Telefonnummer ein: ");
        scanf("%s", liste[*anzahl].telefonnummer);

        (*anzahl)++;
        printf("\nDatensatz hinzugefügt!\n");
    } else {
        printf("\nDie Liste ist voll! Es können keine weiteren Einträge vorgenommen werden.\n");
    }
}

// Funktion zum Ausgeben der Telefonliste
void ausgabe(Teilnehmer liste[], int anzahl) {
    if (anzahl == 0) {
        printf("\nDie Liste ist leer!\n");
        return;
    }

    printf("\nTelefonliste:\n");
    printf("Nr.\tName\tVorname\tVorwahl\tTelefonnummer\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < anzahl; i++) {
        printf("%d.\t%s\t%s\t%s\t%s\n", i + 1, liste[i].name, liste[i].vorname, liste[i].vorwahl, liste[i].telefonnummer);
    }
}

// Funktion zum Löschen eines Eintrags
void loeschen(Teilnehmer liste[], int *anzahl) {
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
        liste[i] = liste[i + 1];
    }

    (*anzahl)--;  // Die Anzahl der Einträge verringern
    printf("\nDatensatz gelöscht!\n");
}

// Hauptfunktion
int main() {
    Teilnehmer liste[MAX_ENTRIES];  // Array zur Speicherung der Telefonliste
    int anzahl = 0;  // Zähler für die Anzahl der Einträge
    int auswahl;

    while (1) {
        menu();  // Menü anzeigen
        scanf("%d", &auswahl);  // Benutzerwahl einlesen

        switch (auswahl) {
            case 1:
                eingabe(liste, &anzahl);  // Datensatz hinzufügen
                break;
            case 2:
                ausgabe(liste, anzahl);  // Telefonliste ausgeben
                break;
            case 3:
                loeschen(liste, &anzahl);  // Datensatz löschen
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
