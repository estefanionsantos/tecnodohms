#include <stdio.h>

int main(){
	printf("\n\nEscreva um algoritmo que leia dois\nvetores de 10 posições e faça a\nmultiplicação dos elementos de mesmo\níndice, colocando o resultado em um\nterceiro vetor. Mostre o vetor resultante.\n\n");

	#define MAX 10
	int i,
		vet1[10] = {5,10,3,4,9,8,2,7,6,1},
		vet2[10] = {7,9,8,3,1,2,5,4,6,33},
		vetResult[10];

	for(i=0; i<MAX; i++){
		vetResult[i] = vet1[i]*vet2[i];
		printf("RESULT: %dx%d = %d \n", vet1[i], vet2[i], vetResult[i]);
	}

	printf("\n\n");
	return 0;
}