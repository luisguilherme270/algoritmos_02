#include <stdio.h>
#include <stdlib.h>

/*Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e
retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura.
Solicite também que o usuário digite os dados desse vetor dentro da função*/

struct
Cadastro
  {
  char nome[100];
  int idade;
  char endereco[100];
  };
  
struct Cadastro *Alocar_STRUCT(int nro)
  {
  struct Cadastro* Pessoas;

  Pessoas = (struct Cadastro *)malloc(sizeof(struct Cadastro) * nro);

  printf("Pediremos alguns dados seu.\n");
  
  for(int i = 0; i < nro; i++)
    {

    printf("Registro pessoa %d\n", i + 1);

    printf("Nome: ");
    fgets(Pessoas[i].nome, 100, stdin);


    printf("Idade: ");
    scanf("%d" , &Pessoas[i].idade);
    getchar();  
  
    printf("Endereco: ");
    fgets(Pessoas[i].endereco, 100, stdin);

    printf("\nNome: %s" , Pessoas[i].nome);
    printf("Idade: %d\n" , Pessoas[i].idade);
    printf("endereco %s\n" , Pessoas[i].endereco);

     printf("Registro pessoa %d concluido.\n", i + 1);

    printf("\n");
    }

  return Pessoas;
  }

int
main()
  {
  int nro;
  struct Cadastro *Receber;
  
  printf("Digite a qnt de alunos que queira registrar.\n");
  printf(">>> ");
  scanf("%d" , &nro);
  getchar();
  
 Receber = Alocar_STRUCT(nro);

  return 0;
  }
