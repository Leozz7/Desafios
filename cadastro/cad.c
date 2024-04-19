#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("=====================\n");
  printf(" CADASTRO DE PESSOAS\n");
  printf("=====================\n");
}
//
int main()
{
  char nome[30][30], email[30][30], conti[5], pesquisa[5], nomef[30], emailf[30];
  char cpf[30][30];
  int j, exibicao;
  int compara, pesqui;
  int compara2 = 1;

  cabecalho();
  printf("NOME : ");
  fflush(stdin);
  gets(nome[0]);

  printf("\nEMAIL : ");
  fflush(stdin);
  gets(email[0]);

  printf("\nCPF : ");
  gets(cpf[0]);

  printf("Quer continuar? [S/N]");
  gets(conti);

  compara = strcmp(conti, "S");

  j = 1;

  for (; compara == 0; j++)
  {
    system("cls");

    cabecalho();
    printf("NOME : ");
    fflush(stdin);
    gets(nome[j]);

    printf("\nEMAIL : ");
    fflush(stdin);
    gets(email[j]);

    printf("\nCPF : ");
    gets(cpf[j]);

    printf("Quer continuar? [S/N]");
    scanf("%s.\n", conti);

    compara = strcmp(conti, "S");
  }

  system("cls");

  printf("==========================\n");
  printf("   PESSOAS CADASTRADAS\n");
  printf("==========================\n");

  printf("O que voce quer : \n");
  printf("[1] Exibir todos\n");
  printf("[2] Realizar uma pesquisa\n");
  scanf("%d", &exibicao);

  switch (exibicao)
  {
  case 1:
    system("cls");

    printf("==========================\n");
    printf("   PESSOAS CADASTRADAS\n");
    printf("==========================\n");

    for (int i = 0; i < j; i++)
    {
      printf("NOME  : %s\n", nome[i]);
      printf("EMAIL : %s\n", email[i]);
      printf(" CPF  : %s\n", cpf[i]);
      printf("----------------------------\n");
    }
    break;
  case 2:
    system("cls");

    printf("==========================\n");
    printf("   PESSOAS CADASTRADAS\n");
    printf("==========================\n");

    printf("Voce quer realizar por nome[N] ou email[E]? ");
    fflush(stdin);
    gets(pesquisa);

    pesqui = strcmp(pesquisa, "N");

    if (pesqui == 0)
    {
      printf("\nNOME : ");
      fflush(stdin);
      gets(nomef);

      for (int i = 0; compara2 == 0; i++)
      {
        compara2 = strcmp(nome[i], nomef);

        if (compara2 == 0)
        {
          system("cls");

          printf("==========================\n");
          printf("   PESSOAS CADASTRADAS\n");
          printf("==========================\n");

          printf("NOME  : %s\n", nome[i]);
          printf("EMAIL : %s\n", email[i]);
          printf(" CPF  : %s\n", cpf[i]);
          printf("----------------------------\n");
          system("pause");
        }
      }
    }
    else
    {
      printf("\nEMAIL : ");
      fflush(stdin);
      gets(emailf);

      for (int i = 0; compara2 == 0; i++)
      {
        compara2 = strcmp(email[i], emailf);

        if (compara2 == 0)
        {
          system("cls");

          printf("==========================\n");
          printf("   PESSOAS CADASTRADAS\n");
          printf("==========================\n");

          printf("NOME  : %s\n", nome[i]);
          printf("EMAIL : %s\n", email[i]);
          printf(" CPF  : %s\n", cpf[i]);
          printf("----------------------------\n");

          compara2 = strcmp(email[i], emailf);
        }
      }
    }

    break;
    
  default:
    break;
  }
  return 0;
}