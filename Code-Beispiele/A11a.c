#include <stdio.h>

int main() {
    int smsCount = 217;
    int totalCents;

    // Kostenberechnung basierend auf der Anzahl der SMS
    if (smsCount < 50) {
        totalCents = smsCount * 10;
    } else if (smsCount < 150) {
        totalCents = smsCount * 8;
    } else if (smsCount < 300) {
        totalCents = smsCount * 6;
    } else {
        totalCents = smsCount * 4;
    }

    // Umrechnung in Euro und Cent
    int euros = totalCents / 100;
    int cents = totalCents % 100;

    printf("%d SMS: %d Euro und %d Cent\n", smsCount, euros, cents);

    return 0;
}