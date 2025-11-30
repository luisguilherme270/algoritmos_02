#include <stdio.h>
#include <stdbool.h>

int 
Calcular_fibonacci(int valor)
  {
  if(valor <= 0)
    {
    return 0;
    }
  if(valor == 1)
    {
    return 1;
    }
  if(valor > 1)
    {
    return (Calcular_fibonacci(valor - 1)) + (Calcular_fibonacci(valor -2));
    }
  }

int
main()
  {
  bool menu = true;
  do
    {
    int tamanho, resultado;
    char escolha;

    printf("Digite o tamanho da sequencia de fibonacci --> ");
    scanf("%d", &tamanho);
    resultado = Calcular_fibonacci(tamanho);
    printf("Resultado --> %d\n", resultado);
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