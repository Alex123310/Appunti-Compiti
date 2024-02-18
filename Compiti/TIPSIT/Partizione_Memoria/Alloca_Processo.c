#include "costanti.h"
#include "tipi.h"

int Alloca_Processo(Partizione part[], int DimensioneProesso) 
{
	int i;
	
	for (i = 0; i < MAXDIM; i++) 
	{
    	if (part[i].Occ == 0 && part[i].Dim >= DimensioneProesso)
		{
    	    // LA PARTIZIONE E' LIBERA E ABBASTANZA GRANDE PER CONTENERE IL PROCESSO
        	part[i].Occ = 1;
        	return i; //RITORNA LA i NEL NOME DELLA FUNZIONE
    	}
	}

return -1; //RITORNA -1 NEL NOME DELLA FUNZIONE
}
