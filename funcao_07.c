#include <stdio.h>
#include <stdlib.h>

int 
verificacao(int numero)
  {
  int i, j ,contador = 0;
  printf("%d = ", numero);
  for(i = 1; i < numero; i++)
    {
    if(numero % i == 0)
      {
      printf("%d", i);
      contador += i;
      int outro = 0;
      for(j = i + 1; j < numero; j++)
        {
        if(numero % j == 0)
          {
          outro = 1;
          break;
          }
        }
      if(outro)
        {
        printf(" + ");
        }
      }
    }
  printf("\n");
  if(contador == numero)
    {
    printf("soma dos divisores: %d", contador);
    return 1;
    }
  else
    {
    return 0;
    }
  }

int 
main()
  {
  int numero, resultado_final;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &numero);
  
  resultado_final = verificacao(numero);
  printf("\n");
  printf("%d ", resultado_final);
  return 0;
  }
