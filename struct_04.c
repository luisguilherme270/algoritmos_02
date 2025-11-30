#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Pontos
{
float ponto_x;
float ponto_y;
};

struct Retangulo
{
struct Pontos ponto_sup, ponto_inf;
};

float 
Calculo_area(float x_vetor, float y_vetor)
  {
  float calculo = x_vetor * y_vetor;
  if(calculo < 0)
    {
    calculo *= -1;
    }
  return calculo;
  }
float 
Calculo_diagonal(float x_vetor, float y_vetor)
  {
  float calculo = sqrt((x_vetor * x_vetor) + (y_vetor * y_vetor));
  return calculo;
  }
float 
Calculo_perimetro(float x_vetor, float y_vetor)
  {
  float calculo = (x_vetor * 2) + (y_vetor * 2);
  return calculo;
  }

int 
main()
  {
  struct Retangulo valores;
  float diagonal, x_vetor, y_vetor;
  char comecar;
  do
    {
    printf("Deseja iniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite o valores para x e y do ponto superior: ");
      scanf("%f %f", &valores.ponto_sup.ponto_x, &valores.ponto_sup.ponto_y);
      printf("Digite os valores para x e y do ponto inferior: ");
      scanf("%f %f", &valores.ponto_inf.ponto_x, &valores.ponto_inf.ponto_y);
      x_vetor = valores.ponto_sup.ponto_x - valores.ponto_inf.ponto_x;
      y_vetor = valores.ponto_sup.ponto_y - valores.ponto_inf.ponto_y;
      float area = Calculo_area(x_vetor, y_vetor);
      float diagonal = Calculo_diagonal(x_vetor, y_vetor);
      float perimetro = Calculo_perimetro(x_vetor, y_vetor);
      printf("%.2f\n%.2f\n%.2f ", area, diagonal, perimetro);
      }
    
    }while(comecar != 'n');
  return 0;
  }
