//algoritmo di ricerca con while

/*Possiamo iterare fino a che non troviamo x, e gestire il caso in cui non lo si trovi mai*/

int member(int a[], int dim, int x)
{
    int i=0;

    //scandisco tutto a, al massimo 
    while(i<dim && a[i] != x) i++;

    //il valore di i mi dice tutto
    if(i==dim) return 1;//bool
    else return 0;
    
}