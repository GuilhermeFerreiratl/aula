#include<stdio.h>
char senha;
int valor_um;
int tentativa =0;
int main(){
	
	do {
	printf("Digite sua senha \n");
	scanf("%s", &senha);
	
if( senha != 'abc'){
		printf("Senha incorreta \n");	
		tentativa ++;
		}
	}
	while(senha != 'abc' && tentativa <3);
	if (senha == 'abc'){
		printf("Acesso permitido");
	} else {printf("Acesso bloqueado");
	}
	
	
	
	return 0;

}
