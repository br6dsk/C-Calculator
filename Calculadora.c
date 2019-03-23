#include <stdio.h>
#include <stdlib.h>

int main(){

	int n1,n2;
	char operador;

	do{

		printf(" \nCalculadora\n");
		printf("\n");
		printf("(+) pra adicao\n");
		printf("(-) pra subtracao\n");
		printf("(*) pra multiplicacao\n");
		printf("(/) pra divisao\n");

		printf("\n");
		printf("[Tutorial] Use de exemplo: 8+8 e 7-1.\n");

		printf("Digite o calculo: ");
		
		scanf("%d", &n1);
		scanf(" %c", &operador);
		scanf("%d", &n2);


		system("cls");

		printf("Calculado: %d %c %d = ", n1,operador,n2);

		switch(operador){

			case'+':
			printf("%d\n", n1+n2);
			break;

			case'-':
			printf("%d\n", n1-n2);
			break;

			case'*':
			printf("%d\n", n1*n2);
			break;

			default:
			if(n1!=0 && operador!=0 && n2!=0)
				printf("Operador invalido\n");
			else
				printf("Fechando...\n");
			
		}



	}while(n1!=0 && operador!=0 && n2!=0);
}