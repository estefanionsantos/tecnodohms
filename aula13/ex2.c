#include <stdio.h>

int main(){
	printf("\n\nElaborar um algoritmo que leia um\nconjunto de 30 valores e os organize em 2\nvetores conforme os valores forem pares\nou ímpares. Terminada a leitura escrever\no conteúdo dos dois vetores. Um deles\ndeve conter todos os valores pares e o\noutro todos os valores impares.\n\n");

	#define MAX 30
	
	int i, j, d,
		odd = 0, even = 0,		
		vet1[MAX] = {5,10,3,4,9,8,2,7,6,1,544,12,97,47,96,34,78,22,48,71,11,65,93,76,19,72,1001,100,305,98};
	
	//Descobre quantos valores sao pares e quantos sao impares
	for(i=0; i<MAX; i++) vet1[i] % 2 == 0 ? even++ : odd++;
    

    //Declara o array do tamanho de cada de acordo com a contagem anterior
	int vetOdd[odd], vetEven[even];
	
	//Armazena e imprime o vetor com valores pares
	for(j=0; j<MAX; j++){
		if(vet1[j] % 2 == 0){
			vetEven[j] = vet1[j];
			printf("EVEN: %d\n", vetEven[j]);
		}		
	}

	printf("\n");

	//Armazena e imprime o vetor com valores impares
	for(d=0; d<MAX; d++){
		if(vet1[d] % 2 != 0){
			vetEven[d] = vet1[d];
			printf("ODD: %d\n", vetEven[d]);
		}		
	}

	printf("\n");
	return 0;
}