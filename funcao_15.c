#include <stdio.h>
#include <stdlib.h>

float 
potencia(float x, int z)
  {
  float potencia = 1;
  int i;
  if(z > 0)
    {
    for(i = 0; i < z; i++)
      {
      potencia *= x;
      }
    }
  if(z < 0)
    {
    for(i = z; i < 0; i++)
      {
      potencia *= 1/x ;
      }
    }
  if(z == 0)
    {
    potencia = 1;
    }
  return (potencia);
  }

int 
main()
  {
  char comecar;
  float x, valor_final;
  int z;
  do
    {
    printf("Deseja comecar o programa: 'y/n' ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite o valor de x: ");
      scanf("%f", &x);
      printf("Digite o valor de z: ");
      scanf("%d", &z);
      valor_final = potencia(x,z);
      printf("%.2f\n", valor_final);
      }
    }
  while(comecar != 'n');
  return 0;
  }

