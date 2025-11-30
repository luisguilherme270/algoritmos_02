#include <stdio.h>
#include <stdlib.h>

struct Cadastro
  {
  int numero_matricula;
  char nome[100];
  float notas[3];
  };
int
main()
  {
  struct Cadastro alunos[5]; 
  char comecar;
  float media[5] = {0}, soma_notas[5] = {0}, maior_media = 0;
  int indice = 0, contacao = 0;
  do
    {
    while(contacao <= 100)
      {
      printf("-");
      contacao++;
      }
    printf("\n");
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    printf("\n");
    if(comecar == 'y')
      {
      for(int i = 0; i < 5; i++)
        {
        printf("\nDigite o seu numero de matricula: ");
        scanf("%d", &alunos[i].numero_matricula);
        printf("Digite tambem o seu nome: ");
        getchar();
        fgets(alunos[i].nome, 100, stdin);
        printf("Digite agora tres notas: "); 
        for(int j = 0; j < 3; j++)
          {
          scanf("%f", &alunos[i].notas[j]);
          soma_notas[i] += alunos[i].notas[j];
          }
        media[i] = soma_notas[i] / 3;
        maior_media = media[0];
        for(int j = 1; j < 5; j++)
          {
          if(media[j] > maior_media)
            {            
            maior_media = media[j];
            indice = j;
            }
          }
        printf("Media: %f\n", media[i]);
        }
      printf("\nAluno com a maior media e suas notas\n");
      printf("Nome: %s", alunos[indice].nome);
      printf("Notas: ");
      for(int i = 0; i < 3; i++)
        {
        printf("%.2f ", alunos[indice].notas[i]);
        }
      printf("\n");
      int contador = 0;
      while(contador <= 100)
        {
        printf("-");
        contador++;
        }
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
