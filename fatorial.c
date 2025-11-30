#include <stdio.h>
#include <stdbool.h>

int Calcular_fatorial(int fatorial)
  {
  if(fatorial <= 1)
    {
    return 1;
    }
  else
    {
    int resultado = fatorial * (Calcular_fatorial(fatorial -1));
    return resultado;
    }
  }

int
main()
  {
  bool menu = true;
  do
    {
    int tamanho;
    printf("Digite o tamanho do fatorial --> ");
    scanf("%d", &tamanho);
    int Resultado = Calcular_fatorial(tamanho);
    printf("Resultado --> %d \n", Resultado);
    char escolha;
    printf("Deseja reiniciar o programa 'y/n' --> ");
    scanf(" %c", &escolha);
    if(escolha == 'n')
      {
      menu = false;
      }
    }while(menu);
  printf("Fim da execucao");
  return (0);
  }