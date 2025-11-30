#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Aluno
  {
  int n_matricula;
  char nome[100];
  float notas[3];

  };

int
main()
  {
  struct Aluno aluno;
  printf("endereco da struct --> %p \n", &aluno);
  printf("tamanho da struct --> %d bytes\n", sizeof(aluno));
  return (0);
  }