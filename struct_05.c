#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Pontos
  {
  float ponto_x, ponto_y;
  };
struct Retangulo
  {
  struct Pontos ponto_sup,ponto_inf,ponto_usuario;
  };

void
Verificacao_coordenadas(float x_max, float x_min, float y_max, float y_min, float x, float y)
  {
  if((x >= x_min && x <= x_max) && (y >= y_min && y <= y_max))
    {
    printf("O ponto esta dentro do retangulo\n");
    }
  else
    {
    printf("O ponto nao esta dentro do retangulo\n");
    }
  }

int
main()
  {
  struct Retangulo coordenadas;
  char comecar;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite os valores de x e y para o ponto superior: ");
      scanf("%f %f", &coordenadas.ponto_sup.ponto_x, &coordenadas.ponto_sup.ponto_y);
      printf("Digite agora os valores de x e y para o ponto inferior: ");
      scanf("%f %f", &coordenadas.ponto_inf.ponto_x, &coordenadas.ponto_inf.ponto_y);
      printf("Agora digite um ponto(x,y), para saber se esta no retangulo: ");
      scanf("%f %f", &coordenadas.ponto_usuario.ponto_x, &coordenadas.ponto_usuario.ponto_y);
      float x = coordenadas.ponto_usuario.ponto_x, y = coordenadas.ponto_usuario.ponto_y;
      float x_max = fmaxf(coordenadas.ponto_sup.ponto_x, coordenadas.ponto_inf.ponto_x);
      float x_min = fminf(coordenadas.ponto_sup.ponto_x, coordenadas.ponto_inf.ponto_x);
      float y_max = fmaxf(coordenadas.ponto_sup.ponto_y, coordenadas.ponto_inf.ponto_y);
      float y_min = fminf(coordenadas.ponto_sup.ponto_y, coordenadas.ponto_inf.ponto_y);
      Verificacao_coordenadas(x_max, x_min, y_max, y_min, x, y);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }