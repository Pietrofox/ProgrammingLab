/*Programma che calcola l'area di un triangolo con base e altezza inserite da tastiera*/

#include<stdio.h>

int main(void){

    float base, altezza;//questi dati devono essere float altrimenti convertonoin intero se li metto int il risultato dell'area che essendo un triangolo può sempre uscire float(con lo 0.5 di differenza)
    float area;

    printf("inserire valore base: ");
    scanf ("%f", &base);
    printf("inserire valore altezza: ");
    scanf("%f", &altezza);

    printf("base del triangolo: %f\n", base);
    printf("altezza del triangolo: %f\n", altezza);

    area = (base * altezza) / 2;
    printf("Area del triangolo; %f\n", area);

    return 0;
}
