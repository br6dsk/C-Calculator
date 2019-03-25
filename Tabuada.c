//Author: Braian D. Jesus 

#include <stdio.h>
#include <stdlib.h>
int main(){

	float i, num, mult;

	do{
		printf(" \nDigite um numero para obter a tabuada de 1 a 10!!\n");
		printf("Digite o numero: ");
		scanf("%f", &num);
		printf("\n");
		system("cls");
		printf("\n[+] Tabuada de numeros decimais!\n");
		printf(" \nDigite o numero 0 para finalizar o programa!");
		printf(" \nTabuada do numero [%.2f]\n", num);
		printf("\n");
		for(i=1; i<11; i++){
			
			printf("%.2f x %.2f = %.2f\n", num, i, num*i);
		}
	}while(num!=0);

	return 0;
}