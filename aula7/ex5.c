#include<stdio.h>

int main(){
	float 	gCount = 0, //quantidade de entradas
			in, //input number
			r = 0, //result
			m, //media
			pos = 0, //positive
			neg = 0, //negative
			pPos = 0, //percent positive
			pNeg = 0; // percent negative

	printf("\n------------------------------------------\nPara terminar a execucao do programa,\ndigite o numero zero.\n------------------------------------------\n\n");

	do{
		printf("Digite um numero inteiro: ");

		scanf("%f", &in);

		r = r + in; // calcula media
		 
		if(in != 0){			
			in > -1 ? pos++ : neg++; //Checka se a entrada eh positiva ou negativa
			gCount++; //quantidade de entradas
		}

	}while(in != 0);

	// resultado media
	m = r/gCount;
	//porcentagem negativa e positiva
	pPos = (pos / gCount) * 100;
	pNeg = (neg / gCount) * 100;

	//Imprime os resultados
	printf("\n--------- RESULTS --------- \n");
	
	//Media
	printf("\n-> Media sobre a entrada dos %.f valores: %.1f", gCount, m);
	//Quantidade de negativos e positivos
	printf("\n-> Negativos: %.f", neg);
	printf("\n-> Positivos: %.f", pos);
	//Quantidade percentual dos negativos e positivos
	printf("\n-> Percentual negativos: %.2f", pNeg);
	printf("\n-> Percentual positivos: %.2f", pPos);

	printf("\n\n--------- FINISHED --------- \n\n");

	return 0;
}