//Algortimo di Euclide


#include<stdio.h>

int main(){
    int NumeroMaggiore, Numerominore, Resto;

    NumeroMaggiore=-1;
    while(NumeroMaggiore<=0){
        printf("\n Inserisci il numero maggiore:\n");
        scanf("%d",&NumeroMaggiore);
    }
    Numerominore=-1;
    while(Numerominore<=0||Numerominore>NumeroMaggiore){  //"||" = or logico
        printf("\n Inserisci il secondo numero(minore del primo): \n");
        scanf("%d",&Numerominore);
    }


    while(NumeroMaggiore%Numerominore != 0){
        Resto=NumeroMaggiore%Numerominore;
        NumeroMaggiore=Numerominore;
        Numerominore=Resto;
    }
    printf("\nL'MCD vale: %d\n", Numerominore);

    return 0;
}