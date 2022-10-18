#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float raizq (float *num){

        return sqrt(*num);

}


int main(){

        setlocale(LC_ALL, "Portuguese");

        float n;

        printf("Digite um número ");

        scanf("%f",&n);

        printf("O valor da raiz quandrada de %.2f é %.2f",n,raizq(&n));
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}
