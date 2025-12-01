#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

struct Clientes
  {
  int cod_cli, fone; 
  char *nome, *endereco;
  };

struct Recebimentos
  {
  int num_doc, valor_doc, data_Emissao, data_Vencimento, cod_Cli;
  };

int
main()
  {
  FILE *clientes = fopen("clientes.txt", "w");
  if(clientes == NULL)
    {
    return (1);
    }
  fclose(clientes);
  FILE *recebimentos = fopen("recebimentos.txt" , "w");
  if(recebimentos == NULL)
    {
    return (1);
    }
  fclose(recebimentos);
  printf("Arquivos criados\nFim da execucao");
  system("clear");
  return (0);
  }
