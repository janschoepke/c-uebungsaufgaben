#include <stdio.h>

/* Gibt den Willkommens-Bildschirm aus */
void printWelcomeScreen();

/* Gibt den aktuellen Kontostand an beliebiger Stelle des Programms aus */
void printBalance(int balance);

/* Erhoeht oder verringert den Kontostand im Betrag value */
void manipulateBalance(int *balance, int value);

/* Liest eine durch den Nutzer eingegebene Ganzzahl ein und gibt diese zurueck */
int readValue();

int main() {
    int balance = 0;
    int choice;

    do {
        printWelcomeScreen();
        choice = readValue();
        switch (choice) {
            case 1:
                printBalance(balance);
                break;
            case 2:
                printf("Bitte geben Sie den Betrag ein, den Sie abheben möchten: ");
                int subtr = readValue();
                // balance wird verringert, deshalb eingegebener Betrag negativiert
                manipulateBalance(&balance, subtr * -1);
                printf("Sie haben %d Euro abgehoben.\n", subtr);
                printBalance(balance);
                break;
            case 3:
                printf("Bitte geben Sie den Betrag ein, den Sie einzahlen möchten: ");
                int add = readValue();
                manipulateBalance(&balance, add);
                printf("Sie haben %d Euro eingezahlt.\n", add);
                printBalance(balance);
                break;
            case 4:
                printf("Auf Wiedersehen!\n");
                break;
            default:
                printf("Ungültige Option.\n");
        }
    } while (choice != 4);

    return 0;
}

void printWelcomeScreen() {
    printf("Willkommen zum Bankautomaten!\n");
    printf("Optionen:\n");
    printf("1. Kontostand anzeigen\n");
    printf("2. Geld abheben\n");
    printf("3. Geld einzahlen\n");
    printf("4. Beenden\n\n");

    printf("Bitte wählen Sie eine Option: ");
}

int readValue() {
    int value;
    scanf("%d", &value);
    return value;
}

void printBalance(int balance) {
    printf("Ihr Kontostand beträgt %d Euro.\n", balance);
}

void manipulateBalance(int *balance, int value) {
    *balance += value;
}
