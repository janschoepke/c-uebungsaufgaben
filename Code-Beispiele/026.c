#include <stdio.h>

int main() {
    int eingabe = 0;

    printf("Bitte geben Sie die erreichten Prozentpunkte ein: ");
    scanf("%d", &eingabe);

    switch (eingabe / 10) {
        case 10:
        case 9:
            printf("Note 1\n");
            break;
        case 8:
            printf("Note 2\n");
            break;
        case 7:
            printf("Note 3\n");
            break;
        case 6:
            printf("Note 4\n");
            break;
        default:
            printf("Note 5");
            break;
    }

    return 0;
}
