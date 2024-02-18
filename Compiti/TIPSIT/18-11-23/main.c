#include <stdio.h>
#include <stdlib.h>
#define MAXDIM 100
int main()
{
    /*Scrivere un programma che dopo aver riempito in modo casuale di 0 e 1 una matrice quadrata di ordine n,
     * inserisca nell'ennesima riga 0 o 1 a seconda che il numero di 1 presenti nella
     * i-esima colonna sia pari o dispari.*/
    //srand();
    int m[MAXDIM][MAXDIM];
    int n,i,j,sum;

    do
    {
        printf("Inserisci Grandezza Matrice:");
        scanf("%d",&n);
    }while(n<=0 || n>= MAXDIM);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; ++j)
        {
            m[i][j]=(rand()%2);
            printf("%d ",m[i][j]);
            sum=m[i][j]+sum;
        }
        m[i][n+1]=sum%2;
        printf("COLONNA n%d=%d\n",i+1,m[i][n+1]);
    }

    return 0;
}
