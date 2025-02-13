#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hallo, Welt!";
    char *ptr = strchr(str, 'W');
    if (ptr)
        printf("Das Zeichen 'W' wurde gefunden bei: %s\n", ptr);
    else
        printf("Das Zeichen 'W' wurde nicht gefunden.\n");
    return 0;
}
