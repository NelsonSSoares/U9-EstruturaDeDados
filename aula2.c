#include <iostream>
# include <stdio.h>
# include <conio.h>
# include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
CODIGO MAIN BASE

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	getch();
	return 0;
}



int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int diarias;
	float valor, valordiaria = 95, taxa;
	
	printf("Digite o Numero de diarias:");
	scanf("%d",&diarias);
	
	if(diarias<10){
		
		taxa= 0.15*diarias*valordiaria;
		valor = diarias*valordiaria+taxa;
		
	}else if(diarias == 10){
		
		taxa= 0.15*diarias*valordiaria;
		valor = diarias*valordiaria+taxa;
	
	}else if(diarias > 10){
		
		taxa= 0.15*diarias*valordiaria;
		valor = diarias*valordiaria+taxa;
	}
	
	printf(" O numero de diaria é: %d \n O valor a pagar é: %.2f \n e A Taxa de serviço é %.2f ", diarias, valor, taxa);
	
	getch();
	return 0;
}
*/

/*
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	
	printf("Digite o dia da semana de 0 a 6:");
	scanf("%d",&dia);
	
	switch(dia){
		case 0:
			printf("Domingo");
			break;
		case 1:
			printf("Segunda-Feira");
			break;
		case 2:
			printf("Terça-Feira");
			break;
		case 3:
			printf("Quarta-Feira");
			break;
		case 4:
			printf("Quinta-Feira");
			break;
		case 5:
			printf("Sexta-Feira");
			break;
		case 6:
			printf("Sabado");
			break;
		default:
			printf("Dia Desconhecido!");
			break;
	}
	
	getch();
	return 0;
}
*/
/*
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2;
	int result;	
	
	printf("Informe os primeiros digitos do ano de Nascimento: ");
	scanf("%d",&n1);
	printf("Informe os ultimos digitos do ano de Nascimento: ");
	scanf("%d",&n2);
	
	result = (n1+n2)%5;
	
	switch(result){
		
		case 0:
			printf("Timido");
			break;
		case 1:
			printf("Sonhador");
			break;
		case 2:
			printf("Paquerador");
			break;
		case 3:
			printf("Atraente");
			break;
		case 4:
			printf("Irrevistivel");
			break;
	}
	
	getch();
	return 0;
}
*/

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
		
	
	printf("Informe o numero do mês para receber a estação climatica do ano: ");
	scanf("%d",&mes);
	

	switch(mes){
		
		case 12:
			printf("Dezembro é Verão!");
			break;
		case 1:
			printf("Janeiro é Verão!");
			break;
		case 2:
			printf("Fevereiro é Verão!");
			break;
		case 3:
			printf("Março é Outono!");
			break;
		case 4:
			printf("Abril é Outono!");
			break;
		case 5:
			printf("Maio é Outono!");
			break;
		case 6:
			printf("Junho é Inverno!");
			break;
		case 7:
			printf("Julho é Inverno!");
			break;
		case 8:
			printf("Agosto é Inverno!");
			break;
		case 9:
			printf("Setembro é Primavera!");
			break;
		case 10:
			printf("Outubro é Primavera!");
			break;
		case 11:
			printf("Novembro é Primavera!");
			break;
		default:
			printf("Mês inexistente!");
			break;
			
			//é Possivel fazer
			// case1: case2: case3: <código>;
	}
	
	getch();
	return 0;
}

