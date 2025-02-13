#include <stdio.h>

void printWelcomeScreen();

void printBalance(int balance);

int increaseBalance(int balance);

int decreaseBalance(int balance);

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
                balance = decreaseBalance(balance);
                printBalance(balance);
                break;
            case 3:
                printf("Bitte geben Sie den Betrag ein, den Sie einzahlen möchten: ");
                balance = increaseBalance(balance);
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

void printBalance(int balance) {
    printf("Ihr Kontostand beträgt %d Euro.\n", balance);
}

int readValue() {
    int value;
    scanf("%d", &value);
    return value;
}

int increaseBalance(int balance) {
    int value = readValue();
    balance += value;
    printf("Sie haben %d Euro eingezahlt.\n", value);
    return balance;
}

int decreaseBalance(int balance) {
    int value = readValue();
    balance -= value;
    printf("Sie haben %d Euro abgehoben.\n", value);
    return balance;
}
