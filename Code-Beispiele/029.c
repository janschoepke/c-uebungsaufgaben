#include <stdio.h>

int main() {
    char str[15];

    printf("Bitte geben Sie eine Zeichenkette ein:");
    fgets(str, 15, stdin);
    puts(str);

    return 0;
}
