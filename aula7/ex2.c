#include<stdio.h>

int main(){
	
	int 	n;
	float	add = 0,
			result,
			_nd = 0;

	do
	{
		printf("Please, enter a INT number: ");
		scanf("%d", &n);			

		if(n != -1){
			add = add+n;	
			_nd++;
		}


	}while(n != -1);

	result = add / _nd;

	printf("\nMedia: %.1f", result);
	printf("\n\n--------- FINISHED --------- \n\n");
}