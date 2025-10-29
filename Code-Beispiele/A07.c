#include <stdio.h>

int main() {
    int a = 38;
    int b = 21;
    int c = 39;

    int maximum = ((a >= b) && (a >= c)) ? a : ((b >= c) ? b : c);

    printf("Die groesste Zahl ist %d.\n", maximum);
}
