//genera una sequenza di numeri conoscendo il primo numero e il valore dei numeri che si vogliono visualizzare a schermo

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

    int n;
    int seq_num=0;
    int i=0;

    printf("\n\tinserisci l'inizio: \t");
    scanf("%d",&n);

    while(seq_num<=0){
        printf("\n\tquanto lo vuoi lungo: \t");
        scanf("%d",&seq_num);
    }
        printf("\n\tla serie è:");

    for(i=0;i<seq_num;i++){
        printf("\t%d",n);
        n++;
    }
    printf("\n");

    return 0;
    
}