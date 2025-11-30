#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *
Recebe_valores(int **matriz,int n)
  {
  int *vetor = (int *)calloc(n, sizeof(vetor));
  if(vetor == NULL)
    {
    return NULL;
    }
  for(int i = 0; i < n; i++)
    {
    for(int j = 0; j < n; j++)
      {
      vetor[j] += matriz[i][j];
      }
    }
  return vetor;
  }

int
main()
  {
  bool menu = true;
  do
    {
    int n;
    printf("Digite o valor de n --> ");
    scanf("%d", &n);
    int **matriz = (int **)calloc(n, sizeof(*matriz));
    for(int i = 0; i < n; i++)
      {
      matriz[i] = (int *)calloc(n, sizeof(matriz[i]));
      if(matriz[i] == NULL)
        {
        goto free;
        }
      }
    if(matriz == NULL)
      {
      goto free;
      }
    for(int i = 0; i < n; i++)
      {
      for(int j = 0; j < n; j++)
        {
        printf("digite o numero da posicao |%d|%d| --> ", i, j);
        scanf("%d", &matriz[i][j]);
        }
      }
    int *resultado = Recebe_valores(matriz, n);
    if(resultado == NULL)
      {
      goto free;
      }
    else
      {
      for(int i = 0; i < n; i++)
        {
        printf("resultado posicao |%d| do vetor --> %d\n", i+1, resultado[i]);
        }
      }
    free:
    for(int i = 0; i < n; i++)
      {
      free(matriz[i]);
      }
    free(matriz);
    free(resultado);
    char escolha;
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return 0;
  }
