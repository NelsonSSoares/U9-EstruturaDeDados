#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero,ultnumero;
	
	printf("Digite o numero da placa, para verificar dia de rodizio");
	scanf("%d",&numero);
	
	ultnumero = numero%10;
	
	switch(ultnumero){
		
		case 1 : case 2:
			printf("Rodizio na Segunda-Feira");
			break;
		case 3: case 4:
			printf("Rodizio na Terça-Feira");
			break;
		case 5: case 6:
			printf("Rodizio na Quarta-Feira");
			break;
		case 7: case 8:
			printf("Rodizio na Quinta-Feira");
			break;
		case 9: case 0:
			printf("Rodizio na Sexta-Feira");
			break;
		default:
			printf("Numero Invalido!!");
			break; 
	}
	
	getch();
	system("cls");
	main();
	return 0;
}
