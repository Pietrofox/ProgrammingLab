/*Algoritmo di ricerca con flag e while*/

/*esempio 6.10*/

//possiamo iterare finche non troviamo x, stavolta con flag

int member(int a[], int dim, int x)
{
    int i=0;
    int trovato=0; //flag: 0=non trovato

    /*//scandisco tutto a (al massimo)
    while(i<dim&& !trovato)
        {
            //cambio status del flag
            if (a[i]==x) trovato =1;
            i++;
        }
    //il valore di trovato mi dice tutto
    if (trovato) return 1;
    else return 0;*/
    
    //scandisco tutto a (al massimo)
    while(i<dim&& !trovato)
        {
            //cambio status del flag
            if (a[i]==x) trovato =1;
            i++;
        }
    return trovato;//in questo modo il porogramma mi retuna il valore trovato
    
//si può implementare con l'arirmetica dei puntatori:
/*
int memeber(int * a, int dim, int x)
{
    int trovato=0; //flag (0=non trovato)
    
    //non come sopra
    while(dim >= 0 && !trovato)
    {
        if (*(a+i) == x) trovato = 1;
        dim--;
    }

    return trovato;
}
*/

}