#include <stdio.h>

int 
main()
  {
  char comecar;
  do
    {
    int numeros[5];
    int *ponteiro_dos_numeros_do_vetor_de_cinco_numeros_inteiros = &numeros[0];
    printf("Digite cinco numeros inteiros: ");
    for(int contador = 0; contador < 5; contador++)
      {
      scanf("%d", &numeros[contador]); 
      *(ponteiro_dos_numeros_do_vetor_de_cinco_numeros_inteiros + contador) *= 2;
      }
    int j = 0;
    while(j < 5)
      {
      printf("%d ", numeros[j]);
      j++;
      }
    printf("\nDeseja reiniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    }
  while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
