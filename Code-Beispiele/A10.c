#include <stdio.h>

int main() {
    int i, j;

    do {
        printf("Bitte geben Sie zwei Zahlen ein (0 beendet die Eingabe): \n");
        scanf("%d %d", &i, &j);

        if (i > j) {
            printf("Die erste Zahl ist groesser als die zweite. \n");
        } else if (j > i) {
            printf("Die zweite Zahl ist groesser als die erste. \n");
        } else {
            printf("Beide Zahlen sind gleich gross. \n");
        }
    } while (i != 0 || j != 0); //beide Zahlen 0
    //} while (i != 0 && j != 0); //eine der beiden Zahlen 0

    return 0;
}
