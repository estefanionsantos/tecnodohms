#include <stdio.h>

int main(){
	printf("\n\nFaça um algoritmo que leia um vetor de\n50 posições de números inteiros e\nmultiplique todos os seus elementos pelo\nmaior valor do vetor. Mostre o vetor após\nos cálculos.\n\n");

	#define MAX 50

	int i, j, b,
		vet1[MAX] = {6,7,43,44,45,46,47,48,49,50,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,1,2,3,4,5,24,25,26,27,28,29,30,31,32,36,37,38,39,40,41,42,33,34,35},
		vetResult[MAX];

	for(i=0; i<MAX; i++){
		if( i == 0) b = vet1[i];
		if( vet1[i] > b ) b = vet1[i];
	}

	for(j=0; j<MAX; j++){
		vetResult[j] = vet1[j] * b;
		printf("RESULT: %dx%d = %d\n", vet1[j], b, vetResult[j]);
	}

	printf("\n\n");
	return 0;
}