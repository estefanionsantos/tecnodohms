#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main(){
	int i, in,
		c = 0,
        vetor[MAX];

    //Gera a matriz randomico
    for(i=0; i<MAX; i++){
    	vetor[i] = rand()%99;
    	printf("[V][%d] = %d\n", i, vetor[i]);
    }

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &in);

    //Verifica a parada e pega o indice
    for(i=0; i<MAX; i++){

    	if(in == vetor[i]){
    		c++;
    		printf("[V][%d]\n", i);
    	}    	
    }

    printf("Encontrado %d vezes\n\n", c);
}