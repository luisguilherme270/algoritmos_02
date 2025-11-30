#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main()
  {
  bool menu = true;
  do
    {
    char comecar;
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      int valor_int;
      char val_char;
      float valor_float;
      double valor_double;
      short  valor_short;
      long long int valor_long;
      printf("valor do int --> %d em bytes\n", sizeof(valor_int));
      printf("Valor char --> %d em bytes\n", sizeof(val_char));
      printf("Valor float --> %d em bytes\n", sizeof(valor_float));
      printf("Valor char --> %d em bytes\n", sizeof(valor_double));
      printf("Valor short --> %d em bytes\n", sizeof(valor_short));
      printf("Valor long long int --> %d em bytes\n", sizeof(valor_long));
      }
    else
      {
      break;
      }
    }while(menu);
  return (0);
  }