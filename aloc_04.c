#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main()
  {
  bool menu = true;
  do
    {
    char reiniciar;
    int tamanho;
    printf("Digite o valor do vetor --> ");
    scanf("%d", &tamanho);
    int *vetor;
    vetor = calloc(tamanho, sizeof(vetor));
    printf("Digite os valores para o vetor --> ");
    for(int i = 0; i < tamanho; i++)
      {
      scanf("%d", &vetor[i]);
      }
    printf("Tamanho do vetor --> %d\n", tamanho);
    for(int i = 0; i < tamanho; i++)
      {
      printf("Valores do vetor posicao %d --> %d", i + 1, vetor[i]);
      printf("\n");
      }
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &reiniciar);
    if(reiniciar == 'n')
      {
      break;
      }
    else
      {
      continue;
      }
    }while(menu);
  return (0);
  }

