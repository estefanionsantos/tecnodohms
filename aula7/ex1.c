#include<stdio.h>

int main(){

	int i = 0,
		pos = 0,
		neg = 0,
		n;
	
	for(i = 0; i<10; i++){
		printf("Digite um numero inteiro: ");

		scanf("%d", &n);

		n < -1 ? neg++ : pos++;
	}

	printf("Pos numbers: %d \n", pos);
	printf("Neg numbers: %d \n\n", neg);
}