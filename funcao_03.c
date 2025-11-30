#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char 
funcao_2(char txt_02)
  {
  char letra_o = 'O';
  return letra_o;
  }

char 
funcao_1(char txt_01)
  {
  char letra_k = 'k';
  return letra_k;
  }

int
main ()
  {
  char texto[20];
  printf("Digite um texto");
  fgets(texto, 20, stdin);
  for(int i = 0; i < strlen(texto); i++)
    {
    printf("%c", texto[i]);
    if(texto[i] == '\0')
      {
      char palavra_1 = funcao_2(texto);
      char palavra_2 = funcao_2(texto);
      printf("%c", palavra_1);
      printf("%c",palavra_2);
      return 0
      }
    }
  }