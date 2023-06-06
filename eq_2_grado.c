//eq. di secondo grado ax^2+bx+c=0 con a, b, c inseriti dall'utente

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
    double a,b,c;
    double delta;
    double x_neg;
    double x_pos;
    int risposta=1;

    /*printf("\tinserisci il valore di a (ax^2)\n\ta=");
    scanf("%lg",&a);
    printf("\tinserisci il valore di b (bx)\n\ta=");
    scanf("%lg",&b);
    printf("\tinserisci il valore di c (c)\n\tc=");
    scanf("%lg",&c);*/


    while(risposta==1){
        printf("\tinserisci il valore di a (ax^2)\n\ta=");
    scanf("%lg",&a);
    printf("\tinserisci il valore di b (bx)\n\tb=");
    scanf("%lg",&b);
    printf("\tinserisci il valore di c (c)\n\tc=");
    scanf("%lg",&c);

    printf("\tl'equazione risulta essere (%lg)x^2+(%lg)x+(%lg)=0, è corretto?\n",a,b,c);
    printf("\t0=si, 1=no\n\t");
    scanf("%d",&risposta);
        
    }

    printf("\n\n\tCalcolo la x...\n\n");
    delta=sqrt((b*b)-(4)*(a*c));
    printf("\n\tIl delta esce: %.2f\n",delta);

    printf("\n\tCalcolo finale della x:\n");
    x_neg=((-b)-delta)/(2*a);
    x_pos=((-b)+delta)/(2*a);

    printf("\n\t La x vale: %.2f e %.2f\n",x_neg,x_pos);
    
}