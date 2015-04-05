#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n---------- Exercício 4 -----------\n\n");

	#define MAX 4

	int i, o,	
        vetor[MAX][MAX];

    //Gera a matriz randomico
    for(i=0; i<MAX; i++){
    	for(o = 0; o<MAX; o++){
    		vetor[i][o] = rand()%100;
    		printf("[V][%d][%d] = %d\t\t", i, o, vetor[i][o]);
    	}
    	printf("\n");
    }

    printf("\nMatriz modificada\n\n");

    //modifica a matriz
    for(i=0; i<MAX; i++){
    	for(o = 0; o<MAX; o++){
    		if(i == o){
    			vetor[i][o] = 1;
    			printf("[V][%d][%d] = %d\t\t", i, o, vetor[i][o]);
    		}else{
    			vetor[i][o] = 0;
    			printf("[V][%d][%d] = %d\t\t", i, o, vetor[i][o]);
    		}  		
    	}
    	printf("\n");
    }

    printf("\n");

    return 0;
}