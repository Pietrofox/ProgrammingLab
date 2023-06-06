/*Funzione che scambia due valori nelle rispetttive variabili*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void scambia(int *p,int *q)
{
    /*int tmp=p;
    tmp=p;
    p=q;
    q=tmp;*/
    int tmp=*p;
    *p=*q;
    *q=tmp;

    
}

int main()
{
    /*int x=5;
    int y=1;*/
    int x,y;
    printf("Inserisci il valore di X: ");
    scanf("%d", &x);
    printf("Inserisci il valoe di Y:");
    scanf("%d", &y);
    
    


    scambia(&x, &y);
    printf("x vale:%d\n", x);
    printf("y vale:%d\n", y);
}