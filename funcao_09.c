#include <stdio.h>
#include <stdlib.h>

int verificacao(int numero)
  {
  if(numero < 0)
    {
    return 0;
    }
  if(numero > 0)
    {
    return 1;
    }
  if(numero == 0)
    {
    return 2;
    }
  }

int main()
  {
  int numero, resultado_verificacao;
  char iniciar;
  do
    {
    printf("Quer executar o programa: 'y/n': ");
    scanf(" %c", &iniciar);
    if(iniciar == 'y')
      {
      printf("Iniciando\n");
      printf("Digite um numero inteiro para verificar se eh positivo ou negativo: ");
      scanf("%d", &numero);
      resultado_verificacao = verificacao(numero);
      switch(resultado_verificacao)
        {
        case 1: 
          {
          printf("Positivo: \n");
          break;
          }
        case 0: 
          {
          printf("Negativo: \n");
          break;
          }
        case 2:
          {
          printf("O numero eh o zero: \n");
          break;
          }
        }
      }
    }
  while(iniciar != 'n');
  return 0;
  }
