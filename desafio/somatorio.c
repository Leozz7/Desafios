#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  int soma = 0;
  //
  for (int i = 0; i <= 10; i++)
  {
    soma = soma + i;
  }
  printf("A soma de todos os numeros de 0 a 10 e %d", soma);
  return 0;
}
