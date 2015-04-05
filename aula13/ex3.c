#include <stdio.h>

int main(){
	printf("\n\nEscreva um algoritmo que leia um vetor\nde 20 posições e mostre-o. Em seguida,\ntroque o primeiro elemento com o último,\no segundo com o penúltimo, o terceiro\ncom o antepenúltimo, e assim\nsucessivamente. Mostre o novo vetor\ndepois da troca.\n\n");

	#define MAX 20

	int i,
		min = MAX,
		vet1[MAX] = {5,10,3,4,9,8,2,7,6,1,544,12,97,47,96,34,78,22,48,71},
		vetResult[MAX];

	for(i=0; i<MAX; i++){
		min--;

		vetResult[i] = vet1[min];
		vetResult[min] = vet1[i];		

		printf("ARRAY CHOOSED: %d\n", vetResult[i]);
	}

	printf("\n\n");
	return 0;
}