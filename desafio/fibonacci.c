#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  int n1 = 1;
  int n2 = 1;
  int n3 = 0;
  //
  printf("SEQUENCIA DE FIBONACCI\n");
  printf("------------------------------\n");
  printf("%d  ", n3);
  printf("%d  ", n2);
  printf("%d  ", n1);
  for (int i = 0; i <= 15; i++)
  {
   n3 = n1 + n2;
   n1 = n2;
   n2 = n3;
  printf("%d  ", n3);
  }

  return 0;
}
