/*
    funzione per calcolare la somma degli elementi di un array.
    Argomenti:
        v:Array di interi
        dim:dimensione dell'array(numero di elementi al suo interno)
    Output:
        int:Somma degli elementi di v
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int v;
int dim;

int somma(int v[], int dim);

int main(){
    printf("inserisci il numero di valori che vorrai inserire");
    scanf("%d", &dim);

    
}


int somma(int v[], int dim){
    int tot=0;               //variabile per memorizzare la somma degli elementi
    int i=0;
    for(i=0; i<dim; i++){    //ciclo sugli elementi dell'array
        tot=tot+v[i];        //incremento tot
    }
    return tot;
}