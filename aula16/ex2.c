#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n---------- Exercício 2 -----------\n\n");

	#define MAX 5

	int i, o, in,
		isBreak = 0,
		vetor[MAX][MAX];

	//Gera a matriz randomico
    for(i=0; i<MAX; i++){
    	for(o = 0; o<MAX; o++){
    		vetor[i][o] = rand()%100;
    		printf("[V][%d][%d] = %d\t\t", i, o, vetor[i][o]);
    	}
    	printf("\n\n");
    }


    printf("Digite um número para procurar na matriz: ");
    scanf("%d", &in);

    //verifica se tem o valor digitado na matriz
    for(i=0; i<MAX; i++){
    	for(o = 0; o<MAX; o++){
    		if(in == vetor[i][o]){
    			printf("Posicao na matriz [%d][%d] = %d\n\n", i, o, vetor[i][o]);
    			isBreak = 1;
    		}
    	}

    	if(isBreak == 1) break;

    	if(i == (MAX - 1) && isBreak == 0)
    		printf("Numero nao existe na matriz\n\n");
    }


    return 0;
}