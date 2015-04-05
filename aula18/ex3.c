#include <stdio.h>

// FUNCTION
int multiplication_tables(int number1, int number2){
	int s = number2 * number1;
	return s;
}

// MAIN
int main(){
	int in,
		i = 0,
		j = 1,
		r;

	printf("Digite um numero inteiro: ");
	scanf("%d",&in);

	for(i = 1; i<=10; i++){

		for(j = 1; j<=in; j++){
			r = multiplication_tables(j, i);
			printf("%dx%d = %d \t", j, i, r);
		}

		printf("\n");
	}

	printf("\n");
	return 0;
}



