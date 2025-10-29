#include <stdio.h>

// Definition der Funktion list_compare
int list_compare(int list1[10], int list2[10]) {
    int sum1 = 0;
    int sum2 = 0;

    // Berechnung der Summe der Elemente in list1
    for (int i = 0; i < 10; i++) {
        sum1 += list1[i];
    }

    // Berechnung der Summe der Elemente in list2
    for (int i = 0; i < 10; i++) {
        sum2 += list2[i];
    }

    // Vergleich der Summen und Rückgabe des Ergebnisses
    if (sum1 > sum2) {
        return -1;
    } else if (sum2 > sum1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Beispiel-Arrays mit jeweils 10 Werten
    int list1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int list2[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    // Aufruf der Funktion und Ausgabe des Ergebnisses
    int result = list_compare(list1, list2);

    if (result == -1) {
        printf("Die Summe der ersten Liste ist größer.\n");
    } else if (result == 1) {
        printf("Die Summe der zweiten Liste ist größer.\n");
    } else {
        printf("Die Summen der beiden Listen sind gleich.\n");
    }

    return 0;
}