#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float 
baskara(float a, float b, float c)
  {
  float valor_01 = (b * b);
  float valor_02 = (-4 * a * c);
  float valor_03 = valor_01 + valor_02;
  float x1 = (-b + sqrt(valor_03)) / (2 * a);
  return x1; 
  }

float 
baskara_02(float a, float b, float c)
  {
  float valor_01 = (b * b);
  float valor_02 = (-4 * a * c)
  float valor_03 = valor_01 + valor_02;
  float x2 = (-b - sqrt(valor_03)) / (2 * a));
  return x2;
  }

int
main()
  {
  float letra_a, letra_b, letra_c;
  printf("Digite o valor do A:");
  scanf("%f", &letra_a);
  printf("Digite o valor do B");
  scanf("%f", &letra_b);
  printf("Digite o valordo C");
  scanf("%f", &letra_c);
  
  int resultado_01 = baskara(letra_a,letra_b,letra_c);
  int resultado_02 = baskara_02(letra_a,letra_b,letra_c);

  printf("valor de x1 eh: %d\n", resultado_01);
  printf("valor de x2 eh: %d\n", resultado_02);
  return 0;
  }