//(Ricerca Con Flag), cercare un elemeto e restituire un bool (1 o 0) in caso di presenza o assenza.(molto costoso in termini di tempo, meglio evitare)

/*dato (a) di dimensione (dim) ed (x) verifica se (x) è o meno un elemento di (a)*/

int member(int a[], int dim, int x){
    //scandisco tutto (a)
    for(int i=0;i<dim;i++){
        //non appena trovo x, ritorno 1
        if (a[i]==x)
            return 1;
    }
    //se arrivo qui vuol dire che x non c'è e quindi ritorno 0
    return 0;
}