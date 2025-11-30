#include <stdio.h>
#include <stdlib.h>

int 
conver_anos_dias(int idade_anos)
  {
  int anos_dias = idade_anos * 365;
  return anos_dias;
  }
  
int 
conver_meses_dias(int idade_meses)
  {
  int meses_dias = idade_meses * 30;
  return meses_dias;
  }

int 
main()
  {
  int idade_anos, idade_meses, idade_dias; 
  int resultado_final;
  printf("Digite a sua idade em anos, meses e dias ");
  scanf("%d %d %d", &idade_anos, &idade_meses, &idade_dias);
  
  resultado_final = conver_anos_dias(idade_anos) + conver_meses_dias(idade_meses) + idade_dias;
  printf("A idade total em dias eh: %d", resultado_final);
  return 0;
  }
