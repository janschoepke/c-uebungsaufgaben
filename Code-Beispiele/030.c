#include <stdio.h>

int main() {
    char str[15];

    //Eingabe Möglichkeit 1: gets (liest bis Zeilenende). Kann unsicher sein, da sie Überlauf produzieren kann.
    //Parameter: Variable, in die geschrieben werden soll.
    gets(str);
    puts(str);

    //Eingabe Möglichkeit 2: fgets (liest bis Zeilenende). Verhindert Überlauf.
    //Parameter: Variable, in die geschrieben werden soll. Anzahl der Zeichen. Lese-Quelle.
    fgets(str, 15, stdin);
    puts(str);

    //Eingabe Möglichkeit 3: scanf (trennt bei Leerzeichen/Zeilenende). Kann unsicher sein, da sie Überlauf produzieren kann.
    //Parameter: Maximale Anzahl der Zeichen ohne \n in Format. Variable, in die geschrieben werden soll.
    scanf("%14s", str);
    puts(str);

    //Eingabe Möglichkeit 4: scanf_s (trennt bei Leerzeichen/Zeilenende). Verhindert Überlauf.
    //Parameter: Maximale Anzahl der Zeichen ohne \n in Format. Variable, in die geschrieben werden soll. Maximale Anzahl der Zeichen.
    //scanf_s("%14s", str, 15);
    //puts(str);

    return 0;
}
