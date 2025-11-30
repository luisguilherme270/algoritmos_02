#include <stdio.h>
#include <stdlib.h>

struct Tempo
  {
  int horas, minutos, segundos;
  };

int 
main()
  {
  struct Tempo relogio[5];
  int segundos[5] = {0}, maior_hora = 0, indice = 0;
  char comecar;
  do
    {
    printf("Deseja iniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      for(int i = 0; i < 5; i++)
        {
        getchar();
        printf("\nDigite a hora, minuto e segundos: ");
        scanf("%d %d %d", &relogio[i].horas, &relogio[i].minutos, &relogio[i].segundos);

        segundos[i] = (relogio[i].horas * 3600) + (relogio[i].minutos * 60) + (relogio[i].segundos);

        int maior_hora = segundos[0];

        for(int j = 1; j < 5; j++)
          {
          if(segundos[j] > maior_hora)
            {
            maior_hora = segundos[j];
            indice = j;
            }
          }
        }
      printf("\nA maior hora digitada foi: %d : %d : %d\n", relogio[indice].horas, relogio[indice].minutos, relogio[indice].segundos);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }