#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *
Recebe_vetores(int *vetor_01,int *vetor_02, int tamanho)
  {
  int *vetor_final = NULL;
  vetor_final = (int *)calloc(tamanho, sizeof(int));
  if(vetor_final == NULL)
    {
    return NULL;
    }
  for(int j = 0; j < tamanho; j++)
    {
    vetor_final[j] = j;
    }
  return vetor_final;
  }

int
main()
  {
  bool menu = true;
  do
    {
    int tamanho_01, tamanho_02;
    char escolher;
    printf("Digite o tamanho dos vetores --> ");
    scanf("%d %d", &tamanho_01, &tamanho_02);
    int tamanho = tamanho_01 + tamanho_02;
    int *vetor_01 = (int *)calloc(tamanho_01, sizeof(int));
    int *vetor_02 = (int *)calloc(tamanho_02, sizeof(int));
    if(vetor_01 == NULL || vetor_02 == NULL)
      {
      goto free;
      }
    int *vetor_final = Recebe_vetores(vetor_01, vetor_02, tamanho);
    if(vetor_final == NULL)
      {
      goto free;
      }
    for(int i = 0; i < tamanho; i++)
      {
      printf("posicao %d --> %d \n", i + 1, vetor_final[i]);
      }
    free:
    free(vetor_01);
    free(vetor_02);
    free(vetor_final);
    printf("\nDeseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolher);
    if(escolher == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return 0;
  }
