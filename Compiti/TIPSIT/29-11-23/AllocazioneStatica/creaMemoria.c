<<<<<<< HEAD
<<<<<<< HEAD
//64k 5k 10k
#include "tipi.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int MemoriaDisponibile=64000;

int nPartizioni;
nPartizioni = (rand() % 6) + 5;

parteMemoria Memoria[];
Memoria = malloc(sizeof(int) * nPartizioni);
do
=======
#include "tipi.h"

parteMemoria creaMemoria()
>>>>>>> e0878c3f09ff7c40168d84e69cb2a13cdc81c40b
{
<<<<<<< HEAD

}while(MemoriaDisponinible < 0)

<<<<<<< HEAD
=======
    mem[1].nPartizione=1;
    mem[1].indBase=7168;
    mem[1].dimensione=9;
    mem[1].occupata=0;

    mem[2].nPartizione=2;
    mem[2].indBase=16384;
    mem[2].dimensione=7;
    mem[2].occupata=0;

    mem[3].nPartizione=3;
    mem[3].indBase=23552;
    mem[3].dimensione=7;
    mem[3].occupata=0;

    mem[4].nPartizione=4;
    mem[4].indBase=30720;
    mem[4].dimensione=10;
    mem[4].occupata=0;

    mem[5].nPartizione=5;
    mem[5].indBase=40960;
    mem[5].dimensione=9;
    mem[5].occupata=0;

    mem[6].nPartizione=6;
    mem[6].indBase=50176;
    mem[6].dimensione=7;
    mem[6].occupata=0;

    mem[7].nPartizione=7;
    mem[7].indBase=57344;
    mem[7].dimensione=8;
    mem[7].occupata=0;
=======
=======
#include "tipi.h"

parteMemoria creaMemoria()
{
>>>>>>> 32a9237b626fdad21396b0a537662e1a96100b1d
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
<<<<<<< HEAD
>>>>>>> 32a9237b626fdad21396b0a537662e1a96100b1d
=======
>>>>>>> 32a9237b626fdad21396b0a537662e1a96100b1d
    

    return mem;
}
<<<<<<< HEAD
>>>>>>> e0878c3f09ff7c40168d84e69cb2a13cdc81c40b
=======
>>>>>>> 32a9237b626fdad21396b0a537662e1a96100b1d
