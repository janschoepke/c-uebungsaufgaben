#include <stdio.h>

int main() {
    float f = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825f;
    double g = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825;
    long double h = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825;

    double g1 = 93993751058209749445923078164062862083.14159265358979323846264338327950288419716;
    long double h1 = 93993751058209749445923078164062862083.14159265358979323846264338327950288419716;


    //Frage: Wie viel Speicherplatz wird benötigt?
    printf("Groesse von float:                  %i byte[s]\n", sizeof(f));
    printf("Groesse von double:                 %i byte[s]\n", sizeof(g1));
    printf("Groesse von long double:            %i byte[s]\n", sizeof(h1));

    //Frage: Welche Genauigkeitsunterschiede gibt es?
    printf("Wert von 'f': %.40f\n", f);
    printf("Wert von 'g': %.100f\n", g1);
    printf("Wert von 'h': %.100f\n", h1);
}
