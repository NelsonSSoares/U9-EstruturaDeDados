#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>//VERIFICANDO O TIPO DA STRING

#define PI 3.14

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	char palavras[9][15];
	int i,j;
	int verdade = 0;
	
	//entrada de dados
	for(i = 0; i <=9; i++)
	{
		printf("Digite uma palavra: ");
		gets(palavras[i]);
		printf("\n::%d::\n",strlen(palavras[i]));
		int tamanho = strlen(palavras[i]);
		if(tamanho > 15){
			while(verdade==0)
			{
				printf("DIGITE PALAVRAS COM MENOS DE 15 CARACTER JOVEM");
				gets(palavras[i]);
				
				if(strlen((palavras[i])-1) <= 15){
					verdade = 1;
				}else{
					continue;
				}
				
			}
			verdade= 0;
		}
	
	}
	

	   	
		printf("Palavra: %s\n", palavras[0]);
		printf("Palavra: %s\n", palavras[9]);
		printf("Palavra: %s\n", palavras[1]);
		printf("Palavra: %s\n", palavras[8]);
		printf("Palavra: %s\n", palavras[2]);
		printf("Palavra: %s\n", palavras[7]);
		printf("Palavra: %s\n", palavras[3]);
		printf("Palavra: %s\n", palavras[6]);
		printf("Palavra: %s\n", palavras[4]);
		printf("Palavra: %s\n", palavras[5]);
				
	

	
getch();
    return 0;
}
