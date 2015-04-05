#include <stdio.h>

int main(){
	printf("\n---------- Exercício 3 -----------\n\n");

	#define MAX 4
	int i, o, in, l, c,
		large = 0,
        vetor[MAX][MAX];

    //Armazendo na matriz
	for(i=0; i<MAX; i++){
        for(o=0; o<MAX; o++){
            printf("Numero armazenado: ");
    		scanf("%d", &in);
    		vetor[i][o] = in;            
    	}
    }

    printf("\n");

    //mostrando indices de linhas e colunas
    for(i=0; i<MAX; i++){
        for(o=0; o<MAX; o++){
            printf("V[%d][%d] = %d\t", i, o, vetor[i][o]);

            //pegando o maior numero e o sua posição na linha e coluna
            if(vetor[i][o]>=large){
                large = vetor[i][o];
                l = i;
                c = o;
            }
        }
        printf("\n");
    }

    printf("\n");
    printf("O maior numero é %d e o indice no vetor é [%d][%d]\n", large, l, c);

    return 0;
}