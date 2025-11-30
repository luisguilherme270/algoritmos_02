#include <stdio.h>
#include <stdlib.h>
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
      float matriz[3][3];
      float *p;
      p = &matriz[0][0];
      for(int i = 0; i < 3; i++)
        {
        for(int j = 0; j < 3; j++)
          {
          printf("O valor do endereco na posicao |%d %d| eh: %p", i, j, p + i + j);
          printf("\n");
          }
        printf("\n");
        }
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
