#include <stdio.h>

int main() {
    //Endlosschleife
    for (int zaehler = 0; ; zaehler++) {
        if (zaehler > 100) {
            break;
        }

        if (zaehler % 10 != 0) {
            continue;
        }

        printf("%d\n", zaehler);
    }
    return 0;
}
