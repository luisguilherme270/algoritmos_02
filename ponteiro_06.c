#include <stdio.h>

int
main()
  {
  char comecar;
  do
    {
    printf("Comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      int numeros[5] = {0};
      int *p = numeros;
      for(int i = 0; i < 5; i++)
        {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
        }
      for(int i = 0; i < 5; i++)
        {
        if(numeros[i] % 2 == 0)
          {
          printf("endereco de memoria do numeros pares: %d --> %p\n", numeros[i], p + i);
          }
        }
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
