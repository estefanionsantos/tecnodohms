#include <stdio.h>

// FUNCTION
char verify_note(float note){
	char l;

	if(note<=4.9){
		l = 'D';
	}else if(note<=6.9 && note>=5.0){
		l = 'C';
	}else if(note<=8.9 && note>=7.0){
		l = 'B';
	}else if(note<=10.0 && note>=9.0){
		l = 'A';
	}

	return l;
}

// MAIN
int main(){
	
	float in;
	char v;

	do{
		printf("Digite uma nota entre 0.0 e 10.0: ");
		scanf("%f", &in);

	}while(in<0 || in>10);

	v = verify_note(in);

	if(v != 'D')
		printf("Aprovado: Conceito %c \n\n", v);
	else
		printf("Reprovado: Conceito %c \n\n", v);
	
	return 0;
}



