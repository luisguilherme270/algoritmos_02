#include <stdio.h>
#include <stdbool.h>

void
Funcao_imprimir(int *vetor)
  {
  vetor -= 3;
  for(int i = 0; i < 3; i++)
    {
    printf("Valor na posicao %d --> %d \n", i + 1, *vetor);
    vetor++;
    }
  }

int
main()
  {
  bool menu = true;
  char comecar;
  do
    {
    printf("Deseja iniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      menu = false;
      int vetor[3] = {0};
      int *p1 = vetor;
      for(int i = 0; i < 3; i++)
        {
        printf("Digite o numero para a posicao %d --> ", i + 1);
        scanf("%d", p1);
        p1++;
        }
      Funcao_imprimir(p1);
      menu = true;
      }
    else
      {
      break;
      }
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }
