#include<stdio.h>>

  char nome[10];
    int idade;
    float altura;
    int op = 3;

int main()

{
  

    

    printf("\nInsira seu nome: ");
    scanf("%s", &nome); // %d para %s e &

    printf("\nInsira sua idade: ");
    scanf("%d", &idade); //%s para %d

    printf("\nInsira sua altura: ");
    scanf("%f", &altura); 

    if(idade >= 16 && altura >= 1.60){
        printf("\nEntrada permitida para o brinquedo");
    printf("\nNome: %s", &nome); // %d para %s
printf("\n --- PARQUE DE DIVERSAO --- \n"); // adicionei as variaveis e inverti as variaveis
    printf("escolha um brinquedo?\n");
    printf("1 = Montanha Russa\n");
    printf("2 = The King\n");
    printf("3 = Kamikaze\n");
    printf("4 = Booster\n");
    printf("Opcao: ");
    scanf("%d", &op);



    switch (op){
        case 1:
            printf("\nMontanha Russa");
            break;

        case 2:
            printf("\nThe King");
            break;

        case 3:
            printf("\nKamikaze");
            break;

        case 4:
            printf("\nBooster");
            break;

        default:
            printf("\nOpcao invalida");
}
}
    
    else{
        printf("\nEntrada negada para o brinquedo"); //se negar encerra se autorizar escolhe brinquedo
    }

   
    return 0;
}
