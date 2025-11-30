#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  int data[3], i, cont_invalido = 0;
  printf("Digite sua data de nascimento separado por dia, mes, ano ");
  for(i = 0; i < 3; i++)
    {
    scanf("%d", &data[i]);
    }
  if((data[0] > 31) || (data[0] < 1))
    {
    cont_invalido++;
    }
  if((data[1] > 12) || (data[1] < 1))  
    {
    cont_invalido++;
    }
  if((data[2] > 2025) || (data[2] < 1900))
    {
    cont_invalido++;
    }
  if(cont_invalido > 0)
    {
    printf("Data invalida");
    return (0);
    }
  else
    {
    printf("Data valida \n");
    for(i = 0; i < 3; i++)
      {
      printf("%d ", data[i]);
      }
    }
  return (0);
  }
