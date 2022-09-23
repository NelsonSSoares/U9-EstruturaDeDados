# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	float x,m[3][5];
	
	printf("Digite um valor INTEIRO: \n");
	scanf("%f",&x);
	//i = linha e j=coluna
	
	for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			m[i][j]=x;
		}
	}
	printf("\n\nA matriz é\n\n");
		for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%.3f\t",m[i][j]);
		}
		printf("\n\n");
	}
	
for(i=0;i<3;i++){
		for(j=0;j<5;j++){

        x = m[0][0];     

        m[0][0] = x;  
		m[0][1] = 10 + x;
		m[0][2] = 10 + x;
		m[0][3] = 10 + x;
		m[0][4] = 10 + x;
		m[1][0] = 9 / x;
		m[1][1] = 9 / x;
		m[1][2] = 9 / x;
		m[1][3] = 9 / x;
		m[1][4] = 9 / x;
		m[2][0] = pow(x, 1);
		m[2][1] = pow(x, 2);
		m[2][2] = pow(x, 3);
		m[2][3] = pow(x, 4);
		m[2][4] = pow(x, 5);
		printf("%3.f\t", m[i][j]);
      
		}
		printf("\n\n");
	}



	getch();
	return 0;
}
