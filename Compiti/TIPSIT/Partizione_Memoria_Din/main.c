#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "costanti.h"
#include "tipi.h"
#include "prototipi.h"

int main()
{
int scelta;
Partizione part[MAXDIM];
//DIMENSIONE PROCESSO
int DimensioneProesso;
 //NUMERO DELLA PARTIZIONE DA MOSTRARE A SCHERMO
int NumeroPartizione;

//PROCEDURA CREA LA TABELLA DELLA PARTIZIONE
CreatePartition(part);

//PROCEDURA STAMPA A SCHERMO LA TABELLA DELLA PARTIZIONE CREATA
printf("Tabella partizioni iniziale:\n");
VisualizzaPartizione(part);
do
{
	
	printf("Premi 1 per allocare 0 per uscire: ");
	scanf("%d",&scelta);
	if(scelta == 1)
	{
				//INSERISCI DIMENSIONE DEL PROCESSO DA INSERIRE
		printf("\nInserisci dimensione del processo: ");
		scanf("%d", &DimensioneProesso);
		
		//FUNZIONE CHE ALLOCA IL PROCESSO SE DISPONIBILE UNA CELLA DI MEMORIA ADEGUATA
		NumeroPartizione = Alloca_Processo(part, DimensioneProesso);
		
		//STAMPA LA TABELLA DELLA PARTIZIONE AGGIORNANDO IL CAMPO "OCCUPATO"
		printf("\nTabella delle partizioni dopo l'allocazione del processo:\n");
		if (NumeroPartizione != -1) 
		{
		    printf("N. partizione occupata: %d\n", NumeroPartizione);
		} 
		else 
		{
		    printf("Nessuna partizione libera disponibile.\n");
		}
		VisualizzaPartizione(part);
	}

}while(scelta != 0);

return 0;
}


