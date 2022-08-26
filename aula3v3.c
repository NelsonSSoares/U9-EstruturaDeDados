#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 2;
	
	while(num <= 25){
		
		
		printf("%d \n", num*2);
		
		num++;
	}
	
	
	getch();
	system("cls");
	main();
	return 0;
}

