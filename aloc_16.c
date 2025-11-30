#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int **
Recebe_matriz(int n)
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
      printf("valor posicao |%d|%d| --> ", i,j);
      scanf("%d", &matriz[i][j]);
      }
    }
  return matriz;
  }

int *
Recebe_vetor(int n)
  {
  int *vetor = (int *)calloc(n, sizeof(int));
  if(vetor == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < n; i++)
    {
    printf("Valores posicao %d --> ", i + 1);
    scanf("%d", &vetor[i]);
    }
  return vetor;
  }

int *
Recebe_valores(int **matriz, int *vetor, int n)
  {
  int *vetor_final = (int *)calloc(n, sizeof(int));
  if(vetor_final == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      vetor_final[i] += matriz[i][j] * vetor[j];
      } 
    }
  return vetor_final;
  }

void
Printar_resultado(int *vetor, int n)
  {
  printf("( ");
  for(int i = 0; i < n; i++)
    {
    printf("%d ", vetor[i]);
    }
  printf(")");
  }

void 
Liberar_memoria(int *vetor, int **matriz, int n,int *resultado)
  {
  free(resultado);
  free(vetor);
  for(int i = 0; i < n; i++)
    {
    free(matriz[i]);
    }
  free(matriz);
  }

int
main()
  {
  bool menu = true;
  char escolha;
  do
    {
    int n;
    printf("Digite o valor de n --> ");
    scanf("%d", &n);
    int **matriz = Recebe_matriz(n);
    int *vetor = Recebe_vetor(n);
    if(matriz == NULL || vetor == NULL)
      {
      goto free;
      }
    int *resultado = Recebe_valores(matriz, vetor, n);
    if(resultado == NULL)
      {
      goto free;
      }
    Printar_resultado(resultado,n);
    free:
    Liberar_memoria(vetor,matriz,n, resultado);
    printf("\nDeseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return 0;
  }