#include <stdio.h>

int main(){
	printf("\n---------- Exercício 1 -----------\n\n");

	#define vMax 4
	#define cMax 3	

	int i, j,
		matriz[vMax][cMax] = {	4,5, 6,
								7, 8, 9,
								10, 11, 12,
								13, 14, 15
							},
		vetor[cMax] = {1, 2, 3};

	for(i = 0; i<vMax; i++){

		for(j=0; j<cMax; j++){
			printf("%d x %d = %d\t", matriz[i][j], vetor[j], matriz[i][j]*vetor[j]);
		}

		printf("\n");
	}

	printf("\n");

	return 0;
}