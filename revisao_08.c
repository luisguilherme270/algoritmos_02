#include <stdio.h>
#include <stdlib.h>

int 
main()
  {
  char comecar, continuar;;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      float numeros, soma = 0;
      do
        {
        printf("Digite a quantidade de numeros que desejar: ");
        scanf("%f", &numeros);
        printf("Deseja digitar mais? 'y/n': ");
        scanf(" %c", &continuar);
        soma += numeros;
        }while(continuar != 'n');
      printf("A soma dos numeros digitados eh: %.1f\n", soma);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
