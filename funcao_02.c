#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printar(char txt_final)
  {
  printf("%c", txt_final);
  }

int
main()
  {
  char texto[22];
  printf("digite um texto com valor maximo de 20: ");
  fgets(texto, 22, stdin);
  for(int i = 0; i < 22; i++)
    {
    printar(texto[i]);
    if(texto[i] == '\0')
      {
      break;
      }
    }
  return 0;
  }