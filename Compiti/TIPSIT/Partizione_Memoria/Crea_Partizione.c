#include <time.h>
#include "costanti.h"
#include "tipi.h"

void CreatePartition(Partizione part[]) 
{
	int i;
// Inizializza il generatore di numeri casuali con il timestamp attuale
	srand((int)time(NULL));

// Inizializza la tabella delle partizioni con dimensioni casuali
	part[0].IndBase = 0;
	part[0].Dim = rand() % 10 + 5;  // Dimensione casuale tra 5 e 14 
	part[0].Occ = 0;

	for (i = 1; i < MAXDIM; i++) 
	{
    	part[i].Dim = rand() % 10 + 5;  // Dimensione casuale tra 5 e 14 inclusi
    	part[i].IndBase = part[i - 1].IndBase + part[i - 1].Dim * 1024;
    	part[i].Occ = 0;
	}

return;
}
