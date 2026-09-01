#include <stdio.h>

int main()
{
    char jogador[30];
    char idade;
    char numero;
    float salario;
    float altura;

    printf("\n===== CADASTRO DE JOGADOR =====");

    printf("\n\nDigite o nome do jogador: ");
    scanf("%s", jogador);

    printf("\nDigite a idade: ");
    scanf("%s", &idade);

    printf("\nDigite o numero da camisa: "); //adicionei &
    scanf("%s", &numero);

    printf("\nDigite a altura: ");
    scanf("%f", &altura); //%d para %f

    printf("\nDigite o salario: ");
    scanf("%f", &salario);

    if(idade >= 18 && altura >= 1.80)
    {
        printf("\nJogador aprovado!");
    }
    else
    {
        printf("\nJogador reprovado!");
    }

    if(numero > 0 && numero < 100);
    {
        printf("\nNumero da camisa valido!");
    }

    printf("\n\n===== DADOS DO JOGADOR =====");

    printf("\nNome: %s", &jogador); // adicionei &
    printf("\nIdade: %s", &idade);
    printf("\nCamisa: %s", &numero);
    printf("\nAltura: %.2f", &altura);
    printf("\nSalario: %f", &salario);

    return 0;
}
