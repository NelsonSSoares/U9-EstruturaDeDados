#include <conio.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int entrada[3][5];
	int linha;
	int coluna;
	
	int x;
	scanf("%d",&x);
	
	for(linha=0;linha<3;linha++){
		for( coluna =0;coluna < 5;coluna++){
			entrada[linha][coluna]=x;
		}
	}
	printf("::DADOS LIDOS:::\n");
	for(linha =0;linha<3;linha++){
		for( coluna =0;coluna < 5;coluna++){
			printf(":%d:",entrada[linha][coluna]);
		}
		printf("\n");
	}
	//PROBLEMA 1
	int soma =0;
	for(linha =0;linha<3;linha++){
		for( coluna =0;coluna < 5;coluna++){
			soma += entrada[linha][coluna];
		}
		printf("::%d::",soma);
	}
	
	
	//PROBLEMA 2
	for( coluna =0;coluna < 5; coluna++){
		float resulti = (float)(entrada[1][coluna])/9;
		printf("\n:%f:",resulti);
	}
	 	
	 	
getch();
    return 0;
}

