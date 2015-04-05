#include <stdio.h>

#define MAX 10

// MAIN
int main(){
	printf("\n---------- Exercício 1 -----------\n\n");	

	int i, in, v,
		s = 0;

	for(i=0; i<MAX; i++){
		do{
			printf("Digite um número INT e POSITIVO: ");
			scanf("%d", &in);
		}while(in < 0);

		v = verify_even_odd(in);

		s = s+v;
	}

	printf("\nA soma dos numeros pares: %d \n\n", s);
	
	return 0;
}

// FUNCTIONS
int verify_even_odd(int number){
	int even;

	if(number%2 == 0) even = number;

	return even;
}