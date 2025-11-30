/**Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct 
Coordenadas
  {
  float ponto_x1;
  float ponto_y1;
  float ponto_x2;
  float ponto_y2;
  };

int
main()
  {
  struct Coordenadas pontos;
  char comecar;
  float distancia, x, y;

  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite os pontos x1 e y1: ");
      scanf("%f %f", &pontos.ponto_x1, &pontos.ponto_y1);
      printf("Digite agora mais dois pontos x2 e y2: ");
      scanf("%f %f", &pontos.ponto_x2, &pontos.ponto_y2);
      //distancia vai ser --> d = raiz(x2 - x1)² + (y2 - y1)²
      x = pontos.ponto_x2 - pontos.ponto_x1;
      y = pontos.ponto_y2 - pontos.ponto_y1;
      distancia = sqrt((x * x) + (y * y));
      printf("A distancia entre os pontos eh: %.2f\n", distancia);
      }
    }while(comecar != 'n');
  return 0;
  }