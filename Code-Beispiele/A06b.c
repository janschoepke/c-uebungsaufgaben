#include <stdio.h>

int main() {
    int a, b;
    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &a);
    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &b);

    int maximum = a > b ? a : b;

    printf("Die groesste Zahl ist %d.\n", maximum);
}
