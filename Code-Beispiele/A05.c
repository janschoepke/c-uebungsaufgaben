#include <stdio.h>

/**
 *
 * Aufgabe Umrechner:
 * Schreiben Sie ein Programm, welches eine Zahl im Dezimalsystem (zur Basis 10)
 * annimmt, folgende Ausgabe erzeugt:
 * Eingegebener Wert im Dezimalsystem: <wert>(10)
 * Eingegebener Wert im Hexadezimalsystem: <wert>(16)
 * Eingegebener Wert im Oktalsystem: <wert>(8)
 */
int main() {
    int dezimal;

    // Eingabe der Zahl im Dezimalsystem
    printf("Bitte geben Sie eine Zahl im Dezimalsystem ein: ");
    scanf("%d", &dezimal);

    // Ausgabe im Dezimal-, Hexadezimal- und Oktalsystem
    printf("Eingegebener Wert im Dezimalsystem: %d(10)\n", dezimal);
    printf("Eingegebener Wert im Hexadezimalsystem: %X(16)\n", dezimal);
    printf("Eingegebener Wert im Oktalsystem: %o(8)\n", dezimal);

    return 0;
}
