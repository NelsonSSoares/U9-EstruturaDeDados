#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void separa(float n){
	
	int x;
	float y;
	x = (int)n;
	y = n-x; 
	
	printf("A parte inteira do numero digitado é %d \n A parte fracionada é %.2f ", x,y);
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	printf("Digite um número");
	scanf("%f",&num);
	
	separa(num);
	
	getch();
	system("cls");
	main();
	return 0;
}
