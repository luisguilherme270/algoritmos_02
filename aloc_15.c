#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *
Recebe_vetores(int *vetor_01, int *vetor_02,int tamanho)
  {
  int *vetor_final = (int *)calloc(tamanho, sizeof(int));
  if(vetor_final == NULL)
    {
    printf("Erro na alocacao");
    return NULL;
    }
  for(int i = 0; i < tamanho; i++)
    {
    vetor_final[i] = i;
    }
  return vetor_final;
  }

int
main()
  {
  bool menu = true;
  char escolher;
  do
    {
    int tam_01, tam_02;
    printf("Digite o tamanho dos vetores --> ");
    scanf("%d %d", &tam_01, &tam_02);
    int *vetor_01 = (int *)calloc(tam_01, sizeof(int));
    int *vetor_02 = (int *)calloc(tam_02, sizeof(int));
    if(vetor_01 == NULL || vetor_02 == NULL)
      {
      goto free;
      }
    else
      {
      int tamanho_final = tam_01 * tam_02;
      int *vetor_final = Recebe_vetores(vetor_01,vetor_02,tamanho_final);
      for(int i = 0; i < tamanho_final; i++)
        {
        printf("posicao %d --> %d \n", i + 1, vetor_final[i]);
        }
      free(vetor_final);
      }
    free:
    free(vetor_01);
    free(vetor_02);
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolher);
    if(escolher == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return 0;
  }