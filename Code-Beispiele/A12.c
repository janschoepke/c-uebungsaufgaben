#include <stdio.h>

int main() {
    // Aufgabe 1: -10, -8, -6, …, 10
    printf("Aufgabe 1: ");
    for (int i = -10; i <= 10; i += 2) {
        printf("%d", i);
        if (i < 10) printf(", ");
    }
    printf("\n");

    // Aufgabe 2: 1, 2, 4, 7, 11, 16, … solange < 500
    printf("Aufgabe 2: ");
    int value = 1;
    int increment = 1;
    while (value < 500) {
        printf("%d", value);
        value += increment;
        increment++;
        if (value < 500) printf(", ");
    }
    printf("\n");

    // Aufgabe 3: 1, 1.1, 1.2, 1.3, … 1.9, 2
    printf("Aufgabe 3: ");
    for (float j = 1.0; j <= 2.0; j += 0.1) {
        printf("%.1f", j);
        if (j < 2.0) printf(", ");
    }
    printf("\n");

    return 0;
}