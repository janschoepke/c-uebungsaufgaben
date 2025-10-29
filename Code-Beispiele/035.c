#include <stdio.h>

void printWelcomeScreen();

void printBalance(int balance);

int increaseBalance(int balance);

int decreaseBalance(int balance);

int main() {
    int balance = 0;
    int choice;

    do {
        printWelcomeScreen();
        scanf("%d", &choice);
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

int increaseBalance(int balance) {
    int addition;
    scanf("%d", &addition);
    balance += addition;
    printf("Sie haben %d Euro eingezahlt.\n", addition);
    return balance;
}

int decreaseBalance(int balance) {
    int amount;
    scanf("%d", &amount);
    balance -= amount;
    printf("Sie haben %d Euro abgehoben.\n", amount);
    return balance;
}
