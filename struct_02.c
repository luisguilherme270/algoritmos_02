#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem
das coordenadas, isto é, a posição (0,0)*/

struct 
Coordenadas
  {
  float ponto_x;
  float ponto_y;
  };

int
main()
  {
  float ponto_1, ponto_2;
  float base = 2;
  char comecar;
  float distancia;
  struct Coordenadas pontos;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar ==  'y')
      {
      printf("Digite os pontos x e y: ");
      scanf("%f %f", &pontos.ponto_x, &pontos.ponto_y);
      ponto_1 = 0 - pontos.ponto_x;
      ponto_2 = 0 - pontos.ponto_y;
      distancia = sqrt((ponto_1 * ponto_1) + (ponto_2 * ponto_2));
      printf("A distancia até o ponto 0,0 eh %f\n", distancia);
      }
    }while(comecar != 'n');
  return 0;
  }
