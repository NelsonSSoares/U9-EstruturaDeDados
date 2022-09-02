//#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float vetorNum[5];
	int i;
	
	for(i=0 ; i < 5 ; i++){
		system("cls");
		printf("\n Digite um numero :");
		scanf("%f", &vetorNum[i]);
	}
	
	for(i = 0 ; i < 5 ; i++){
		printf("%.1f \t", vetorNum[i]);
	}
	
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}
