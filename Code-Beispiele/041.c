#include <stdio.h>

// globale Gültigkeit
const int EINZAHLUNG = 0;
const int AUSZAHLUNG = 1;
int balance = 0;

void printWelcomeScreen();

void printBalance();

void manipulateBalance(int value);

int readValue();

int main() {
    int choice;

    do {
        printWelcomeScreen();
        choice = readValue();
        switch (choice) {
            case 1:
                printBalance();
                break;
            case 2:
                printf("Bitte geben Sie den Betrag ein, den Sie abheben möchten: ");
                manipulateBalance(AUSZAHLUNG);
                break;
            case 3:
                printf("Bitte geben Sie den Betrag ein, den Sie einzahlen möchten: ");
                manipulateBalance(EINZAHLUNG);
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

void printBalance() {
    printf("Ihr Kontostand beträgt %d Euro.\n", balance);
}

void manipulateBalance(int operation) {
    int initialValue = readValue();
    int value = (operation == AUSZAHLUNG) ? -initialValue : initialValue;
    char *operationString = (operation == AUSZAHLUNG) ? "aus" : "ein";

    balance += value;
    printf("Sie haben %d Euro %sgezahlt.\n", initialValue, operationString);
    printBalance();
}
