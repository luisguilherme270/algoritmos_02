#include <stdio.h>
#include <stdlib.h>

int
main()  
  {
  char escolha;
  do
    {
    printf("Deseja proseguir para a execucao 'y/n': ");
    scanf(" %c", &escolha);
    if(escolha == 'y')
      {
      int sequencia, i;
      printf("Digite um valor positivo para saber o fatorial: ");
      scanf("%d", &sequencia);
      while(sequencia < 0)
        {
        printf("Digitou errado? Entao digite novamente: ");
        scanf("%d", &sequencia);
        }
      if(sequencia == 0)
        {
        printf("Fatorial de 0 eh: 1 \n");
        }
      if(sequencia > 0)
        {
        int base = 1, resultado = 1;
        for(i = 1; i < sequencia; i++)
          {
          resultado *= i + base;
          }
        printf("\n");
        printf("resultado eh : %d\n", resultado);
        printf("\n");
        }
      }
    }
  while(escolha != 'n');
  printf("Fim da execucao ");
  return 0;
  }
