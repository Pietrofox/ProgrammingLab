//stampa un rettangolo di asterischi di dimensione inserita da tastiera

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int base, altezza, i,j;

    printf("\t\nquale vuoi sia la base del rettangolo?\n\t");
    scanf("%d",&base);

    printf("\n\tquale vuoi sia l'altezza del rettangolo?\n\t");
    scanf("%d",&altezza);

    for(j=0;j<altezza;j++){
        for(i=1;i<=base;i++){
        printf("*");
        }
        printf("\n");
    }
}
    