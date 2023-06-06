#include <stdio.h>
#include <stdlib.h>

int main(void)
{    
    int i,n,x, tentativi=0;
    srand( time (NULL) ); /* cambia il seme in base al tempo */ 
    n=1+(rand() %10);  /* genera un numero casuale compreso tra 1 e 10 */
    printf("Indovina un numero tra 1 e 10, hai tre tentativi\n");
    while(tentativi<3) {
        printf("Inserisci un numero: ");
        scanf("%d", &x);
        if (x>n) 	
          if(tentativi!=2)
              printf("Inserisci un numero piu' piccolo\n");
          else printf("Hai perso, il numero da indovinare era %d\n" , n );
            	
       else if (x<n) 
            if(tentativi!=2)
                printf("Inserisci un numero piu' grande\n");
            else printf("Hai perso, il numero da indovinare era %d\n" , n );
       else {
            printf("Hai vinto\n" );
            break;           
        }
        tentativi=tentativi+1;
    }

    return 0;
}