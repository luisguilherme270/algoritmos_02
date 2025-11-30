#include <stdio.h>
#include <stdlib.h>

void Verificacao_ponteiros(int *p1, int *p2)
  {
  if(p1 > p2)
    {
    printf("O maior ponteiro eh: %p", p1);
    printf("\n");
    printf("O menor ponteiro eh: %p", p2);
    }
  }

int
main()
  {
  char comecar;
  do
    {
    printf("Deseja iniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      int numero_01, numero_02;
      int *p1 = &numero_01, *p2 = &numero_02;
      printf("Digite dois numeros inteiros: ");
      scanf("%d %d", &numero_01, &numero_02);
      Verificacao_ponteiros(p1,p2);
      printf("\n");
      }
    }while(comecar != 'n');
  return 0;
  }
