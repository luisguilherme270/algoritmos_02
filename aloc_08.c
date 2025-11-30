#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *
Retorna_vetor(int tamanho)
  {
  int *vetor = (int *)calloc(tamanho, sizeof(int));
  if((vetor == NULL) || (vetor < 0))
    {
    return NULL;
    }
  if(vetor > 0)
    {
    return &(*vetor);
    }
  }

int
main()
  {
  bool menu = true;
  do
    {
    int tamanho;
    char escolha;
    printf("Digite o tamanho do vetor maior que zero --> ");
    scanf("%d", &tamanho);
    int *vetor = Retorna_vetor(tamanho);
    if(vetor == NULL)
      {
      printf("Vetor nulo\n");
      }
    else
      {
      printf("Vetor nao nulo\n");
      }
    free(vetor);
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      break;
      }
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }
