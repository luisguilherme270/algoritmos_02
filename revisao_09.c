#include <stdio.h>
#include <stdlib.h>

int 
main()
  {
  char comecar;
  int numeros[8];
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite 8 numeros inteiros: ");
      for(int i = 0; i < 8; i++)
        {
        scanf("%d", &numeros[i]);
        }
      printf("\nmultiplos de 2: ");
      for(int j = 0; j < 8; j++)
        {
        if(numeros[j] % 2 == 0)
          {
          printf("%d ", numeros[j]);
          }
        }
      printf("\n");
      printf("Multiplos de 3: ");
      for(int j = 0; j < 8; j++)
        {
        if(numeros[j] % 3 == 0)
          {
          printf("%d ", numeros[j]);
          }
        }
      printf("\n");
      printf("Multiplos de ambos: ");
      for(int j = 0; j < 8; j++)
        {
        if((numeros[j] % 2 == 0) && (numeros[j] % 3 == 0))
          {
          printf("%d ", numeros[j]);
          }
        }
      printf("\n");
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
