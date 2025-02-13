#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hallo";
    char str2[] = ", Welt!";
    strcat(str1, str2);
    printf("Kombinierter String: %s\n", str1);
    return 0;
}
