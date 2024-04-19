#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("MEDIA DE NUMEROS : \n");
  printf("=====================\n");
}
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  float n[10], soma, m;
  char conti[3];
  int compara;
  int quant = 2;
  int i = 2;
  //
  cabecalho();
  printf("Digite um numero : ");
  scanf("%f. \n", &n[0]);
  printf("Digite outro : ");
  scanf("%f. \n", &n[1]);
  soma = n[0] + n[1];

  printf("Quer digitar outro numero? [S/N]");
  fflush(stdin);
  gets(conti);

  compara = strcmp(conti, "S");

  if (compara == 0)
  {
    for (; compara == 0;)
    {
      system("cls");

      cabecalho();
      printf("Digite o numero : ");
      scanf("%f. \n", &n[i]);
      soma = soma + n[i];
      quant++;

      printf("Quer digitar outro numero? [S/N]");
      fflush(stdin);
      gets(conti);
      compara = strcmp(conti, "S");
    }
  }
  //
  m = soma / quant;

  system("cls");

  cabecalho();
  printf("A media desses numeros e %.2f.", m);

  return 0;
}
