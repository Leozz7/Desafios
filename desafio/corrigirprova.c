#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
void cabecalho()
{
  printf("=====================\n");
  printf("      CORRECAO\n");
  printf("=====================\n");
}
//
void cabecalho1()
{
  printf("=====================\n");
  printf("     GABARITO\n");
  printf("=====================\n");
}
void cabecalho2()
{
  printf("=====================\n");
  printf("LEITURA DAS QUESTOES\n");
  printf("=====================\n");
}
void cabecalho3()
{
  printf("=====================\n");
  printf("     RESULTADO\n");
  printf("=====================\n");
}
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  //
  char gab[15][15], resp[15][15], nome[20][20];
  float nota[20];
  int alunos;
  //
  cabecalho();
  printf("Quantos alunos tem na sala? ");
  scanf("%d.\n", &alunos);

  system("cls");

  cabecalho1();

  for (int i = 1; i < 6; i++)
  {
    printf("Questao %d : ", i);
    fflush(stdin);
    gets(gab[i]);
  }

  system("cls");

  for (int j = 0; j < alunos; j++)
  {
    // O número 1 está dando bug, logo coloquei para pular para 2
     if (j == 1)
    {
      j++;
    }
    //
    cabecalho2();
    printf("NOME DO ALUNO : ");
    fflush(stdin);
    gets(nome[j]);
    //
    printf("\n");
    //
    for (int i = 1; i < 6; i++)
    {
      printf("Questao %d : ", i);
      fflush(stdin);
      gets(resp[i]);

      if (strcmp(resp[i], gab[i]) == 0)
      {
        nota[j] = nota[j] + 2;
      }
    }

    system("cls");
  }

  cabecalho3();

  for (int j = 0; j < alunos; j++)
  {
    // O número 1 está dando bug, logo coloquei para pular para 2
    if (j == 1)
    {
      j++;
    }
    

    if (nota[j] >= 6)
    {
      printf("NOME     : %s\n", nome[j]);
      printf("NOTA     : %.1f\n", nota[j]);
      printf("SITUACAO : APROVADO\n");
      printf("-----------------------\n");
    }
    else
    {
      printf("NOME     : %s\n", nome[j]);
      printf("NOTA     : %.1f\n", nota[j]);
      printf("SITUACAO : REPROVADO\n");
      printf("-----------------------\n");
    }
  }
  system("pause");
  return 0;
}
