#include <stdio.h>

int main() {
    int fakultaet;
    int ergebnis = 1;

    printf("Bitte geben Sie zur Berechnung der Fakultaet eine Zahl von 0 bis 5 ein!");
    scanf("%d", &fakultaet);

    switch (fakultaet) {
        case 5: ergebnis = 5 * 4 * 3 * 2 * 1;
            break;
        case 4: ergebnis = 4 * 3 * 2 * 1;
            break;
        case 3: ergebnis = 3 * 2 * 1;
            break;
        case 2: ergebnis = 2 * 1;
            break;
        case 1:
        case 0: ergebnis = 1;
            break;
    }

    printf("%d\n", ergebnis);

    return 0;
}
