// 1.Nome:nome idade altura peso
#include<stdio.h>>

char nome[20];
int idade;
float altura;
int peso;
int u;

int main (){

printf("Digite seu nome! \n");
scanf(" %s", &nome);


printf("Digite sua idade! \n");
scanf(" %d", &idade);


printf("Digite sua altura! \n");
scanf(" %f", &altura);

printf("Digite sua peso! \n");
scanf(" %d", &peso);


	printf (" seu nome e %s \n", nome);
    printf (" sua idade e %d  \n", idade);
	printf (" sua altura e %.2f  \n", altura);
    printf (" seu peso e %d \n", peso);
	

 }
