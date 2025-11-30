#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **
Primeira_matriz(int linhas, int colunas)
  {
  int **matriz = (int **)calloc(linhas, sizeof(int *));
  if(matriz == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < linhas; i++)
    {
    matriz[i] = (int *)calloc(colunas, sizeof(int));
    if(matriz[i] == NULL)
      {
      return NULL;
      }
    }
  return matriz;
  }

int **
Segunda_matriz(int linhas_02, int colunas_02)
  {
  int **matriz = (int **)calloc(linhas_02, sizeof(int *));
  if(matriz == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < linhas_02; i++)
    {
    matriz[i] = (int *)calloc(colunas_02, sizeof(int));
    if(matriz[i] == NULL)
      {
      return NULL;
      }
    }
  return matriz;
  }

int **
Recebe_valores(int **matriz_01, int **matriz_02, int linhas, int colunas, int linhas_02)
  {
  int **matriz_final = (int **)calloc(linhas, sizeof(int *));
  if(matriz_final == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < linhas; i++)
    {
    matriz_final[i] = (int *)calloc(colunas, sizeof(int));
    if(matriz_final[i] == NULL)
      {
      return NULL;
      }
    }
  for(int i = 0; i < linhas; i++)
    {
    for(int j = 0; j < colunas; j++)
      {
      for(int cont = 0; cont < linhas_02; cont++)
        {
        matriz_final[i][j] += matriz_01[i][cont] * matriz_02[cont][j];
        }
      }
    }
  return matriz_final;
  }

void
Printar_resultado(int **resultado, int linhas, int colunas)
  {
  for(int i = 0; i < linhas; i++)
    {
    for(int j = 0; j < colunas; j++)
      {
      printf("%d ", resultado[i][j]);
      }
    printf("\n");
    }
  }

void
Liberar_memoria(int **resultado, int **matriz_02, int **matriz_01, int linhas,int linhas_02)
  {
  for(int i = 0; i < linhas; i++)
    {
    free(resultado[i]);
    };
  free(resultado);
  for(int i = 0 ; i < linhas_02; i++)
    {
    free(matriz_02[i]);
    }
  free(matriz_02);
  for(int i = 0; i < linhas; i++)
    {
    free(matriz_01[i]);
    }
  free(matriz_01);
  }

int
main()
  {
  bool menu = true;
  do
    {
    retornar:
    int linhas, colunas, linhas_02, colunas_02;
    printf("Digite o tamanho da primeira matriz contendo linhas e colunas --> ");
    scanf("%d %d", &linhas, &colunas);
    printf("Digite o tamanha da segunda matriz contendo linhas e colunas --> ");
    scanf("%d %d", &linhas_02, &colunas_02);
    int tamanho_01 = linhas * colunas, tamanho_02 = linhas_02 * colunas_02;
    if(colunas == linhas_02)
      {
      int **matriz_01 = Primeira_matriz(linhas, colunas);
      if(matriz_01 == NULL)
        {
        goto free;
        }
      int **matriz_02 = Segunda_matriz(linhas_02, colunas_02);
      if(matriz_02 == NULL)
        {
        goto free;
        }
      printf("Digite os valores da primeira matriz ");
      for(int i = 0; i < linhas; i++)
        {
        for(int j = 0; j < colunas; j++)
          {
          scanf("%d", &matriz_01[i][j]);
          }
        }
      printf("Digite os valores da segunda matriz ");
      for(int i = 0; i < linhas_02; i++)
        {
        for(int j = 0; j < colunas_02; j++)
          {
          scanf("%d", &matriz_02[i][j]);
          }
        }
      int **resultado = Recebe_valores(matriz_01, matriz_02, linhas, colunas_02, linhas_02);
      Printar_resultado(resultado, linhas, colunas_02);
      free:
      Liberar_memoria(resultado, matriz_02, matriz_01, linhas, linhas_02);
      }
    else
      {
      printf("Matrizes nao podem ser multiplicadas reiniciando\n");
      goto retornar; 
      }
    char escolher;
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolher);
    if(escolher == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return 0;
  }