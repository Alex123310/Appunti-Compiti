#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
	int i,n,pp,kp,kd,sum;
	int* v;
	float md;
	pp=0;
	kp=0;
	kd=0;
	md=0;
	
	do
	{
		scanf("%d",&n);
	}
	while(n < 2)
		v =  (int*) malloc(n * sizeof(int));
	if( v != NULL)
	{
		for(i=0;i < n;i++)
		{
			do
			{
				scanf("%d",*(v+i) );
			}
			while( *(v+i) < 0);
			
			if( ( (*(v+i)) % 2) == 0)
			{
				kp++;
				pp = pp * (*(v+i));
			}
			else
			{
				kd = kd+1;
				sum = sum + (*(v+i));
			}
			
			if(kd == 0)
			{
				md = (float) sum / kd;
			}
			
			if (kp == 0)
			{
				pp=0;
			}
		}
		printf("%d \n%d \n%d \n%d",pp,kp,kd,md);
	}
	else
	{
		printf("errore");
	}
}