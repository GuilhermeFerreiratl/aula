// 1.Nome:peça um nome e exiba uma saudação
#include<stdio.h>>

int x= 10;

char nome[35];
char cidade[35];
char idade[35];

int main (){

printf("qual seu nome? \n");
scanf("%s", &nome);

 printf("ola, seja bem vindo! %s \n", nome);

printf("onde voce nasceu? \n");
scanf("%s", &cidade);

 printf("%s e uma bela cidade! \n" , cidade);
 printf("seja bem vindo %s de %s! \n" , nome , cidade);
printf("qual a sua idade? \n");
scanf("%s", &idade);

printf("%s e uma boa idade! " , idade);

  return 0;





}
