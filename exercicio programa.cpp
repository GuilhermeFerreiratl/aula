#include <stdio.h>

float numero;
char nome[50]; 
float valor;   
float x;     
int dim;       

float debito; 
float credito; 
float pix;     

int main() {
    
    printf("O que voce gostaria? ");
    scanf("%s", nome);
    
    printf("Quantos gostaria? ");
    scanf("%f", &valor);
    
    printf("Digite o valor do produto: ");
    scanf("%f", &x); 

    numero = (x * valor);
    printf("Total: %.2f \n\n", numero);

    printf("Forma de pagamento?\n");
    printf("1 = Debito\n");
    printf("2 = Credito (10%% de juros)\n");
    printf("3 = Pix (10%% de desconto)\n");
    printf("Opcao: ");
    scanf("%d", &dim);

   
    debito = numero;
    credito = numero + (numero * 0.10);
    pix = numero - (numero * 0.10);

    printf("\n--- Recibo ---\n");
    switch (dim) {
        case 1:
            printf("Forma: Debito\n");
            printf("Total a pagar: R$ %.2f\n", debito);
            break;
        case 2:
            printf("Forma: Credito\n");
            printf("Total a pagar: R$ %.2f\n", credito);
            break;
        case 3:
            printf("Forma: Pix\n");
            printf("Total a pagar: R$ %.2f\n", pix);
            break;
        default:
            printf("Opcao de pagamento invalida!\n");
            break;
    }

    return 0;
}
