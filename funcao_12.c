#include <stdio.h>
#include <stdlib.h>

void
verificador(int numeros[])
  {
  int temporario;
  for(int i = 0; i < 3; i++)
    {
    for(int j = 0; j < 3 - 1; j++)
      {
      if(numeros[j] > numeros[j + 1])
        {
        temporario = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temporario;
        }
      }
    }
  }

int 
main()
  {
  int numeros[3];
  printf("Digite 3 valores inteiros: \n");
  for(int i = 0; i < 3; i++)
    {
    scanf("%d", &numeros[i]);
    }
  verificador(numeros);
  for(int i = 0; i < 3; i++)
    {
    printf("%d ", numeros[i]);
    }
  return 0;
  }
