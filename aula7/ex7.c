#include<stdio.h>

int main(){
	int in,
		i = 0,
		j = 1,
		r;

	printf("Digite um numero inteiro: ");
	scanf("%d",&in);

	for(i = 1; i<=10; i++){

		for(j = 1; j<=in; j++){
			r = j*i;
			printf("%dx%d = %d -- ",j,i,r);
		}

		printf("\n");
	}
	
	printf("\n\n--------- FINISHED --------- \n\n");
}