//creare uyna funzione (es. prodotto....)

#include<stdio.h>
#include<stdlib.h>


/*creiamo per prima cosa il main*/


/*dopo aver fatto il main scrivo qua sopra la funzione che devo fare, tipo di dato, nome funzione, paramentri in entrata. Si chiama PROTOTIPO della Funzione*/
int Moltiplicazione(int a, int b);//importante il punto e virgola qua dopo il prototipo

int main(){
    int num1=0;//due variabili inizialiizate a zero
    int num2=0;
    int prodotto=0;//una variabile xhe serve a visualizzare il risultato inizializzata a zero

    //prendo in input i due numeri da moltiplicare
    printf("digita primo numero:");
    scanf("%d", &num1);

      printf("digita secondo numero:");
    scanf("%d", &num2);

    /*ora riporto qua dentro la funzione Moltiplicazione definita prima(ma che risulta dopo)*/
    prodotto = Moltiplicazione(num1,num2);//salvo la funzione all'interno della variabile prodotto creata all'inizio

    printf("prodotto=%d", prodotto);

    
    return 0;
}

/*copio il prototipo e sviluppo la fuznzione*/
int Moltiplicazione(int a, int b)//senza il ;  ...
{
    int totale=0; //variabile dichiarata che serve a contenere il valore del prodotto

    totale= a*b;

    return totale;//serve a restituire al main il prodotto di a e b
}