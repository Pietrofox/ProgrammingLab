/*questo programma serve a creare una funzione void (che non returna nulla) che serva a leggere un array conoscendo in precedenza la dimensione dell'array(dim)*/
#include<stdio.h>
void lettura(int v[], int dim)
{
    int i=0;
    
    /*ciclo sugli elementi dell'array*/

    for(i=0;i<dim;i++){
        scanf("%d",&v[i]);
    }
}