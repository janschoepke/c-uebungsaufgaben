#include <stdio.h>

int main() {
    int i, j;

    printf("Bitte geben Sie zwei Zahlen ein: ");
    scanf("%d %d", &i, &j);

    if (i > j) {
        puts("Die erste Zahl ist groesser als die zweite.");
    } else {
        puts("Die zweite Zahl ist groesser als die erste.");
    }

    return 0;
}
