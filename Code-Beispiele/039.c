#include <stdio.h>

// globale Gültigkeit
const int a = 1;

void funktion();

int main() {
    int b = 2;
    int c = 3;

    for (int i = 0; i < 1; i++) {
        int c = 4;
        int d = 5;

        printf("%d %d %d %d\n", a, b, c, d);
    }

    funktion();

    printf("%d %d %d\n", a, b, c);

    return 0;
}

void funktion() {
    int b = 3;
    printf("%d %d\n", a, b);
}
