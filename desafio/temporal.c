#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("=================\n");
  printf("   CRONOMETRO\n");
  printf("=================\n");
}
int main()
{
  setlocale(LC_ALL ,"Portuguese");
  //
  int seg;
  float min, hr;
  //
cabecalho();
printf("Quantos segundos se passaram ? ");
scanf("%d.", &seg);

min = seg/60;
hr = min/60;

system("cls");

 cabecalho();
 printf("  HORAS  : %.1f\n", hr);
 printf(" MINUTOS : %.1f\n", min);
 printf("SEGUNDOS : %d\n", seg);



  return 0;
}
