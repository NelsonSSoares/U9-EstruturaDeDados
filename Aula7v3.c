#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char n1[30] , n2[30];
	
	printf("Digite o Primeiro nome :" );
	
	gets(n1);
	
	printf("\n Digite outro nome :");
	
	gets(n2);
	
	//strlwr(n1);
	//strlwr(n2);
	
	if(strcmp(strlwr(n1),
	strlwr(n2))==0){
		printf("os nomes sao iguais %s = %s ", n1, n2);
	}else{
		printf("os nome são diferentes %s != %s", n1,n2);
	}
	
	getch();
	system("cls");
	main();
	return 0;
}

