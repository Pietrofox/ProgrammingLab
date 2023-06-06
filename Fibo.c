//sequenza di fibonacci

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int n,a=0,b=1,c;
    printf("inserisci il limite di valori: \t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }

    
    return 0;
}