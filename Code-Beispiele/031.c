#include <stdio.h>

int main() {
    int a[3][2];
    int b[2][3];
    int c[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int d[2][3] = {1, 2, 3, 4, 5, 6};
    int e[][3] = {1, 2, 3, 4, 5, 6};

    printf("%d\n\n", sizeof(c));
    printf("%d\n", c[1][2]);
    printf("%d\n", d[0][1]);
    printf("%d\n", e[8][2]);
}
