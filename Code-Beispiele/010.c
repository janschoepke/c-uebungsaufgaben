#include <stdio.h>

int main() {
    short a = 2;
    int b = 5;
    float c = 3;
    double d = 0.0;
    int e = 0;

    e = d = ++a + b / c;

    // Übersichtliche Alternative:
    // a++;
    // e = d = a + b / c;

    printf("%f\n", d);
    printf("%d\n", e);

    return 0;
}
