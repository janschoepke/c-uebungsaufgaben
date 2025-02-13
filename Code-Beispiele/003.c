#include <stdio.h>

int main() {
    //Deklaration und Definition von zwei Variablen gleichen Typs (int, Ganzzahlen)
    int a, b;

    printf("Bitte geben Sie zwei Ganzzahlen ein. \n");

    //Einlesen der ersten Zahl in die Variable a
    scanf("%i", &a);
    //Einlesen der zweiten Zahl in die Variable b
    scanf("%i", &b);

    //Durchführung der Addition in Variable c
    //Deklaration, Definition und Initialisierung einer Variablen "in einem Zug"
    int c = a + b;

    //Ausgabe der Berechnung und des Ergebnisses
    printf("Das Ergebnis ist %i\n", c);
}
