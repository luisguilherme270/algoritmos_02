#include <stdio.h>
#include <stdlib.h>

float 
media()
  {
  float numeros;
  int parar = 1, contador = 0;
  float soma = 0, media_final;
  while(parar != 0)
    {
    printf("Digite um valor: ");
    scanf("%f", &numeros);
    printf("\nDeseja colocar outro valor: 1 - sim, 0 - nao: ");
    scanf("%d", &parar);
    contador++;
    soma += numeros;
    }
  media_final = soma / contador;
  return media_final;
  }

int
main()
  {
  char encerrar;
  float media_final_1 = 0, numeros;
  do
    {
    printf("Deseja encerrar o programa 'y/n'");
    scanf(" %c", &encerrar);
    if(encerrar == 'n')
      {
      media_final_1 = media();
      printf("media: %.1f ", media_final_1);
      }
    }
  while(encerrar != 'y');
  return 0;
  }
