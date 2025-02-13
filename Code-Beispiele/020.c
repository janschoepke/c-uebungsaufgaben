#include <stdio.h>

int main() {
    const int MAX = 10;

    for (int i = 0; i < 10; i++) {
        printf("Hello World\n");
    }

    printf("\n");

    for (int i = 0; i < MAX; i++) {
        printf("%d ", i);
    }

    printf("\n");

    for (int i = 9; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
