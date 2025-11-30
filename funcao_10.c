#include <stdio.h>
#include <stdlib.h>

int 
verificador(int numero)
  {
  if(numero == 0)
    {
    return 1;
    }
  if(numero % 2 == 0)
    {
    return 1;
    }
  else
    {
    return 0;
    }
  }

int main()
  {
  int numero, verificacao;
  char iniciar;
  do
    {
    printf("Deseja continuar para a execucao do programa 'y/n': ");
    scanf(" %c", &iniciar);
    if(iniciar == 'y')
      {
      printf("Digite um numero para saber se eh par ou impar: ");
      scanf("%d", &numero);
      verificacao = verificador(numero);
      switch(verificacao)
        {
        case 0:
          {
          printf("Impar \n");
          break;
          }
        case 1:
          {
          printf("Par \n");
          break;
          }
        }
      }
    }
  while(iniciar != 'n');
  return 0;
  }
