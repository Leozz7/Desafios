#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("CALCULADORA\n");
  printf("================\n");
}
int main()
{
  //
  setlocale(LC_ALL, "Portuguese");
  //
  int ope, n1, n2, result;
  //
  cabecalho();
  printf("[1] SOMA\n");
  printf("[2] SUBTRACAO\n");
  printf("[3] MULTI\n");
  printf("[4] DIVISAO\n");
  printf("Qual a operacao que voce quer?");
  scanf("%d", &ope);

  system("cls");
  switch (ope)
  {
  case 1:
    cabecalho();
    printf("DIGITE UM NUMERO : ");
    scanf("%d.\n", &n1);
    printf("DIGITE OUTRO : ");
    scanf("%d.\n", &n2);
    result = n1 + n2;
    printf("A soma desses numeros e %d", result);
    break;

  case 2:
    cabecalho();
    printf("DIGITE UM NUMERO : ");
    scanf("%d.\n", &n1);
    printf("DIGITE OUTRO : ");
    scanf("%d.\n", &n2);
    result = n1 - n2;
    printf("A subtracao desses numeros e %d", result);
    break;

  case 3:
    cabecalho();
    printf("DIGITE UM NUMERO : ");
    scanf("%d.\n", &n1);
    printf("DIGITE OUTRO : ");
    scanf("%d.\n", &n2);
    result = n1 * n2;
    printf("A multiplicacao desses numeros e %d", result);
    break;

  case 4:
    cabecalho();
    printf("DIGITE UM NUMERO : ");
    scanf("%d.\n", &n1);
    printf("DIGITE OUTRO : ");
    scanf("%d.\n", &n2);
    result = n1 / n2;
    printf("A divisao desses numeros e %d", result);
    break;
  }
  return 0;
}
