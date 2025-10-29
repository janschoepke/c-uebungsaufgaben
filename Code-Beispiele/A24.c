#include <stdio.h>

int main() {
    char hex_char;
    int decimal_value;

    while (1) {
        printf("Bitte geben Sie eine Hex-Ziffer ein: ");
        scanf(" %c", &hex_char);  // Eingabe eines einzelnen Zeichens

        // Wenn das Zeichen '@' eingegeben wird, das Programm beenden
        if (hex_char == '@') {
            break;
        }

        // Umrechnung der Hex-Ziffer in einen Dezimalwert
        if (hex_char >= '0' && hex_char <= '9') {
            decimal_value = hex_char - '0';  // Umwandlung von '0' bis '9'
            printf("Die Ziffer hat den Wert %d.\n", decimal_value);
        } else if (hex_char >= 'A' && hex_char <= 'F') {
            decimal_value = hex_char - 'A' + 10;  // Umwandlung von 'A' bis 'F'
            printf("Die Ziffer hat den Wert %d.\n", decimal_value);
        } else {
            printf("Die eingegebene Ziffer ist kein Hex-Wert!\n");
        }
    }

    return 0;
}
