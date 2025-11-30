#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *
Recebe_ponteiro(int tamanho)
  {
  int *vetor = (int *)calloc(tamanho, sizeof(int));
  if(vetor == NULL)
    {
    printf("Erro na alocacao");
    return NULL;
    }
  return &(*vetor);
  }

int
main()
  {
  bool menu = true;
  do
    {
    int tamanho;
    char escolha;
    printf("Digite o tamanho do vetor --> ");
    scanf("%d", &tamanho);
    int *recebe = Recebe_ponteiro(tamanho);
    for(int i = 0; i < tamanho; i++)
      {
      recebe[i] = i; 
      printf("%d ", recebe[i]);
      }
    free(recebe);
    printf("\nDeseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      break;
      }
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }
