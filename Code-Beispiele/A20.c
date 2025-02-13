#include <stdio.h>

double berechne_zinsen(double betrag, double zinssatz) {
    return betrag * zinssatz;
}

int main() {
    double sparkonto_guthaben = 5023.7;
    double girokonto_guthaben = 823.2;
    double sparbrief_guthaben = 10000.0;

    printf("Zinsen fuer Sparkonto: %.2f\n", berechne_zinsen(sparkonto_guthaben, 0.03));
    printf("Zinsen fuer Girokonto: %.2f\n", berechne_zinsen(girokonto_guthaben, 0.015));
    printf("Zinsen fuer Sparbrief: %.2f\n", berechne_zinsen(sparbrief_guthaben, 0.08));

    return 0;
}
