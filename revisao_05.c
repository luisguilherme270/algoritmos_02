#include <stdio.h>
#include <stdlib.h>

int 
main()
  {
  char comecar;
  int numeros[5], temp = 0;
  do
    {
    printf("Deseja comecar a execucao do programa: 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite os numeros: ");
      for(int i = 0; i < 5; i++)
        {
        scanf("%d", &numeros[i]);
        }
      for(int i = 0; i < 5; i++)
        {
        for(int j = 0; j < 5 - 1; j++)
          {
          if(numeros[j] > numeros[j + 1])
            {
            temp = numeros[j];
            numeros[j] = numeros[j + 1];
            numeros[j + 1] = temp;
            }
          }
        }
      printf("ordem crescente: ");
      for(int j = 0; j < 5; j++)
        {
        printf("%d ", numeros[j]);
        }
      printf("\n");
      for(int i = 0 ; i < 5; i++)
        {
        for(int j = 0; j < 5 - 1; j++)
          {
          if(numeros[j] < numeros[j + 1])
            {
            temp = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = temp;
            }
          }
        }
      printf("Ordem decrescente: ");
      for(int i = 0; i < 5; i++)
        {
        printf("%d ", numeros[i]);
        }
      printf("\n");
      }
    }
    while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
