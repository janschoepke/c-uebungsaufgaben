#include <stdio.h>
int ergebnis = 1;

int fakultaet0();

int fakultaet1();

int fakultaet2();

int fakultaet3();

int fakultaet4();

int fakultaet5();

int main() {
    int fakultaet;
    printf("Bitte geben Sie zur Berechnung der Fakultaet eine Zahl von 0 bis 5 ein!");
    scanf("%d", &fakultaet);

    switch (fakultaet) {
        case 5: ergebnis = fakultaet5();
            break;
        case 4: ergebnis = fakultaet4();
            break;
        case 3: ergebnis = fakultaet3();
            break;
        case 2: ergebnis = fakultaet2();
            break;
        case 1: ergebnis = fakultaet1();
            break;
        case 0: ergebnis = fakultaet0();
            break;
    }

    printf("%d\n", ergebnis);

    return 0;
}

int fakultaet0() {
    return 1;
}

int fakultaet1() {
    return fakultaet0();
}

int fakultaet2() {
    return 2 * fakultaet1();
}

int fakultaet3() {
    return 3 * fakultaet2();
}

int fakultaet4() {
    return 4 * fakultaet3();
}

int fakultaet5() {
    return 5 * fakultaet4();
}
