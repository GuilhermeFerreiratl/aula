#include<stdio.h>>

int senha;
int tentativa =0;
int main(){

	printf("Qual sua senha? \n");
	scanf("%d", &senha);
	
	if( senha != 123456){
		printf("hello word \n");	
		tentativa ++;
		}
	else
	{printf("ola mundo");}
	
	
	
	
	
	return 0;
}
