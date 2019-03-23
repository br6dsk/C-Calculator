#include <stdio.h>
#include <stdlib.h>


int main(){

	float n1,n2;
	char operador, e=130, a=160, c=135, aa=198;
	

	do{

		printf(" \nCalculadora\n");
		printf("\n");
		printf("(+) pra adi%c%co\n", c, aa);
		printf("(-) pra subtra%c%co\n", c, aa);
		printf("(*) pra multiplica%c%co\n", c, aa);
		printf("(/) pra divis%co\n", aa);

		printf("\n");
		printf("[Tutorial] Use de exemplo: 8+8 e 7-1.\n");
		printf("[Tutorial] Use de 0 0 0 para fechar.\n");

		printf("Digite o c%clculo: ", a);
		
		scanf("%f", &n1);
		scanf(" %c", &operador);
		scanf("%f", &n2);


		system("cls");

		printf("Calculado: %.2f %c %.2f = ", n1,operador,n2);



		switch(operador){

			case'+':
			printf("%.2f\n", n1+n2);
			break;

			case'-':
			printf("%.2f\n", n1-n2);
			break;

			case'*':
			printf("%.2f\n", n1*n2);
			break;

			case'/':
			if(n2==0){
				printf("indertemina%c%co\n", c, aa);
				
			}else{
				printf("%.2f\n", n1/n2);
				
			}
			break;

			default:
			if(operador!='+', '-', '/', '*'){
				printf("Operador inv%clido\n", a);
			}
			else{
				printf("Fechando...\n");
			}
			
		}



	}while(n1!=6 && operador!=6 && n2!=6);
	return 0;
}
