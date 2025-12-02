#include <stdio.h>
#include <stdlib.h>

struct Clientes
  {
  int cod_cli, fone; 
  char nome[100], endereco[100];
  };

struct Recebimentos
  {
  int num_doc, valor_doc, data_Emissao, data_Vencimento, cod_Cli;
  };

int
main()
  {
  int quant_clientes; 
  printf("Digite a quantidade de clientes para cadastrar --> ");
  scanf("%d", &quant_clientes);
  struct Clientes pessoas[quant_clientes];
  for(int i = 0; i < quant_clientes; i++)
    {
    printf("Digite os dados do %d cliente\n", i + 1);
    printf("Codigo de cliente --> ");
    scanf("%d", &pessoas[i].cod_cli);
    getchar();
    printf("Nome --> ");
    fgets(pessoas[i].nome, 100, stdin);
    printf("Endereco --> ");
    fgets(pessoas[i].endereco, 100, stdin);
    printf("Telefone --> ");
    scanf("%d", &pessoas[i].fone);
    }
  FILE *clientes = fopen("clientes.txt", "wr");
  if(clientes == NULL)
    {
    printf("Erro ao criar o arquivo");
    return 1;
    }
  for(int i = 0; i < quant_clientes; i++)
    {
    fprintf(clientes, "Dados:\ncliente %d\n", i + 1);
    fprintf(clientes, "Nome --> %s", pessoas[i].nome);
    fprintf(clientes, "Endereco --> %s", pessoas[i].endereco);
    fprintf(clientes, "codigo --> %d\n", pessoas[i].cod_cli);
    fprintf(clientes, "Telefone --> %d\n", pessoas[i].fone);
    }
  fclose(clientes);
  return 0;
  }

