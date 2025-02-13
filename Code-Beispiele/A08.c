#include <stdio.h>

int main() {
    int a, b, c;
    printf("Bitte geben Sie die erste Zahl ein: ");
    scanf("%d", &a);
    printf("Bitte geben Sie die zweite Zahl ein: ");
    scanf("%d", &b);
    printf("Bitte geben Sie die letzte Zahl ein: ");
    scanf("%d", &c);

    int maximum = ((a >= b) && (a >= c)) ? a : ((b >= c) ? b : c);

    printf("Die groesste Zahl ist %d.\n", maximum);
}
