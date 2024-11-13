# Aufgabe 3: Geburtstagskalender Light

Erforderliche Kenntnisse: Eingabe und formatierte Ausgabe von Zeichen und Ziffern

Schreiben Sie ein Programm, welches nacheinander den Geburtstag, den Geburtsmonat und das Geburtsjahr des Benutzers abfragt. Das Programm soll im Anschluss eine Ausgabe in Form von folgender Formatierung erzeugen.

## Beispielausgabe

```clike
Bitte geben Sie Ihren Geburtstag ein: 11
Bitte geben Sie Ihren Geburtsmonat ein: 7
Bitte geben Sie Ihr Geburtsjahr ein: 1961

Ihr Geburtstag: 11.7.1961
```

## Hinweise zur Implementierung

+ Hinweis 1 +

  Hier haben wir im Bereich des Tags und des Monats das gleiche Problem. Gibt der Nutzer als Monat beispielsweise "07" ein, so wird standardmäßig in der Ausgabe "7" erfolgen. Hier können wir in der Ausgabe jedoch durch die Angabe von Formatierungsdefinitionen festlegen, dass der Tag und der Monat zwangsläufig zweistellig ausgegeben wird. 

+ Hinweis 2 +

  Durch die Formatierung "%02d" in der printf-Funktion wird eine Ganzzahl (%d) mit zwei Stellen (2) ausgegeben, während die nicht vorhandenen Stellen mit Nullen (0) aufgefüllt werden.  