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
	
	printf("\n RESULTADO DA MATRIZ \n\n");
	
for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			
        x = m[0][0];     
        m[i][j] = x;  
		m[i][j] = x+=10;
		m[i][j] = x+=10;
		m[i][j] = x+=10;
		m[i][j] = x+=10;
		m[i][j] = m[0][0]/9;
		m[i][j] = m[0][1]/9;
		m[i][j] = m[0][2]/9;
		m[i][j] = m[0][3]/9;
		m[i][j] = m[0][4]/9;
		m[i][j] = pow(m[1][0], 1);
		m[i][j] = pow(m[1][1], 2);
		m[i][j] = pow(m[1][2], 3);
		m[i][j] = pow(m[1][3], 4);
		m[i][j] = pow(m[1][4], 5);
		printf("%3.f\t", m[i][j]);
      
		}
		printf("\n\n");
	}



	getch();
	return 0;
}
