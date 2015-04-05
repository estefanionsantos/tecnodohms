#include<stdio.h>

int main(){
	int n1, n2,
		i = 1,
		fat = 1,
		nToFat;

	printf("Digite um numero inteiro: ");
	scanf("%d",&n1);

	for(i = 1; i<=n1; i++){
		printf("Digite outro numero inteiro: ");
		scanf("%d",&n2);

		fat = n2;
		nToFat = n2;

		do{
			n2--;
			fat = fat*n2;
		}while(n2>1);

		printf("-> Fatorial de %d: %d\n\n", nToFat, fat);
	}
	
	printf("\n\n--------- FINISHED --------- \n\n");
}