  // MAIOR MENOR E ZERO
#include<stdio.h>
int palpite;

int main (){
	printf ("Qual valor deseja saber :");
	scanf(" %d", &palpite);
	
	if(palpite > 0)
	{printf("MAIOR");
	}
	else if (palpite < 0){
		printf("MENOR");
	}
	else {
		printf("ZERO");
	}
	
	
	
	
	
	return 0;
}
