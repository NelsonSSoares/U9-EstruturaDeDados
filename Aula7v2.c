
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	 
	 char p1[30], p2[30];
	 
	 printf("Digite seu nome :");
	 
	 gets(p1);
	 
	 strcpy(p2,p1);
	 
	 printf("\n seu nome é: %s", p2);
	
	getch();
	system("cls");
	main();
	return 0;
}
