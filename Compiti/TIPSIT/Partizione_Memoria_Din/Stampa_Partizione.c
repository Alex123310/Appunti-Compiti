#include <stdio.h>
#include <stdlib.h>
#include "costanti.h"
#include "tipi.h"

void VisualizzaPartizione(Partizione part[]) 
{
	int i;
	
	printf("N. Partizione\tInd. Base\tDimensione\tOccupata\n");
	for (i = 0; i < MAXDIM; i++) 
	{
    	printf("%d\t\t%d\t\t%d\t\t", i, part[i].IndBase, part[i].Dim);
    	if(part[i].Occ == 1)
    	{
    		printf("%c\n",10003);
		}
		else
		{
			printf("X\n");
		}
	}

return;
}
