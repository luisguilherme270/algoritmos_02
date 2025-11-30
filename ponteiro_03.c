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
      float numeros[10] = {0};
      float *p = numeros;
      for(int i = 0; i < 10; i++)
        {
        printf("O endereco do %d eh: %p\n", i, &p);
        }
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
