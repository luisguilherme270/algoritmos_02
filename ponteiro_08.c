#include <stdio.h>
#include <stdbool.h>

int *
Recebimento_parametros(int valor, int *vetor)
  {
  for(int i = 0; i < 3; i++)
    {
    *vetor = valor;
    vetor++;
    }
  return (vetor);
  }

int
main()
  {
  char comecar;
  bool menu = true;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      menu = false;
      int valor = 12, vetor[3] = {0}, *ponteiro;
      ponteiro = Recebimento_parametros(valor, vetor);
      ponteiro--;
      for(int i = 3; i > 0; i--)
        {
        printf("valor na posicao %d --> %d\n", i, *ponteiro);
        ponteiro--;
        }
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
