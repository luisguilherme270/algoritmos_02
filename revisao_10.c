#include <stdio.h>
#include <stdlib.h>

int 
main()
  {
  char comecar;
  int vetor[8], temporario = 0;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite 8 numeros inteiros: ");
      for(int i = 0; i < 8; i++)
        {
        scanf("%d", &vetor[i]);
        }
      for(int i = 0; i < 8; i++)
        {
        for(int j = 0; j < 8 - 1; j++)
          {
          if(vetor[j] > vetor[j + 1])
            {
            temporario = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = temporario;
            }
          }
        }
      printf("\nMaior valor eh: %d\n", vetor[7]);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
