//programma che calcola lo sconto inserito da tastiera di un capo il cui prezzo è inserito da tastiera

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    double prezzo;
    int percentuale_sconto;
    double sconto;
    double prezzo_finale;

    printf("\nInserisci i dati: \n");
    printf("\nPrezzo:\t");
    scanf("%lf",&prezzo);

    printf("\nSconto:\t");
    scanf("%d",&percentuale_sconto);
    
    sconto=(prezzo/100.)*percentuale_sconto;

    prezzo_finale=prezzo-sconto;

    printf("\n\nCartellino:\n");
    printf("\nPrezzo: \t%.2lf euro",prezzo);
    printf("\nSconto applicato: \t%d%%",percentuale_sconto);
    printf("\nPrezzo finale: \t%.2lf euro\n",prezzo_finale);

    return 0;
    
}