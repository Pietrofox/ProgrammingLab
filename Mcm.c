//Mcm con valore di ritorno

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,m;
    int trovato;
    int prodotto;
    int cont;

    printf("\n\tInserisci il valore di n: ");
    scanf("%d",&n);
    printf("\n\tInserisci il valore di m: ");
    scanf("%d",&m);

    trovato=0; //variabile bool che indica se trovo o meno un possibile mcm
    prodotto=n*m;
    if(n>m){
        cont= n;
    }
    else{
        cont=m;
    }

    while (cont <prodotto && trovato == 0) // il while con due condizioni si indica con &&(and logico) 
    {
        if(cont % n == 0 && cont % m == 0) //stessa cosa l'if
        {
            trovato=1;//cambio la variabile che indica se trovo o meno un mcm, in questo modo escodal while finito l'if
        }
        else{
            cont = cont + 1;
        }
    }

    printf("l'mcm di (%d,%d)=%d",n,m, cont); //stampo le variabili e il risultato

    
    return 0;
}