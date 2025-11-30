#include <stdio.h>
#include <stdbool.h>

void
Receber_valores(int *b, int **c, int ***d)
  {
  *b *= 2;
  printf("Valor b --> %d \n", *b);
  **c = (**c / 2) * 3;
  printf("Valor c --> %d \n", **c);
  ***d = (***d / 3) * 4;
  printf("Valor d --> %d \n", ***d);
  }

int 
main()
  {
  bool menu = true;
  do
    {
    char comecar;
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      int A;
      printf("Digite um valor para A: ");
      scanf("%d", &A);
      int *b = &A, **c = &b, ***d = &c;
      Receber_valores(b, c, d);
      }
    else
      {
      break;
      }
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }

