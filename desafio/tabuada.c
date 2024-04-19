#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("====================\n");
  printf("     TABUADA\n");
  printf("====================\n");
}
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
//
int n1, result;
//
  cabecalho();
  printf("Qual numero voce quer saber a tabuada? ");
  scanf("%d", &n1);

  system("cls");

  cabecalho();
  for (int i = 0; i <= 10; i++)
  {
    result = n1 * i;
    printf("%d x %d = %d\n", n1, i, result);
  }
  
  return 0;
}
