#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Beispieltext";
    char dest[50];
    strcpy(dest, src);
    printf("Kopierter String: %s\n", dest);
    return 0;
}
