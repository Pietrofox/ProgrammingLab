/*programma che fa il fattoriale (in modo ricorsivo)*/

#include <stdio.h>
#include <stdlib.h>

int fact_rec(int n)
{
    if (n<=1)
        //caso base della ricorsione
        return 1;
    else
        //chiamata ricorsiva
        return n*fact_rec(n-1);    
}

int main ()
{
    int n;
    printf("inserisci il numero di cui vuoi il fattoriale(<=10)\n");
    scanf("%d", &n);
    if (n<=10)
        printf("il fattoriale di n vale %d\n", fact_rec(n));
    else
        printf("error n troppo grande");
    
    return n;
}