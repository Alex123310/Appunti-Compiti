#include parteMemoria
parteMemoria creaMemoria()
{
    parteMemoria mem[8];
   

    mem[0].nPartizione=0;
    mem[0].indBase=0;
    mem[0].dimensione=7;
    mem[0].occupata=0;

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
}