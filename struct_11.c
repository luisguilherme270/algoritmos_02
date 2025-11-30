#include <stdio.h>
#include <stdlib.h>

struct 
Data_valida
  {
  int dia, mes, ano;
  };

int 
Calculo_dias(int dias[]) 
  {
  int calculo = dias[0] - dias[1];
  if(calculo < 0)
    {
    calculo *= (-1);
    }
  return calculo;
  }

int
main()
  {
  struct Data_valida data[2];
  int dias[2] = {0};
  char comecar;
  do
    {
    printf("Comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      for(int i = 0; i < 2; i++)
        {
        printf("Digite a %d data, contendo dia, mes e ano, separados por espaco\n", i + 1);
        scanf("%d %d %d", &data[i].dia, &data[i].mes, &data[i].ano);
        while(data[i].dia < 0 || data[i].dia > 31)
          {
          printf("Digitou o dia errado, tente novamente digitar o dia:\n");
          scanf("%d", &data[i].dia);
          }
        while(data[i].mes < 0 || data[i].mes > 12)
          {
          printf("Digitou o mes errado, tente novamente digitar o mes:\n");
          scanf("%d", &data[i].mes);
          }
        while(data[i].ano < 0)
          {
          printf("Digitou o ano errado, tente novamente digitar o ano:\n");
          scanf("%d", &data[i].ano);
          }
        dias[i] = (data[i].dia) + (data[i].mes * 30) + (data[i].ano * 365);
        }
      int resultado_calculo = Calculo_dias(dias);
      printf("Decorreram %d dias entre as datas\n", resultado_calculo);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
