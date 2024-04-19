#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("======================\n");
  printf("     NOTA FINAL\n");
  printf("======================\n");
}
//
int main()
{
  setlocale(LC_ALL, "Portuguese");

  // Variaveis
  char nome[20];
  float lab, aval, exame, media;
  //
  cabecalho();
  printf("NOME     : ");
  fflush(stdin);
  gets(nome);
  printf("------------------\n");
  printf("     NOTAS\n");
  printf(" TRABALHO LAB [2]: ");
  scanf("%f.\n", &lab);
  printf("AV. SEMESTRAL [3]: ");
  scanf("%f.\n", &aval);
  printf(" EXAME FINAL [5] : ");
  scanf("%f.\n", &exame);

  media = lab + aval + exame;

  if (lab > 2 || lab < 0 || aval > 3 || aval < 0 || exame > 5 || exame < 0)
  {
    system("cls");
    cabecalho();
    printf("ALGUMA INFORMACAO FOI INFORMADA ERRADA !!!");
  }
  else
  {
    if (media >= 8)
    {
      system("cls");
      cabecalho();
      printf("  NOME   : %s\n", nome);
      printf("  NOTA  : %.1f\n", media);
      printf("CONCEITO : A\n");
    }
    else if (media >= 7 && media < 8)
    {
      system("cls");
      cabecalho();
      printf("  NOME   : %s\n", nome);
      printf("  NOTA  : %.1f\n", media);
      printf("CONCEITO : B\n");
    }
    else if (media >= 6 && media < 7)
    {
      system("cls");
      cabecalho();
      printf("  NOME   : %s\n", nome);
      printf("  NOTA  : %.1f\n", media);
      printf("CONCEITO : C\n");
    }
  else if (media >= 5 && media < 6)
  {
    system("cls");
    cabecalho();
    printf("  NOME   : %s\n", nome);
    printf("  NOTA  : %.1f\n", media);
    printf("CONCEITO : D\n");
  }
  else if (media < 5)
  {
    system("cls");
    cabecalho();
    printf("  NOME   : %s\n", nome);
    printf("  NOTA  : %.1f\n", media);
    printf("CONCEITO : E\n");
  }
  
  
  }
  return 0;
}
