int main() {
    const int antwortAufAlles = 42;
    //führt zu Compiler-Fehler, nur lesender Zugriff auf Konstanten erlaubt.
    antwortAufAlles = 43;
}
