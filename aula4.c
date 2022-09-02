
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numeros = 0,  qntEnt, qntN, i;
	
	for(i = 0; i <=  10; i++){
		
		
		printf("\n Digite 10 positivos aleatorios para verificação : \n");
		scanf("%d", &numeros);
		
		if(numeros >= 0){
			
			if( numeros >= 15 && numeros <= 35 ){
				system("cls");
				//printf("\n");
				//printf("\n O Numero : %d está entre 15 e 35", numeros);
				qntEnt++;
			}else{
				system("cls");
				//printf("\n");
				//printf("\n O Numero : %d não esta entre 15 e 35", numeros);
				qntN++;
			}
			 
		}else{
			printf("\n Numero inválido! %d", numeros);
		}
		
	}
	
	printf("\n Numeros entre 15 e 25 : %d", qntEnt);
	printf("\n Numeros fora de 15 e 25 %d", qntN);
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}

/*
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}
*/
