#include <stdio.h>

void printWelcomeScreen() {
    printf("Willkommen zum Bankautomaten!\n");
    printf("Optionen:\n");
    printf("1. Kontostand anzeigen\n");
    printf("2. Geld abheben\n");
    printf("3. Geld einzahlen\n");
    printf("4. Beenden\n\n");

    printf("Bitte wählen Sie eine Option: ");
}

int main() {
    int balance = 0;
    int choice;

    do {
        printWelcomeScreen();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Ihr Kontostand beträgt %d Euro.\n", balance);
                break;
            case 2:
                printf("Bitte geben Sie den Betrag ein, den Sie abheben möchten: ");
                int amount;
                scanf("%d", &amount);
                balance -= amount;
                printf("Sie haben %d Euro abgehoben.\n", amount);
                printf("Ihr Kontostand beträgt %d Euro.\n", balance);
                break;
            case 3:
                printf("Bitte geben Sie den Betrag ein, den Sie einzahlen möchten: ");
                int addition;
                scanf("%d", &addition);
                balance += addition;
                printf("Sie haben %d Euro eingezahlt.\n", addition);
                printf("Ihr Kontostand beträgt %d Euro.\n", balance);
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
