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
      int altura_temp = atleta[0].altura;
      int indice = 0, indice_2 = 0, idade_temp = atleta[0].idade;

      for(int j = 1; j < 5; j++)
        {
        if(altura_temp < atleta[j].altura)
          {
          altura_temp = atleta[j].altura;
          indice = j;
          printf("%d", indice);
          }
        if(idade_temp < atleta[j].idade)
          {
          idade_temp = atleta[j].idade;
          indice_2 = j;
          }
        }
      printf("\n");
      printf("A pessoa mais alta eh: %s", atleta[indice].nome);
      printf("\nA pessoa mais velha eh: %s", atleta[indice_2].nome);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
