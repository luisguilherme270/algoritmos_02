#include <stdio.h>
#include <stdbool.h>
#include "biblioteca.h"

int
main()
  {
  bool menu = true;
  do
    {
    int escolha;
    float numero_01, numero_02, resultado = 0;
    char reiniciar;
    printf("Escolha uma das operações\n");
    printf("1 --> Soma\n2 --> Subtracao\n3 -->Multiplicacao\n4 -->Divisao\n--> ");
    scanf("%d", &escolha);
    switch(escolha)
      {
      case 1:
        {
        printf("Digite dois numeros");
        printf("--> ");
        scanf("%f", &numero_01);
        printf("\n");
        printf("--> ");
        scanf("%f", &numero_02);
        resultado = Calcular_soma(numero_01, numero_02);
        printf("Resultado --> %.2f\n", resultado);
        break;
        }
      case 2:
        {
        printf("Digite dois numeros");
        printf("--> ");
        scanf("%f", &numero_01);
        printf("\n");
        printf("--> ");
        scanf("%f", &numero_02);
        resultado = Calcular_subtracao(numero_01,numero_02);
        printf("Resultado --> %.2f\n", resultado);
        break;
        }
      case 3:
        {
        printf("Digite dois numeros");
        printf("--> ");
        scanf("%f", &numero_01);
        printf("\n");
        printf("--> ");
        scanf("%f", &numero_02);
        resultado = Calcular_multiplicacao(numero_01,numero_02);
        printf("Resultado --> %.2f\n", resultado);
        break;  
        }
      case 4:
        {
        printf("Digite dois numeros");
        printf("--> ");
        scanf("%f", &numero_01);
        printf("\n");
        printf("--> ");
        scanf("%f", &numero_02);
        resultado = Calcular_divisao(numero_01,numero_02);
        printf("Resultado --> %.2f\n", resultado);
        break;
        }
      }
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &reiniciar);
    if(reiniciar == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return 0;
  }