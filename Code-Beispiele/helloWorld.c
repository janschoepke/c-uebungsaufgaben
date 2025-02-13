#include<stdio.h>
int main(){int b
=0,c;do{printf("Willkommen zum Bankautomaten!\nOptionen:\n1. Kontostand anzeigen\n2. Geld abheben\n3. Geld einzahlen\n4. Beenden\n\nBitte wählen Sie eine Option: "
);scanf("%d"
,&c);switch
(c){case 1
:printf("Ihr Kontostand beträgt %d Euro.\n"
,b);break
;case 2:{printf("Bitte geben Sie den Betrag ein, den Sie abheben möchten: "
);int a;scanf
("%d",&a
);b-=a
;printf("Sie haben %d Euro abgehoben.\n"
,a);printf
("Ihr Kontostand beträgt %d Euro.\n"
,b);}break
;case 3:{printf("Bitte geben Sie den Betrag ein, den Sie einzahlen möchten: "
);int d
;scanf("%d"
,&d);b+=d;printf
("Sie haben %d Euro eingezahlt.\n"
,d);printf
("Ihr Kontostand beträgt %d Euro.\n",b);}break;case 4:printf("Auf Wiedersehen!\n"
);break
;default:printf("Ungültige Option.\n"
);}}while
(c!=4
);return 0;}


