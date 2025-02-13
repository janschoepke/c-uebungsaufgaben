#include <stdio.h>

// Definition der Funktion increment
int increment(int number) {
    return number + 1;
}

int main() {
    int value = 5;
    int result = increment(value);

    printf("Der Wert nach dem Inkrementieren: %d\n", result);

    return 0;
}