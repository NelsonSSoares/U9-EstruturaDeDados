#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30], snome[30], total[30];
	
	printf("Digite o primeiro nome :");
	gets(nome);
	
	printf("\n Digite Sobrenome: ");
	
	gets(snome);
	
	printf("\n %s", strcat(nome,snome));
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}

