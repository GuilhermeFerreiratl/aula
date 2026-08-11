// 1.Nome:peça um nome e exiba uma saudação
#include<stdio.h>>

int x= 10;

char nome[35];
char cidade[35];
char time[35];
char idade[35];
int x;
int y;
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
scanf("%s", &idade);

printf("%s e uma boa idade! " , idade);

printf("qual time voce torce? \n");
scanf("%s", &time);
printf("%s é o melhor time! \n", time);

printf("Digite o primeiro valor");
	  scanf("%d", &x);
	  
	  printf("Digite o segundo valor");
	  scanf("%d", &y);
	  
resultado = x - y ;
printf("voce nasceu em %d ", resultado);


  return 0;





}
