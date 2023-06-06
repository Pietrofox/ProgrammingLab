/*Programma che calcola la produttoria di un numero inserito da tastiera*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*PRODUTTORIA*/

int produttoria(int num){
    int prodotto = 1;
    for(int i=1;i<=num;i++)
        //B
        prodotto = prodotto*i;
    num = prodotto;
    return num;
}

int main(void){
    int numero;
    //numero = 3;
    int risultato;
    printf("\n\tInserisci un numero e calcolerò la produttoria: ");
    scanf("%d",&numero);
    //A
    risultato = produttoria(numero);
    printf("\tLa produttoria di %d vale: %d\n",numero,risultato);
    //C
}