#include <stdio.h>
#include <string.h>

struct adresse {
  char strasse[25];
  int hausnummer;
  int plz;
  char stadt[25];
};

struct student {
  int matrikelnr;
  char name[20];
  char nachname[20];
  struct adresse wohnort;
};

void printAdresse(struct adresse a){
  printf("%s %i\n%i %s\n\n", a.strasse, a.hausnummer, a.plz, a.stadt);
}

void printStudentExtended(struct student a){
  printf("%s, %s (%d)\n", a.nachname, a.name, a.matrikelnr);
  printAdresse(a.wohnort);
}

void printStudent(struct student a){
  printf("%s, %s (%d) aus %s\n", a.nachname, a.name, a.matrikelnr, a.wohnort.stadt);
}

int main() {
    struct adresse privatAdresse;
    strcpy(privatAdresse.strasse, "Teststrasse");
    privatAdresse.hausnummer = 3;
    privatAdresse.plz = 12345;
    strcpy(privatAdresse.stadt, "Testort");

    struct student student;
    student.matrikelnr = 12345678;
    strcpy(student.name, "Jan");
    strcpy(student.nachname, "Schoepke");
    student.wohnort = privatAdresse;

    printStudentExtended(student);
    return 0;
}
