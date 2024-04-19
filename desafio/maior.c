#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>
//
void cabecalho() 
{
  printf("===================\n");
  printf("   MAIOR NUMERO \n");
  printf("===================\n");
}
//
int main()
{
  //
  setlocale(LC_ALL,"Portuguese");
  //
  float n1, n2;
  //
  cabecalho();
  printf("Informe um numero : ");
  scanf("%f", &n1);
  printf("Informe outro : ");
  scanf("%f", &n2);

  if (n1 > n2)
  {
    printf("%.1f e maior que %.1f", n1, n2);
  }
  else if (n2 > n1)
  {
    printf("%.1f e maior que %.1f", n2, n1);
  }
  else if (n1 == n2)
  {
    printf("Os dois numeros sao iguais");
  }
  
  
  
  

  return 0;
}
