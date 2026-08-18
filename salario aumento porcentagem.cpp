// 1.Nome:SALARIO +10%
#include<stdio.h>>

int x;
int y;
int q;
int w;
int u;

int main (){

printf("Digite seu salario! \n");
scanf(" %d", &x);
printf("Digite o aumento! \n");
scanf(" %d", &q);

y = (x / 100 );
w = (y * q);
u = (w + x);

	printf ("%d salario com aumento \n", u);
    printf ("%d salario sem aumento \n", x);

return 0;
 }
