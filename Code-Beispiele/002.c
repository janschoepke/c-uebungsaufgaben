#include <stdio.h>

int main(void) {
    //Deklaration und Definition von zwei Variablen gleichen Typs (int, Ganzzahlen)
    int a;
    int b;
    int c;

    a = 1;

    b = 3;

    //Durchführung der Addition in Variable c
    //Deklaration, Definition und Initialisierung einer Variablen "in einem Zug"
    c = a + b;

    //Ausgabe der Berechnung und des Ergebnisses
    printf("%i plus %i gleich %i\n", a, b, c);
}
