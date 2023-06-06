//check se un numero inserito è palindromo

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int n,r, tmp;
    int sum=0;

    printf("inserisci il numero:\n");
    scanf("%d",&n);

    tmp=n;//memorizzo il numero nella variabile tmp

    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=tmp;//rimemorizzo n al valore iniziale per non perderlo

    if(n==sum){
        printf("\tIl numero è palindromo\n");
    }
    else
        printf("\til numero non è palindromo\n");
    return 0;
}