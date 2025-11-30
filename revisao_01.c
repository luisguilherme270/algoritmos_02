#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  int escolha, numero, resultado = 0, contador;
  do
    {
    printf("Deseja continuar para a execucao do programa 0/1 ");
    scanf("%d", &escolha);
    if(escolha == 0)
      {
      printf("Digite um numero par para descobrir o seu valor quadrado: ");
      scanf("%d", &numero);
      while(numero % 2 != 0)
        {
        printf("numero digitado nao eh par, digite novamente: \n");
        scanf("%d", &numero);
        contador++;
        if(contador >=3)
          {
          printf("Se nao entendeu, digite um numero par, nao um impar: \n");
          }
        }
      resultado = numero * numero;
      printf("%d x %d\n", numero, numero);
      printf("%d\n", resultado);
      }
    }
  while(escolha != 1);
  printf("Fim da execucao ");
  return (0);
  }
