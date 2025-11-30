#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **
Recebe_n(int n)
  {
  int **matriz = (int **)calloc(n, sizeof(int *));
  if(matriz == NULL)
    {
    printf("Erro na alocacao");
    return NULL;
    }
  for(int i = 0; i < n; i++)
    {
    matriz[i] = (int *)calloc(n, sizeof(int));
    if(matriz == NULL)
      {
      printf("Erro na alocacao");
      return NULL;
      }
    }
  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      if(i + j == n - 1)
        {
        matriz[i][j] = 1;
        }
      }
    }
  return &(*matriz);
  }

int
main()
  {
  bool menu = true;
  do
    {
    int n;
    char escolha;
    printf("Digite o tamanho da matriz --> ");
    scanf("%d", &n);
    int **matriz = Recebe_n(n);
    if(matriz == NULL)
      {
      goto free;
      }
    else
      {
      for(int i = 0; i < n; i++)
        {
        for(int j = 0; j < n; j++)
          {
          printf("%d ", matriz[i][j]);
          }
        printf("\n");
        }
      }
    free:
    for(int i = 0; i < n; i++)
      {
      free(matriz[i]);
      }
    free(matriz);
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }