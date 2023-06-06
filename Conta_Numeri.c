/*Programma che sommma le cifre di un numero inserito da tastiera*/
#include<stdio.h>

int main(void)
{
    unsigned long int x;
    int totale;

    printf("inserisci un numero e sommerò le sue cifre...\n");
    scanf("%lu",&x);
    totale=0;
    while(x!=0)
    {
        totale+=(x%10);
        x=x/10;
    }
    printf("la somma dell cifre vale: %d\n",totale);
    return 0;
}
    