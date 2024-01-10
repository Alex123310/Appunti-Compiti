#include "tipi.h"

parteMemoria creaMemoria()
{
    parteMemoria mem;
    int temp,i;
    while (temp < 6000)
    {
        temp = (rand() % 10000);
    }
    mem.dimensione = temp;
    for(i=0;i<6;i++)
    {
        mem.memoria[i] = 0;
    }

    for(mem.occupata = 0; mem.occupata < mem.dimensione)
    {

        for(i=0;i < 6; i++)
        {
            temp = (rand() % 100);
            mem.memoria[i] = mem.memoria[i] + temp;
            mem.occupata = mem.occupata + temp;
        }
    }
    

    return mem;
}
