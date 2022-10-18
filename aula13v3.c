#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

float isPar(int *num1, int *num2) {
    return (*num1 + *num2) % 2 == 0 ? 1 : 0;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,retorno;
	
	printf("Digite um número inteiro:");
	scanf("%d%",&n1);
	printf("Digite um número inteiro:");
	scanf("%d%",&n2);
	retorno = somaPar(&n1,&n2);
	
	if(retorno == 1){
		printf("A soma dos 2 números é Impar!", );
	}else{
		printf("A soma dos 2 n´úmeros é par!");
	}
	
	getch();
	system("cls");
	main();
	return 0;
}
