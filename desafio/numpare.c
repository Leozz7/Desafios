#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <strings.h>
//
int main()
{
  int n1, soma, compara;
  char conti[20];

  printf("SOMA DE PARES\n");
  printf("----------------\n");

  {
    for (; compara == 0;)
    {
      printf("Digite um numero diferente de 0 : ");
    scanf("%d", &n1);
    if (n1 % 2 == 0)
    {
      soma += n1;
    }
    printf("Voce quer digitar outro? [S/N]");
    fflush(stdin);
    gets(conti);

    compara = strcmp(conti, "S");
    }
  }
  

  printf("A soma dos numeros pares informados e %d", soma);
  return 0;
}
