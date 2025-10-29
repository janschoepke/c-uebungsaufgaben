#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    printf("Fahrenheit\t\tCelsius\n");
    printf("-------------------------------\n");

    // Schleife für die Fahrenheit-Werte in Schritten von 20
    for (fahrenheit = 0; fahrenheit <= 200; fahrenheit += 20) {
        // Berechnung der Celsius-Werte mit double
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        // Ausgabe der Werte als Ganzzahlen (int) nach der Berechnung
        printf("%d\t\t\t%d\n", (int)fahrenheit, (int)celsius);
    }

    return 0;
}