#include <stdio.h>

int main() {
    int a = 1 == 1;
    int b = 1 == 2;
    int c = 3 == 3;

    printf("a = 1 == 1: %d\n", a);
    printf("b = 1 == 2: %d\n", b);
    printf("c = 3 == 3: %d\n\n", c);

    printf("a && b: %d\n", a && b);
    printf("a && c: %d\n\n", a && c);

    printf("a || b: %d\n", a || b);
    printf("a || c: %d\n\n", a || c);

    printf("a && !b: %d\n\n", a && !b);
}
