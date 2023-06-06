/*Programma che calcola l'area di un triangolo conoscendo a priori base 
 e altezza*/
#include<stdio.h>
int main(void){
    int base, altezza;
    float area;

    base = 10;
    altezza = 34;

    printf("base del triangolo vale %d\n", base);
    printf("altezza del triangolo vale %d\n", altezza);

    area=(base * altezza)/2;
    printf("area del triangolo vale %f\n", area);

    return 0;
}
