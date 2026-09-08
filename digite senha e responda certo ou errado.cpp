#include<stdio.h>>

int guilherme;
int aula = 0;

int main(){
	
printf("Digite sua senha?");
scanf("%d", &guilherme);	
	
	if(guilherme != 2468){
		printf("Senha incorreta");
		aula ++;
	}
	else{
		printf("senha correta");
	}
	
	
	

	

	
	return 0;
}
