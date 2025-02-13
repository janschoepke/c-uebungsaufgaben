#include <stdio.h>

int main() {
    int a = 1 == 1;
    int b = 1 == 2;
    int c = 3 == 3;

    printf("a = 1 == 1: %s\n", a ? "TRUE" : "FALSE");
    printf("b = 1 == 2: %s\n", b ? "TRUE" : "FALSE");
    printf("c = 3 == 3: %s\n\n", c ? "TRUE" : "FALSE");

    printf("a && b: %s\n", (a && b) ? "TRUE" : "FALSE");
    printf("a && c: %s\n\n", (a && c) ? "TRUE" : "FALSE");

    printf("a || b: %s\n", (a || b) ? "TRUE" : "FALSE");
    printf("a || c: %s\n\n", (a || c) ? "TRUE" : "FALSE");

    printf("a && !b: %s\n\n", (a && !b) ? "TRUE" : "FALSE");
}
