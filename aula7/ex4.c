#include<stdio.h>

int main(){
	int n,	 //Numero de entrada
		i,
		gtN, //maior numero
		ltN; //menor numero

	for(i = 0; i<10; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);

		//Atribuir valor ao maior e menor caso apenas um numero digitado
		if(i==0){
			gtN = n;
			ltN = n;
		}

		if(n > gtN) gtN = n;
		if(n < ltN) ltN = n;;
	}

	printf("\n-------------------- Resultado --------------------\n");

	printf("Menor numero digitado: %d \n", ltN);
	printf("Maior numero digitado: %d \n\n", gtN);
}