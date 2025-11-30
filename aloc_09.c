#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *
Recebe_string(char **pont)
  {
  int tamanho = strlen(*pont);
  char *string_02 = (char *)calloc(tamanho + 1, sizeof(char));
  if(string_02 == NULL)
    {
    printf("Erro na alocacao");
    return NULL;
    }
  strcpy(string_02, *pont);
  int temp, j, i;
  for(int i = 0, j = tamanho - 1; i < j; i++, j--)
    {
    temp = string_02[i];
    string_02[i] = string_02[j];
    string_02[j] = temp;
    }
  return string_02;
  }

int
main()
  {
  bool menu = true;
  do
    {
    char *string = calloc(100,sizeof(char));
    if(string == NULL)
      {
      printf("Erro na alocacao");
      return 1;
      }
    char **pont = &string, escolha;
    printf("Digite uma palavra --> ");
    fgets(string, 100, stdin);
    char *resultado = Recebe_string(pont);
    printf("%s", resultado);
    printf("\nDeseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      break;
      }
    getchar();
    free(string);
    free(resultado);
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }
