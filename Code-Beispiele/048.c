#include <stdio.h>
#include <string.h>

struct adresse {
  char strasse[25];
  int hausnummer;
  int plz;
  char stadt[25];
} studiumPlusBie = {"Hainstrasse", 103,
    35216, "Biedenkopf"};

void printAdresse(struct adresse a){
  printf("%s %i\n%i %s\n\n", a.strasse, a.hausnummer, a.plz, a.stadt);
}

int main() {
    struct adresse studiumPlusWe;
    strcpy(studiumPlusWe.strasse, "Charlotte-Bamberg-Str.");
    studiumPlusWe.hausnummer = 3;
    studiumPlusWe.plz = 35578;
    strcpy(studiumPlusWe.stadt, "Wetzlar");

    printAdresse(studiumPlusBie);
    printAdresse(studiumPlusWe);

    studiumPlusWe = studiumPlusBie;
    printf("\n\n");

    printAdresse(studiumPlusBie);
    printAdresse(studiumPlusWe);
    return 0;
}
