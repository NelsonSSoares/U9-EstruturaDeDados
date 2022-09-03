/*Grande parte da receita de uma emissora de televisão vem da venda de horários de propagandas. O preço de cada minuto é baseado 
na audiência do canal de TV. Uma cidade do interior foi escolhida para servir de amostra para um teste de uma nova pesquisa de 
audiência. Para tanto, foram visitadas 100 residências, que informaram qual o canal sintonizado (2, 4, 5, 7, 9, 11, 13) e o 
número de telespectadores. 
Faça um programa em C que receba os dados coletados, calcule e apresente na tela o porcentual de audiência de cada emissora.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>




int main(){
	int Tele=0, soma;
	float A=0,B=0,C=0,D=0,E=0,F=0,G = 0;
	
	//A = 2
	//B = 4
	//C = 5
	//D = 7
	//E = 9
	//F = 11
	//G = 13
	int entrada =0;
	printf("A = 2\nB = 4 \nC = 5\nD = 7\nE = 9\nF = 11\nG = 13\n");
	
	for(int i=0 ;i<100;i++){
		printf("Digite o Canal\n");
		scanf("%d",&entrada);
		if(entrada==2){
			fflush(stdin);
			printf("Canal Selecionado 2\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			A =+Tele;
			
		}
		else if(entrada==4){
			printf("Canal Selecionado 4\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			B =+ Tele;
			Tele=0;
		}
		else if(entrada==5){
			Tele=0;
			printf("Canal Selecionado 5\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			C =+ Tele;
		}
		else if(entrada==7){
			Tele=0;
			printf("Canal Selecionado 7\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			D =+ Tele;
			
		}
		else if(entrada==9){
			Tele=0;
			printf("Canal Selecionado 9\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			E =+ Tele;
			
		}
		else if(entrada==11){
			Tele=0;
			printf("Canal Selecionado 11\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			F =+ Tele;
			
		}
		else if(entrada==13){
			Tele=0;
			printf("Canal Selecionado 13\n");
			printf("QTD de Tele\n");
			scanf("%d",&Tele);
			G =+ Tele;
			
		}
	}	
		soma = A+B+C+D+E+F+G;
		printf("Canal 2: %.2f\n",(A/soma) * 100);
		printf("Canal 4: %.2f\n",(B/soma) * 100);
		printf("Canal 5: %.2f\n",(C/soma) * 100);
		printf("Canal 7: %.2f\n",(D/soma) * 100);
		printf("Canal 9: %.2f\n",(E/soma) * 100);
		printf("Canal 11: %.2f\n",(F/soma) * 100);
		printf("Canal 13: %.2f\n",(G/soma) * 100);
	
	
	   	
getch();
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}




/*
#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	
	
	int Tele;
	int Residencia[10]//100
	int A,B,C,D,E = 0;
	//A=2
	//B = 4
	//C = 5
	//D = 7
	//E = 9
	//F = 11
	//G = 13
	int entrada =0;

	for(int i=10;i<10;i++){
		scanf("%d",&entrada);
		if(entrada==2){
			A += scanf("%d",Tele);
		}
		if(entrada==4){
			A += scanf("%d",Tele);
		}
	}	
	
	   	
getch();
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}
*/
