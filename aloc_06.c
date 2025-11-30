#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
Verificacao_numero(int *matriz, int numero,int linhas,int colunas)
  {
  for(int i = 0; i < (linhas * colunas); i++)
    {
    if(numero == matriz[i])
      {
      return (1);
      }
    }
  return (0);
  }
  
int
main()
  {
  bool menu = true;
  do
    {
    int linhas, colunas, numero;
    char escolher;
    printf("Digite as dimensoes da matriz --> ");
    scanf("%d %d", &linhas, &colunas);
    int *matriz = (int *)calloc((linhas * colunas), sizeof(int));
    if(matriz == NULL)
      {
      printf("Erro de memoria");
      return 1;
      }
    for(int i = 0; i < (linhas * colunas); i++)
      {
      printf("Digite os valores da matriz --> ");
      scanf("%d", &matriz[i]);
      }
    printf("Digite um numero agora para verificar se esta na matriz --> ");
    scanf("%d", &numero);
    int receber = Verificacao_numero(matriz,numero,linhas,colunas);
    if(receber == 1)
      {
      printf("Esta na matriz\n");
      }
    else
      {
      printf("Nao esta na matriz\n");
      }
    free(matriz);
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolher);
    if(escolher == 'n')
      {
      break;
      }
    }while(menu);
  printf("Fim de execucao");
  return (0);
  }
