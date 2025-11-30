#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **
Aloca_matriz(int n)
  {
  int **matriz = (int **)calloc(n, sizeof(int *));
  if(matriz == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < n; i++)
    {
    matriz[i] = (int *)calloc(n, sizeof(int));
    if(matriz[i] == NULL)
      {
      return NULL;
      }
    }
  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      if(j == 0)
        {
        matriz[i][j] = 0;
        }
      if(i > j )
        {
        matriz[i][j] = -1;
        }
      if(i < j)
        {
        matriz[i][j] = 1;
        }
      } 
    }
  return matriz;
  }

void
Printar_matriz(int **matriz_alocada,int n)
  {
  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      printf("%d ", matriz_alocada[i][j]);
      }
    printf("\n");
    }
  }

void
Liberar_memoria(int **matriz_alocada,int n)
  {
  for(int i = 0; i < n; i++)
    {
    free(matriz_alocada[i]);
    }
  free(matriz_alocada);
  }

int
main()
  {
  bool menu = true;
  do
    {
    char escolha;
    int n;
    printf("Digite o valor n da matriz --> ");
    scanf("%d", &n);
    int **matriz_alocada = Aloca_matriz(n);
    printf("Valor da matriz \n");
    Printar_matriz(matriz_alocada,n);
    Liberar_memoria(matriz_alocada,n);
    printf("\n");
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  system("clear");
  return (0);
  }
