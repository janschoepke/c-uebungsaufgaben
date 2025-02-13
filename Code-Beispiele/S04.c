#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Programmierung macht Spaß!";
    char *ptr = strstr(str, "macht");
    if (ptr)
        printf("Substring gefunden: %s\n", ptr);
    else
        printf("Substring nicht gefunden.\n");
    return 0;
}
