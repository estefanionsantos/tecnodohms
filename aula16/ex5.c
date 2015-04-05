#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n---------- Exercício 5 -----------\n\n");

	#define MAX 10

	int i, o, n,
        vetor[MAX][MAX];

    //Gera a matriz randomico
    for(i=0; i<MAX; i++){
    	for(o = 0; o<MAX; o++){
    		vetor[i][o] = 1+rand()%9;
    		printf("%d\t", vetor[i][o]);
    	}
    	printf("\n");
    }

    printf("\nMatriz Modificada\n\n");

    //Modifica a matriz
    for(i=0; i<MAX; i++){
    	for(o = 0; o<MAX; o++){
    		n = vetor[i][o];
    		
    		//Veririca se
    		if(	o > 0	&&
    			i != o	&&
    			n < 5	&&
    			n%2 == 0
    		){
    			n = 0;
    		}

       		printf("%d\t", n);
    	}
    	printf("\n");
    }

    printf("\n");

	return 0;
}