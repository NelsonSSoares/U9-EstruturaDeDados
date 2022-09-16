#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	   char nome[10];
	   char snome[10];
	   
	   printf("digite seu nome \n");
	   
	   gets(nome);
	   
	   
	   puts(snome);
	   
	   printf("o Nome é : %s" , &nome);
	   
	   
		
	
	getch();
	system("cls");
	main();
	return 0;
}
