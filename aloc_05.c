#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int
main()
  {
  bool menu = true;
  do
    {
    char escolha;
    int valor, tamanho = 0;
    printf("Digite um valor positivo --> ");
    scanf(" %d", &valor);
    while(valor < 0)
      {
      scanf("%d", &valor);  
      }
    printf("Digite o tamanho que deseja para o vetor --> ");
    scanf("%d", &tamanho);
    int *vetor = (int *) calloc(tamanho, sizeof(vetor));
    printf("Digite valores maiores ou iguais a 2 --> ");
    for(int i = 0; i < tamanho; i++)
      {
      scanf("%d", &vetor[i]);
      while(vetor[i] <= 2)
        {
        printf("Digite novamente --> ");
        scanf("%d", &vetor[i]);
        }
      }
    for(int i = 0; i < tamanho; i++)
      {
      printf("Numero posicao %d --> %d\n", i + 1, vetor[i]);
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
