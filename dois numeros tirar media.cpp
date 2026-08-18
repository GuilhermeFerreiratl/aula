// 1.Nome:DOIS NUMEROS de a media e >70 aprovado senao reprovado
#include<stdio.h>>

int x;
int y;
int resultado;

int main (){

printf("primeiro numero? \n");
scanf("%d", &x);

printf("segundo numero? \n");
scanf("%d", &y);
 
resultado = (x + y) / 2;
 
if (resultado >= 70) {
	printf ("APROVADO, Sue media foi : %d", resultado);
}
else if (resultado < 70) { 
printf ("REPROVADO, Sue media foi : %d", resultado);
   return 0;

 }
}





