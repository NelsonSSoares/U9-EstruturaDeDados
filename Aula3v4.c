#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4,total;
	int faltas, alunos = 0;
	

	
	while(alunos <= 40){
	
	printf("Informe a primeira nota : \n");
	scanf("%f",&n1);
	printf("Informe a Segunda nota : \n");
	scanf("%f",&n2);
	printf("Informe a Terceira nota : \n");
	scanf("%f",&n3);
	printf("Informe a Quarta nota : \n");
	scanf("%f",&n4);
	printf("Informe a Quantidade de Faltas : \n");
	scanf("%d",&faltas);
	
	total = (n1+n2+n3+n4)/4;
	//perf = faltas/200*100

	if(total >= 7 && faltas <= 50){
		printf("Aluno APROVADO! Media: %.2f e Faltas : %d \n", total, faltas);
	}else{
		printf("Aluno REPROVADO! Media: %.2f e Faltas : %d \n", total, faltas);
	}
	
	alunos++;
	}	

	getch();
	system("cls");
	main();
	return 0;
}

