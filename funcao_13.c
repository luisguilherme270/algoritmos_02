#include <stdio.h>
#include <stdlib.h>

void
recebimento(char tipo_triangulo)
  {
  switch(tipo_triangulo)
    {
    case 'A':
      {
      printf("Triangulo Equilatero \n");
      break;
      }
    case 'B':
      {
      printf("Triangulo Escaleno \n");
      break;
      }
    case 'C':
      {
      printf("Triangulo Isosceles \n");
      break;
      }
    }
  }

char
verificacao(float lado_x, float lado_y, float lado_z)
  {
  if((lado_x < lado_y + lado_z) && (lado_y < lado_z + lado_x) && (lado_z < lado_x + lado_y))
    {
    printf("Eh triangulo\n");
    if((lado_x == lado_y) && (lado_y == lado_z) && (lado_z == lado_x))
      {
      return 'A';
      }
    if((lado_x != lado_y) && (lado_y != lado_z) && (lado_z != lado_x))
      {
      return 'B';
      }
    if((lado_x == lado_y && lado_x != lado_z) || (lado_y == lado_z && lado_y != lado_x) || (lado_z == lado_x && lado_z != lado_y))
      {
      return 'C';
      }
    }
  else
    {
    printf("Nao eh triangulo\n");
    return 0;
    }
  }

int 
main()
  {
  char comecar;
  do
    {
    printf("Deseja ir para a execucao do programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      float x, y, z;
      char tipo_triangulo;
      printf("Digite os valores dos lados do triangulo: ");
      scanf("%f\n%f\n%f", &x, &y , &z);
      tipo_triangulo = verificacao(x, y, z); 
      recebimento(tipo_triangulo);
      }  
    }
  while(comecar != 'n');
  return 0;
  }
