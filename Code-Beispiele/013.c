#include <stdio.h>

int main() {
    int anzahlSpieler = 4;
    int aktuellerSpieler = 0; // 0 bis 3

    //nächsten Spieler bestimmen
    aktuellerSpieler = (aktuellerSpieler + 1) % anzahlSpieler;

    //Alternative:
    aktuellerSpieler++;
    aktuellerSpieler %= anzahlSpieler;
}
