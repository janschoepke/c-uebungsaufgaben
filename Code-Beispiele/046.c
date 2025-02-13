#include <stdio.h>
int fakultaet(int n);

int main() {
    int eingabe;
    printf("Butte geben Sie zur Berechnung der Fakultaet eine Zahl ein!\n");
    scanf("%d", &eingabe);

    printf("%d\n", fakultaet(eingabe));

    return 0;
}

int fakultaet(int n) {
    if (n == 0) return 1;
    return n * fakultaet(n - 1);
}
