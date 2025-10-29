#include <stdio.h>

int main() {
    int eingabe = 0;

    printf("Bitte geben Sie Ihr Berechtigungslevel ein: ");
    scanf("%d", &eingabe);

    switch (eingabe) {
        case 5:
            printf("Sie haben Zugriff zu den Räumen der Geschäftsleitung\n");
        case 4:
            printf("Sie haben Zugriff zu den Räumen der Personalabteilung\n");
        case 3:
            printf("Sie haben Zugriff zu den Räumen der Buchhaltungsabteilung\n");
        case 2:
            printf("Sie haben Zugriff zu den Räumen der Produktion\n");
        case 1:
            printf("Sie haben Zugriff zu den Räumen des Frontdesks\n");
    }

    return 0;
}
