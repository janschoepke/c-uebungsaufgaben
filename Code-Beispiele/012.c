#include <stdio.h>

int main() {
    int x = 1;

    printf("Ausgabe x: %d\n", x);
    printf("Operator ++x, x: %d\n", ++x);
    printf("Ausgabe x: %d\n", x);
    printf("Operator x++, x: %d\n", x++);
    printf("Ausgabe x: %d\n", x);

    printf("Operator --x, x: %d\n", --x);
    printf("Ausgabe x: %d\n", x);
    printf("Operator x--, x: %d\n", x--);
    printf("Ausgabe x: %d\n", x);
}
