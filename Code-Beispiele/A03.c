#include <stdio.h>

/**
* Aufgabe: Geburtstagskalender Light
* Schreiben Sie ein Programm, welches nacheinander den Geburtstag,
* den Geburtsmonat und das Geburtsjahr des
* Benutzers abfragt. Das Programm soll im Anschluss
* eine Ausgabe in Form von Ihr Geburtstag: <tag>.<monat>.<jahr> erzeugen.
*/
int main() {
    int tag, monat, jahr;

    // Benutzer nach dem Geburtstag fragen
    printf("Bitte geben Sie Ihren Geburtstag (Tag) ein: ");
    scanf("%d", &tag);

    // Benutzer nach dem Geburtsmonat fragen
    printf("Bitte geben Sie Ihren Geburtsmonat ein: ");
    scanf("%d", &monat);

    // Benutzer nach dem Geburtsjahr fragen
    printf("Bitte geben Sie Ihr Geburtsjahr ein: ");
    scanf("%d", &jahr);

    // Geburtstag im gewünschten Format ausgeben
    printf("Ihr Geburtstag: %02d.%02d.%d\n", tag, monat, jahr);

    return 0;
}
