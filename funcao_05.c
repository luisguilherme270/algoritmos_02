#include <stdio.h>
#include <stdlib.h>

float 
conversao_horas(float tempo_total)
  {
  float conver_hor = tempo_total / 3600;
  return conver_hor;
  }
float
conversao_minutos(float tempo_total)
  {
  float conver_min = ((int)tempo_total % 3600) / 60;
  return conver_min;
  }
float
conversao_segundos(float tempo_total)
  {
  float conver_segun = (int)tempo_total % 60;
  return conver_segun;
  }


int 
main()
  {
  float tempo_total, horas, minutos;
  int result_horas, result_minutos, result_segundos;
  printf("Digite o tempo em segundos: ");
  scanf("%f", &tempo_total);
  result_horas = conversao_horas(tempo_total);
  result_minutos = conversao_minutos(tempo_total);
  result_segundos = conversao_segundos(tempo_total);
  
  printf("%d : %d : %d ", result_horas, result_minutos, result_segundos);
  return 0;
  }
