#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int 
Comparacao_strings(char *texto_01, char *texto_02)
  {
  int verificador = 0, contador = 0;
  int tamanho = 0;
  if(strlen(texto_01) > strlen(texto_02))
    {
    tamanho = strlen(texto_01); 
    }
  else
    {
    tamanho = strlen(texto_02);  
    }
  for(int i = 0; i < tamanho; i++)
    {
    if(*texto_01 == *texto_02)
      {
      *texto_01++;
      *texto_02++;
      verificador = 1;
      if(*texto_01 == ' ')
        {
        contador++;
        }
      }
    }
  return contador;
  }

int
main()
  {
  char comecar;
  bool menu = true;
  do
    {
    printf("Digite para comecar 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      menu = false;
      printf("Comecando o programa: \n");

      char texto_01[100], texto_02[100];
      
      printf("Digite o primeiro texto: ");
      getchar();
      fgets(texto_01, 100, stdin);
      printf("\nDigite o segundo texto: ");
      fgets(texto_02, 100, stdin);
      
      int receber = Comparacao_strings(texto_01, texto_02);
      printf("%d, vezes ocorridas", receber);
      }
    else
      {
      printf("Nao foi possivel comecar, tente novamente.\n");
      }
    }while(menu);
  return 0;
  }
