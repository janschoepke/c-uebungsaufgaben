#include <stdio.h>

//Auf Basis von 028.c
int main() {
    int einmalEins[11][11];

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            einmalEins[i][j] = i * j;
        }
    }

    printf("6 * 7 = %d\n", einmalEins[6][7]);
}
