/*Programma che legge e risolve un equazione di primo grado*/
#include<stdio.h>
#include<math.h>

int main(void){
    double a,b;
    double x;

    printf("inserire i termini noti dell'equazione (a e b) di ax+b=0\n");
    printf("\ta=\t");
    scanf("%lf",&a);
    printf("\tb=\t");
    scanf("%lf",&b);
    x=((-b)/a);
    printf("la x vale: %lf\n",x);
    
}