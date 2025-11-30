#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float *
Recebe_numero(int tamanho, float numero)
  {
  float *vetor = (float *)calloc(tamanho, sizeof(float));
  if((vetor == NULL) || (vetor < 0))
    {
    printf("Erro na alocacao");
    return NULL;
    }
  for(int i = 0; i < tamanho; i++)
    {
    vetor[i] = numero;
    }
  return (vetor);
  }

int
main()
  {
  bool menu = true;
  do
    {
    int tamanho;
    float numero;
    char escolha;

    printf("Digite um valor inteiro positivo --> ");
    scanf("%d", &tamanho);
    printf("Digite o valor que sera preenchido no vetor --> ");
    scanf("%f", &numero);
    float *resultado = Recebe_numero(tamanho, numero);
    for(int i = 0; i < tamanho; i++)
      {
      printf("posicao %d --> %.1f\n", i + 1, resultado[i]);
      }
    free(resultado);
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      menu = false;
      }
    }while(menu);
  return (0);
  }