#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
/*24-Faça um programa que leia três números inteiros, 
sendo que o primeiro corresponde a um código e os outros dois correspondem a operando para o cálculo do produto notável
entre os mesmos com base na tabela abaixo:



CÓDIGO	     PRODUTO NOTÁVEL                       	FÓRMULA
1			Quadrado da diferença				(a - b)*(a - b)
2			Quadrado da soma					(a + b)*(a + b)
3			Soma do quadrado					(a*a)+(b*b)
4			Diferença do quadrado				(a*a)-(b*b)
5			Produto da soma pela diferença 		(a + b)*(a - b)  */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cod, v1,v2,result;
	
	printf(" 1- Quadrado da Diferença \n 2- Quadrado da Soma \n 3- Soma do Quadrado \n 4- Diferença do Quadrado \n 5- Produto da soma pela diferença \n");
	printf("\n Digite o Codigo da Operação desejada :");
	scanf("%d",&cod);
	
	printf("\n Digite o primeiro valor para a operação: \n");
	scanf("%d", &v1);
	
	printf("\n Digite o Segundo valor para a operação : \n");
	scanf("%d", &v2);
	
	
	switch(cod){
		case 1:
			result = (v1 - v2)*(v1 - v2);
			break;
		case 2:
			result = (v1 + v2)*(v1 + v2);
			break;
		case 3:
			result = (v1*v1)+(v2*v2);
			break;
		case 4:
			result = (v1*v1)-(v2*v2);
			break;
		case 5:
			result = (v1 + v1)*(v2 - v2);
			break;
		default:
			printf("Operação invalida!!");
			getch();
			system("cls");
			main();
			break;
	}
	printf("o Resultado da operação %d é %d", cod, result);
	getch();
	system("cls");
	main();
	return 0;
}
