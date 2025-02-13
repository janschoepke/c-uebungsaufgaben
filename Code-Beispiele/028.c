#include <stdio.h>

int main() {
    int a[5];
    int b[5] = {1, 2, 3, 4, 5};
    int c[] = {1, 2, 3, 4, 5};
    int d[5] = {1, 2, 3};

    //Remember: int = 4 bytes
    printf("%d\n", b[2]);
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
}
