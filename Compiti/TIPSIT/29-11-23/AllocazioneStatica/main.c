#include <stdio.h>
#include <stdlib.h>
#include "prototipi.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
parteMemoria mem = creaMemoria();
int i;

for(i=0;i<6;i++)
{
    printf("%d",mem.memoria[i]);
}
return 0;
}
