#include <stdio.h>
#include <stdlib.h>


int 
main()
  {
  int numeros[10];
  char comecar;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite 10 numeros: ");
      for(int i = 0; i < 10; i++)
        {
        scanf("%d ", &numeros[i]);
        }
      for(int i = 0; i < 10; i++)
        {
        if(numeros[i] > 25 && numeros[i] < 85)
          {
          printf("%d ", numeros[i]);
          }
        }
      }
    }
    while(comecar != 'n');
  return 0;
  } 
