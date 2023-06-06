/*Programma che somma i numeri contenuti in un array inserito da tastiera*/
#include <stdio.h>
int main()
{
    printf("inserisci il numero degli elementi che vuoi sommare(la lunghezza dell'array)\n");
    int n;
    scanf("%d", &n);
    
    int a[n];
    

    int tot=0;//variabile per memorizzare la somma
    //numero di elementi dell'array, in questo caso si può omettere perchè è un array di dimensione già prestabilita all'inizio

    //chiedo in input gli elementi dell'array

    printf("inserisci %d elementi\n", n);

    for(int i=0;i<n;i++)

        scanf("%d", &a[i]);
    
    //calcolo somma totale degli elementi

    for(int i=0;i<n;i++)
        tot=tot+a[i];

    //stampo il risultato

    printf("Somma totale elementi array: %d\n", tot);

    return 0;
}