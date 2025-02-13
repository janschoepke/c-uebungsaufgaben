#include <stdio.h>

int main() {
    int einmalEins[10][10];

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            einmalEins[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("Zahlentabelle: \n");

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%3d ", einmalEins[i - 1][j - 1]);
        }
        printf("\n");
    }

    return 0;

}
