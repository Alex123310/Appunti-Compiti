#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE* fpi; //FILE DI INPUT
  FILE* fpo; //FILE DI OUTPUT
  
  typedef struct
  {
    char Matricola[5];
    char Cognome[30];
    char Nome[30];
    char Classe[2];
  }Studente;
  
  
  
  fpi = fopen("tassinari.txt","r");
  
  if(fpi != NULL)
    {
      fpo = fopen("4H.txt","w");
      
      Studente alunno;
      
      while(!(feof(fpi)))
      {
        fscanf(fpi,"%5s %30s %30s %2s/n",alunno.Matricola, alunno.Cognome, alunno.Nome, alunno.Classe);
        
        if(strcmp(alunno.Classe,"4H") == 0)
        {
          fprintf(fpo,"%5s %30s %30s %2s/n",alunno.Matricola, alunno.Cognome, alunno.Nome, alunno.Classe);
        }
      }
    }
    else
    {
      printf("Errore");
    }
  return 0;
}
