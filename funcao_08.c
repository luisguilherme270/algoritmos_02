#include <stdio.h>
#include <stdlib.h>
char 
categorias(int idade)
  {
  if(idade >= 5 && idade <= 7)
    {
    return 'A';
    }
  if(idade > 7 && idade <= 10)
    {
    return 'B';
    }
  if(idade > 10 && idade <= 13)
    {
    return 'C';
    }
  if(idade > 13 && idade <= 17)
    {
    return 'D';
    }
  if(idade >= 18)
    {
    return 'E';
    }
  if(idade < 5)
    {
    return 'z';
    }
  }

int 
main()
  {
  int idade, recebimento;
  char rec_categorias;
  retornar:
  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);
  rec_categorias = categorias(idade);
  switch(rec_categorias)
    {
    case 'A':
      {
      printf("Infantil A\n");
      break;
      } 
    case 'B':
      {
      printf("Infantil B\n");
      break;
      }
    case 'C':
      {
      printf("Juvenil A\n");
      break;
      }
    case 'D':
      {
      printf("Juvenil B\n");
      break;
      }
    case 'E':
      {
      printf("Adulto\n");
      break;
      }
    case 'z':
      {
      goto retornar;
      }
    }
  return 0;
  }
