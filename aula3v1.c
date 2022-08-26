#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,total;
	int aluno =0;
	
	while(aluno < 3){
		printf("Digite a Primeira nota: ");
		scanf("%f",&n1);
		
		printf("Digite a Segunda nota: ");
		scanf("%f",&n2);
		
		printf("Digite a Terceira nota: ");
		scanf("%f",&n3);
		
		total = (n1+n2+n3)/3;
		
		printf("A media do Aluno %d é %.2f ",aluno, total);
		aluno++;
	}
	
	
	getch();
	system("cls");
	main();
	return 0;
}

/*
int main(){
	setlocale(LC_ALL, "Portuguese")
	
	getch();
	system("cls");
	main();
	return 0;
}
*/
