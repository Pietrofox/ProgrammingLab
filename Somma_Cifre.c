/*Programma che somma le cifre di un numero inserite da tastiera*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(void)
{
    unsigned long int x;
    int totale;

    printf("Inserisci un numero e sommerò le cifre...");
    scanf("%lu",&x);
    totale=0;
    while(x != 0){
        totale += x % 10; //totale=totale+(x%10)
        x=x/10;
    }

    printf("somma delle cifre: %d \n", totale);
    return 0;
}