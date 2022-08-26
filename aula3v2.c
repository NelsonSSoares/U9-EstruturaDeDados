#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=0;
	
	while(n<10){
		printf("O Numero %d é multiplo de 2. \n", n*2);
		
		n++;
	}
	
	
	getch();
	system("cls");
	main();
	return 0;
}

/* 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}

*/
