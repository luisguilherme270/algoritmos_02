#include <stdio.h>
#include <stdlib.h>

struct Cadastro
  {
  char nome[100];
  int dia, mes, ano;
  };

int
main()
  {
  struct Cadastro pessoa[6];
  int cal_idade[2] = {0}, maior_idade = 0, indice = 0, indice_menor = 0;
  char comecar;
  do
    {
    printf("Deseja iniciar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      for(int i = 0; i < 6; i++)
        {
        printf("Digite seu nome: ");
        getchar();
        fgets(pessoa[i].nome, 100, stdin);
        printf("Digite sua data de nascimento dia/mes/ano, separados por espacos: ");
        scanf("%d %d %d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
        printf("\n");
        cal_idade[i] = (pessoa[i].mes * 30) + (pessoa[i].ano * 365) + (pessoa[i].dia);
        maior_idade = cal_idade[0];
        for(int j = 1; j < 6; j++)
          {
          if(maior_idade > cal_idade[j])
            {
            maior_idade = cal_idade[j];
            indice = j;
            }
          else
            {
            indice_menor = j;  
            }
          }
        }
      printf("Pessoa mais velha: %s", pessoa[indice].nome);
      printf("Pessoa mais nova: %s", pessoa[indice_menor].nome);
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
