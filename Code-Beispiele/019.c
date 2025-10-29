#include <stdio.h>

int main() {
    int zaehler = 0;

    while (zaehler < 10) {
        printf("Hello World\n");
        zaehler++;
    }

    const int MAX = 10;
    int i = 0;

    while (i < MAX) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
