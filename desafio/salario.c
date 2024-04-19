#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

// Procedimento
void cabecalho()
{
  printf("============================\n");
  printf("|    AUMENTO DO SALARIO    |\n");
  printf("============================\n");
}
//
int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Váriaveis //
  float salario[10], porcento[10], result[10];
  char nome[50][50];
  int cont;
  //

  cabecalho();
  printf("Quantos funcionarios tem na empresa? ");
  scanf("%d", &cont);

  // Leitura de dados //
  for (int i = 0; i < cont; i++)
  {
    system("cls");
    cabecalho();
    printf("NOME : ");
    fflush(stdin);
    gets(nome[i]);
    printf("SALARIO : ");
    scanf("%f.\n", &salario[i]);
    printf("AUMENTO EM PORCENTO : ");
    scanf("%f.\n", &porcento[i]);
  }
  // Definir o salário //
  for (int i = 0; i < cont; i++)
  {
    result[i] = salario[i] + (porcento[i] * (salario[i] / 100));
  }

  // Exibição //
  system("cls");

  cabecalho();

  int func = 1;
  for (int i = 0; i < cont; i++)
  {
    printf("--------Funcionario %d--------\n", func);
    printf("     NOME      : %s\n", nome[i]);
    printf("ANTIGO SALARIO : R$%.2f\n", salario[i]);
    printf(" NOVO SALARIO  : R$%.2f\n", result[i]);
    func++;
  }
  printf("--------------------------------\n");

      return 0;
}
