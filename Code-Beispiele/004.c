#include <stdio.h>

int main() {
    char a = 'a';
    short k = 13;
    int i = 42;
    long j = 2000000000;
    unsigned int n = 4000000000u;

    //Frage: Wie viel Speicherplatz wird benötigt?
    printf("Groesse von char:           %i byte[s]\n", sizeof(a));
    printf("Groesse von short:          %i byte[s]\n", sizeof(k));
    printf("Groesse von int:            %i byte[s]\n", sizeof(i));
    printf("Groesse von long:           %i byte[s]\n", sizeof(j));
    printf("Groesse von unsigned int:   %i byte[s]\n", sizeof(n));
}
