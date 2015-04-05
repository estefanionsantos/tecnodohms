#include<stdio.h>

int main(){
	int x, y,
		i,
		r = 1;

	printf("\nDigite um numero positivo: "); scanf("%d", &x);
	printf("Digite outro numero positivo: "); scanf("%d", &y);

	for(i=1; i<=y; i++) r = r * x;

	printf("\nResultado da potenciacao: %d", r);
	
	printf("\n\n--------- FINISHED --------- \n\n");

	return 0;
}