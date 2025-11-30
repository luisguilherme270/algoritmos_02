#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  char comecar;
  int numero,i, j, contador = 0;
  do
    {
    printf("Deseja comecar a execucao do programa: 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      do 
        {
        printf("Digite o valor inteiro para a sequencia: ");
        scanf("%d", &numero);
        }
        while(numero < 0);
      do
        {
        printf("Digite o valor de i e de j: ");
        scanf("%d %d", &i, &j);
        }
        while((i < 0) && (j < 0));
      for(int cont = 0; contador < numero; cont++)
        {
        if(cont % i == 0 || cont % j == 0)
          {
          printf("%d ", cont);
          contador++;
          }
        }
      printf("\n");
      }
    }
    while(comecar != 'n');
  return 0;
  }
