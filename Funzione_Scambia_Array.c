//Scambiare valore su array

/*dato un array v di dimensione dim e due indici i e j, scambia il valore di v[i] con quello di v[j]. sfruutand l'aritmetica dei puntatori*/

void scambia(int *v, int dim, int i, int j)
{
    /*sanity check sulla possibilità di effettuare lo scambio*/

    if(i<dim && j<dim && i>0 && j>0)
    {
        int tmp = *(v+i); //v[i]
        *(v+i)=*(v+j);//v[i]=v[j]
        *(v+j)=tmp;//v[j]=tmp
    }
}