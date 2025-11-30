#include <stdio.h>
#include <stdlib.h>

struct Atleta_inf
  {
  char nome[100], esporte[100];
  int idade;
  float altura;
  };

int 
main()
  {
  struct Atleta_inf atleta[5];
  struct Atleta_inf temp;
  char comecar;
  do
    {
    printf("Deseja iniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      printf("Digite as informacoes dos atletas: ");
      for(int i = 0; i < 5; i++)
        {
        printf("\nAtleta %d \n", i + 1);
        getchar();
        printf("Nome: ");
        fgets(atleta[i].nome, 100, stdin);
        printf("Esporte: ");
        fgets(atleta[i].esporte, 100, stdin);
        printf("Idade: ");
        scanf("%d", &atleta[i].idade);
        //getchar();
        printf("altura: ");
        scanf("%f", &atleta[i].altura);
        if(atleta[i].altura < 100)
          {
          atleta[i].altura *= 100;
          }
        }
      for(int i = 0; i < 5; i++)
        {
        for(int j = 0; j < 5 - 1; j++)
          {
          if(atleta[j].idade < atleta[j + 1].idade)
            {
            temp = atleta[j];
            atleta[j] = atleta[j + 1];
            atleta[j + 1] = temp;
            }
          }
        }
      for(int i = 0; i < 5; i++)
        {
        printf("Nome: %s", atleta[i].nome);
        }
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
