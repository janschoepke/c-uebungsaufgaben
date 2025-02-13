#include <stdio.h>
#include <string.h>

struct adresse {
  char strasse[25];
  int hausnummer;
  int plz;
  char stadt[25];
};

void printAdresse(struct adresse a){
  printf("%s %i\n%i %s\n", a.strasse, a.hausnummer, a.plz, a.stadt);
}

int main() {
    struct adresse studiumPlus;
    strcpy(studiumPlus.strasse, "Hainstrasse");
    studiumPlus.hausnummer = 103;
    studiumPlus.plz = 35216;
    strcpy(studiumPlus.stadt, "Biedenkopf");

    printAdresse(studiumPlus);
    return 0;
}


