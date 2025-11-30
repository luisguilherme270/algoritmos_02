#include <stdio.h>
#include <stdlib.h>

int 
main()
  {
  char comecar;
  int idade, cont_maiores = 0, idade_menores = 0, cont_menores = 0;
  float media;
  do
    {
    printf("Deseja comecar o programa 'y/n': ");
    scanf(" %c", &comecar);
    if(comecar == 'y')
      {
      do
        {
        printf("Digite a idade da pessoa ou digite 0 para encerrar: ");
        scanf("%d", &idade);
        if(idade > 0 && idade < 18)
          {
          idade_menores += idade;
          cont_menores++;
          }
        if(idade >= 18)
          {
          cont_maiores++;
          }
        printf("Registrado \n");
        }
        while(idade != 0);
      media = idade_menores / cont_menores;
      printf("Voce registrou %d,pessoas maiores de idade\n", cont_maiores);
      printf("Voce registrou %d,pessoas menores de idade\n A media dos menores de idade eh: %.1f", cont_menores, media);
      printf("\n");
      }
    }
    while(comecar != 'n');
  printf("Fim da execucao");
  return 0;
  }
