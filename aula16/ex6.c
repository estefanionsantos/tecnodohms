#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n---------- Exercício 6 -----------\n\n");

	#define MAX 8

	int i, o,
        s = 0,
        ln = 0,
        vetor[MAX][MAX];

    //Gera a matriz randomico
    for(i=0; i<MAX; i++){
        for(o = 0; o<MAX; o++){
            vetor[i][o] = 1+rand()%9;
            printf("%d\t", vetor[i][o]);
        }
        printf("\n");
    }

    //pega o maior numero da diagonal primaria
    for(i=0; i<MAX; i++){
        for(o = 0; o<MAX; o++){          
            if(i == o && ln < vetor[i][o])
                ln = vetor[i][o];
        }
    }

    //soma da diagonal secundaria
    for(i = MAX-1, o = 0; i>=0 || o>MAX; i--, o++) s = s + vetor[i][o];

    printf("\nMaior numero: %d\n", ln); 
    printf("Soma: %d\n", s);    

    printf("\n");

	return 0;
}