// 1.Nome:peça um nome e exiba uma saudação
#include<stdio.h>>

int x= 10;

char nome[35];
char cidade[35];
char time[35];
int idade;
int a;
int y = 2026;
int resultado;




int main (){

printf("qual seu nome? \n");
scanf("%s", &nome);

 printf("ola, seja bem vindo! %s \n", nome);

printf("onde voce nasceu? \n");
scanf("%s", &cidade);

 printf("%s e uma bela cidade! \n" , cidade);
 printf("seja bem vindo %s de %s! \n" , nome , cidade);
 printf("qual a sua idade? \n");
scanf("%d", &a);

printf("%d e uma boa idade! \n " , a);

printf("qual time voce torce? \n");
scanf("%s", &time);
printf("%s e o melhor time! \n", time);


	  

	  
resultado = y - a ;
printf("voce nasceu em %d ", resultado);


  return 0;





}
