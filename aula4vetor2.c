#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float vetorNum[5];
	int i;
	
	for(i = 0 ; i < 5 ; i++){
		printf("\n Informe 5 numeros :");
		scanf("%f", &vetorNum[i]);
	}
	printf("\n\n Vetor com os numeros exibidos em ordem inversa \n\n");
	
	for(i = 4; i >= 0; i--) {
		printf("%.1f \t", vetorNum[i]);
	}	
	
	
	getch();
	system("cls");
	main();
	return 0;
}
