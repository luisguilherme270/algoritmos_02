#include <stdio.h>
#include <stdlib.h>

char 
verificacao(float media)
  {
  if(media >= 0 && media < 5)
    {
    return 'D';
    }
  if(media >= 5 && media < 7)
    {
    return 'C';
    }
  if(media >= 7 && media < 9 )
    {
    return 'B';
    }
  if(media >= 9 && media <= 10)
    {
    return 'A';
    }
  }

int 
main()
  {
  char iniciar, nota_final;
  float media;
  do
    {
    printf("Deseja continuar para execucao 'y/n': ");
    scanf(" %c", &iniciar);
    if(iniciar == 'y')
      {
      printf("Digite a media final: ");
      scanf("%f", &media);
      nota_final = verificacao(media);
      switch(nota_final)
        {
        case 'D':
          {
          printf("Nota D \n");
          break;
          }
        case 'C':
          {
          printf("Nota C \n");
          break;
          }
        case 'B':
          {
          printf("Nota B \n");
          break;
          }
        case 'A':
          {
          printf("Nota A \n");
          break;
          }
        }
      }
    }
  while(iniciar != 'n');
  return 0;
  }
