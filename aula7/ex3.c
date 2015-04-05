#include<stdio.h>

int main(){
	// N de votos para cada corrupto
	int Cand1 = 0,
		Cand2 = 0,
		Cand3 = 0,
		Cand4 = 0,
		Cand5 = 0,
		white = 0,
		tNull = 0;

	//Link
	int nCand1 = 5366,
		nCand2 = 4759,
		nCand3 = 6971,
		nCand4 = 8898,
		nCand5 = 6966,
		nWhite = 1010,
		nNull = 10;

	//Voto
	int n;

	printf("--------------------\nEleicoes 2014\n--------------------");

	printf("\n\n---------- Legenda dos corruptos candidatos  ----------\n\n");

	printf("Corrupto 01: %d \n", nCand1);
	printf("Corrupto 02: %d \n", nCand2);
	printf("Corrupto 03: %d \n", nCand3);
	printf("Corrupto 04: %d \n", nCand4);
	printf("Corrupto 05: %d \n", nCand5);
	printf("Votar em branco: %d \n", nWhite);
	printf("Anular voto: %d \n\n", nNull);	

	do{
		printf("Digite o numero do corrupto: ");
		scanf("%d", &n);

		// Verifica se o numero digitado == algum Corrupto
		if(n != nCand1 && n != nCand2 && n != nCand3 && n != nCand4 && n != nCand5 && n != nNull && n != nWhite){
			printf("\n\n----- Digite o numero do candidato valido. -----\n");
		}			

		switch(n){
			case 5366:
				Cand1++;
				break;
			case 4759:
				Cand2++;
				break;
			case 6971:
				Cand3++;
				break;
			case 8898:
				Cand4++;
				break;
			case 6966:
				Cand5++;
				break;
			case 10:
				tNull++;
				break;
			case 1010:
				white++;
				break;
		}

	}while(n != 0);

	printf("\n\n---------- Apuracao -----------\n");

	//Resultado da apuracao
	printf("Total de votos -> Corrupto 01: %d \n", Cand1);
	printf("Total de votos -> Corrupto 02: %d \n", Cand2);
	printf("Total de votos -> Corrupto 03: %d \n", Cand3);
	printf("Total de votos -> Corrupto 04: %d \n", Cand4);
	printf("Total de votos -> Corrupto 05: %d \n", Cand5);
	printf("Total de votos -> Em Branco: %d \n", white);
	printf("Total de votos -> Nulo: %d \n\n\n\n", tNull);
}