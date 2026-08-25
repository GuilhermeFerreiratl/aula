#include <stdio.h>

float numero;
char nome;
int vaor;
int cartao;
float valor;
float x;
int dim = 10;
int debito;
int credito;
int pix;




int main() {
	
	
	printf("Oque voce gostaria?");
	scanf ("%s", &nome);
	

	
	printf("quantos gostaria?");
	scanf ("%f", &valor);
	
	
  
    
    printf("Digite o valor do produto: ");
    scanf("%f", &x); 

numero =  (x * valor );

    printf("total : %.2f \n", numero);


printf("forma pagamento? ");
printf("1=Debito");
printf("2=credito");
printf("3=pix");
scanf("%d", &dim);

{

switch (dim) {
	
	case 1:
	printf("Debito");
	break;
	case 2:
	printf("credito");
	break;
	case 3:
	printf("pix");
	break;


}
}
 debito  = (numero);
 credito  = ((numero/10)+numero);
 pix = (numero - (numero/10));

if (dim = 1) { printf (" seu maior numero e %d", debito);
 }



    return 0;
}
