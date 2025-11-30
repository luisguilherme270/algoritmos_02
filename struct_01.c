#include <stdio.h>
#include <string.h>

struct 
Dados
  {
  int idade;
  char nome[100];
  char endereco[100];
  };
  
int 
main()
  {
  char comecar;
  int quantidade;
  do
    {
    printf("Deseja comecar o programa: 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar ==  'y')
      {
      printf("Quantas pessoas seram cadastradas? ");
      scanf("%d", &quantidade);
      getchar();
      struct Dados pessoa[quantidade];
      for(int i = 0; i < quantidade; i++)
        {
        printf("Digite os dados da %d pessoa:\n", i + 1  );
        printf("nome: ");
        fgets(pessoa[i].nome, 100, stdin);
        printf("idade: ");
        scanf("%d", &pessoa[i].idade);
        getchar();
        printf("Endereco: ");
        fgets(pessoa[i].endereco, 100, stdin);
        printf("\nCadastrado\n");
        printf("\n");
        }
      for(int j = 0; j < quantidade; j++)
        {
        printf("Os dados informados da %d pessoa\n", j + 1);
        printf("Nome: %s\nidade: %d\nendereco: %s\n", pessoa[j].nome, pessoa[j].idade, pessoa[j].endereco);
        }
      }
    }while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
