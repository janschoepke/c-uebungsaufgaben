#include <stdio.h>

int main() {
    int n = 0;

    n = 42; //Dezimale Darstellung, nichts neues!
    printf("%i\n", n);

    n = 052; //Oktale Darstellung, 52(8) = 42(10)
    printf("%o\n", n);

    n = 0x2a; //Hexadezimale Darstellung, 2A(16) = 42(10)
    printf("%x\n", n);
}
