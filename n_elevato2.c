/*elevare una n(numero intero inserito da tasiera) ad un esponente(prefissato, in questo caso 2), il risulttao è inizializzato a 1 perchè è l'elemento neutro del prodotto*/

#include <stdio.h>
#include <stdlib.h>

int base;
int esponente;
int risultato;
int i;
int main(void){
    printf("inserisci il numero di cui vuoi il quadrato");
    scanf("%d", &base);
    
    esponente=2;
    risultato=1;
    
    for(i=1;i<esponente;i++)
        risultato=risultato*base;
    printf("%d", risultato);
    
}
