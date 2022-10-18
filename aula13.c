#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int divisores(int num){
	
	int i=1; soma=0;
	
	printf("os divisores de é %d", num);
	
	while(i<=num){
		if(num % i == 0){
			soma+=i;
			printf("%d \t ",i);
		}
		i++
	}
	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, i;
	
	for(i=0; i < 5 ; i++){
		printf("Digite um numero");
		scanf("%d",&n);
		printf("\n a soma dos divisores %d \n"disivores(n));
		
	}
	
	
	getch();
	system("cls");
	main();
	return 0;
}
