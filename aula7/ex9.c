#include<stdio.h>

int main(){
	int in,
		r = 1;

	do{
		printf("Entre com um numero inteiro positivo: ");
		scanf("%d", &in);

		if(in != 0)
			if(in%2 == 0) r = r*in;

	}while(in != 0);

	printf("\nProdutorio: %d", r);	
	printf("\n\n--------- FINISHED --------- \n\n");
}