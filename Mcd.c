/*MCD con valore di ritorno*/
#include<stdio.h>
#include<stdlib.h>

int mcd(int p, int s)
{
    while (p!=s)
    {   
        if (p>s)
            p=p-s;
        else
            s=s-p;
            
        }
    /*ritorno di un intero che contiene il McD*/
    return p; // oppure return s, essendo uguali per costruzione;
}
/*utilizzo di questa funzione in un main*/

int main(void)
{
    int x;
    int y;

    printf("inserisci il primo numero: x=?\n");
    scanf("%d",&x);

    printf("inserisci il secondo numero: y=?\n");
    scanf("%d",&y);

    /*dichiaro una variabile che contiene il MCD*/
    int z = mcd(x,y); //esecuzione della funzione per valori di e y
    printf ("Il massimo comune denominatore vale %d\n", z);
}