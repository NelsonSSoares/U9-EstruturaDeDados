#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*1) Fa�a um programa que leia dois valores reais e exiba o primeiro com acr�scimo 
de 30%, e o segundo com desconto de 25%. */


# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float v1, v2, acrescimo, desconto;
printf ("Digite o valor que sofrer� acr�scimo ");
scanf("%f",&v1);
printf("Digite o valor que ter� desconto ");
scanf("%f",&v2);
acrescimo=v1*1.30;
desconto=v2*0.75;
printf("O valor de R$ %.2f com acr�scimo de 30%% ficar� em R$ %.2f",v1,acrescimo);
printf("\nO valor de R$ %.2f com desconto de 25%% ficar� em R$ %.2f",v2,desconto);
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*2)Fa�a um programa que leia dois n�meros inteiros e exiba o resto da divis�o
 do primeiro pelo segundo. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n1, n2, resto;
printf("Digite o primeiro n�mero inteiro ");
scanf("%d",&n1);
printf("Digite o segundo n�mero inteiro ");
scanf("%d",&n2);
resto=n1%n2;
printf("O resto da divis�o de %d por %d � %d",n1,n2,resto);
	getch();
	return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*3)Fa�a um programa que calcule a velocidade m�dia de um ve�culo.
vm=(sf-si)/(tf-ti) 

vm = velocidade m�dia
sf = dist�ncia final
si = dist�ncia inicial
tf = tempo final
ti = tempo inicial */
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float vm, sf, si, tf, ti;
printf("Digite a dist�ncia inicial ");
scanf("%f",&si);
printf("Digite a dist�ncia final ");
scanf("%f",&sf);
printf("Digite o tempo inicial ");
scanf("%f",&ti);
printf("Digite a tempo final ");
scanf("%f",&tf);
vm=(sf-si)/(tf-ti);
printf("A velocidade m�dia � %.1f",vm);
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*4)Fa�a um programa que converta uma temperatura em graus Celsius para 
Fahrenheit e Kelvin.
F=(9C+160)/5  e K = C +273 

C = Celsius
F = Fahrenheit
K = Kelvin*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float K, F, C;
printf("Digite a temperatura em graus Celsius ");
scanf("%f",&C);
F=(9*C+160)/5;
K=C+273;
printf("A temperatura de %.1f� C em Fahrenheint � %.1f� F e em Kelvin � %.1f K.",C,F,K);
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/* 5)Fa�a um programa que calcule a �rea de um trap�zio e escreva sua �rea.
A=((B+b)*h)/2

A = �rea
B = base maior
b = base menor
h = altura*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
 float A, B, b, h;
 printf("Digite o valor da base maior ");
 scanf("%f",&B);
 printf("Digite o valor da base menor ");
 scanf("%f",&b);
 printf("Digite o valor da altura ");
 scanf("%f",&h);
 A=((B+b)*h)/2;
 printf("O valor da �rea do trap�zio � %.2f",A); 
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*6)Fa�a um programa que calcule o volume de uma esfera e escreva seu volume. 
V=4/3*PI*r^3 

PI = 3,14  => colocar como constante

V= volume = 523,23
r=raio = 5*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>
//# define PI 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
float r, V, PI=3.14;
printf("Digite o valor do raio ");
scanf("%f",&r);
V=(4*PI*pow(r,3))/3;
printf("O volume da esfera de raio %.2f � %.2f",r,V);
	getch();
	return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*11) Construa um algoritmo para calcular as ra�zes de uma equa��o do 2� grau (ax2 + bx + c) 
sendo que os valores a, b e c s�o fornecidos pelo usu�rio.

delta=b^2-4*a*c
x=(-b�raizq(delta))/(2*a)

Teste: a=1, b=-5, c=6, x1=2, x2=3
a=1; b=-4; c=4, x1=2, x2= 2
a=1; b= -2; c=4  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2;
	printf("Digite o valor de a ");
	scanf("%f",&a);
	printf("Digite o valor de b ");
	scanf("%f",&b);
	printf("Digite o valor de c ");
	scanf("%f",&c);
	delta=pow(b,2)-4*a*c;
	//pot�ncia=> usamos a fun��o pow(base,expoente) => dentro da biblioteca <math.h>
	x1=(-b-sqrt(delta))/2*a;
	//raiz quadrada => usamos a fun��o sqrt(vari�vel que quer extrair a raiz) => dentro da biblioteca <math.h>
	x2=(-b+sqrt(delta))/2*a;
	printf("As ra�zes da equa��o do 2� grau cujo delta=%.2f s�o x1=%.2f e x2=%.2f",delta,x1,x2);
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*12)Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer do plano, P(x1,y1) e Q(x2,y2), calcule a dist�ncia entre eles.
Obs: d=raizq((x2-x1 )^2+(y2-y1)^2 )
Teste: x1=4; x2=7, y1=5, y2=9, sa�da final => d=5 */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x1, x2, y1, y2, d;
	printf("Digite o valor de x1 ");
	scanf("%f",&x1);
	printf("Digite o valor de x2 ");
	scanf("%f",&x2);
	printf("Digite o valor de y1 ");
	scanf("%f",&y1);
	printf("Digite o valor de y2 ");
	scanf("%f",&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("A dist�ncia entre dois pontos � %.2f",d);	
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
ESTRUTURA DE DECIS�O
/*13) Fa�a um programa que calcule a m�dia de quatro n�meros do tipo real e imprima 
para o aluno se ele est� aprovado.
 	Obs: O aluno ser� aprovado se a m�dia for maior ou igual a 7.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	printf("Digite a primeira nota ");
	scanf("%f",&n1);
	printf("Digite a segunda nota ");
	scanf("%f",&n2);
	printf("Digite a terceira nota ");
	scanf("%f",&n3);
	printf("Digite a quarta nota ");
	scanf("%f",&n4);
	media=(n1+n2+n3+n4)/4;
	printf("Sua m�dia � %.2f\n",media);
	if (media>=7){
		printf("Voc� est� aprovado!");
	}
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*14)Fa�a um programa que calcule a m�dia de quatro n�meros do tipo real e imprima 
para o aluno se ele est� aprovado ou reprovado.
	Obs: O aluno ser� aprovado se a m�dia for maior ou igual a 7.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
		float n1, n2, n3, n4, media;
	printf("Digite a primeira nota ");
	scanf("%f",&n1);
	printf("Digite a segunda nota ");
	scanf("%f",&n2);
	printf("Digite a terceira nota ");
	scanf("%f",&n3);
	printf("Digite a quarta nota ");
	scanf("%f",&n4);
	media=(n1+n2+n3+n4)/4;
	printf("Sua m�dia � %.2f\n",media);
	if (media>=7){
		printf("Voc� est� aprovado!");
	}
	else{
		printf("Voc� est� reprovado!");
	}
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*15) Fazer um programa que identifique a idade para emiss�o da carteira
 de motorista. OBS: Se for menor de idade escrever quanto tempo falta para tirar a CNH.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade ");
	scanf("%i",&idade);
	if (idade>=18){
		printf("Parab�ns! Voc� pode tirar a CNH!!!");
	}
	else{
		//idade=18-idade;
		printf("Falta(m) %i ano(s) para voc� tirar a CNH.",18-idade);
	}
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*16) Fazer um programa que verifique qual � o maior ou igual de tr�s n�meros digitados.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite o primeiro n�mero ");
	scanf("%f",&a);
	printf("Digite o quarto n�mero ");
	scanf("%f",&b);
	printf("Digite o terceiro n�mero ");
	scanf("%f",&c);
	if(a>=b && a>=c){
		printf("O n�mero %.1f � maior",a);
	}
	else
	if(b>=a && b>=c){
		printf("O n�mero %.1f � maior",b);
	}
	else{
		printf("O n�mero %.1f � maior",c);
	}
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*17) Fazer um programa que calcule uma equa��o do 2� grau e determine se suas ra�zes s�o reais e diferentes, reais e iguais ou n�o possui ra�zes.

**delta > 0 -> possui ra�zes reais e diferentes
**delta = 0 -> possui ra�zes reais e iguais
**delta < 0 -> n�o possui ra�zes reais

a=1; b=-5; c=6; x1=2 e x2=3
a=1; b=-4; c=4; x1=2 e x2=2
a=1; b=-2; c=2; n�o possui ra�zes reais
a=1; b=-0,6; c=0,08; x1=0,4 e  x2=0,2 
 */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2;
	printf("Digite o valor de a ");
	scanf("%f",&a);
	printf("Digite o valor de b ");
	scanf("%f",&b);
	printf("Digite o valor de c ");
	scanf("%f",&c);
	delta=pow(b,2)-4*a*c;
	if (delta>0){
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/2*a;
		printf("A equa��o possui duas ra�zes reais e diferentes que s�o x1=%.1f e x2=%.1f",x1,x2);
	}
	else
		if (delta==0){
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/2*a;
		printf("A equa��o possui duas ra�zes reais e iguais que s�o x1=%.1f e x2=%.1f",x1,x2);
	}
	else{
		printf("A equa��o n�o possui ra�zes reais");
	}
	
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/* 18-Fa�a um programa que receba dois n�meros inteiros quaisquer e verifique se o 
primeiro � m�ltiplo do segundo. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Digite um n�mero inteiro ");
	scanf("%d",&n1);
	printf("Digite um n�mero inteiro ");
	scanf("%d",&n2);
	if (n1%n2==0)	{
		printf("O n�mero %d � m�ltiplo de %d.",n1,n2);
	}
	else{
		printf("O n�mero %d n�o � m�ltiplo de %d.",n1,n2);
	}
	getch();
	return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*19-Um cliente ao adquirir um determinado produto em uma loja, foi informado de que havia descontos progressivos conforme a quantidade de unidades compradas. O pre�o unit�rio � de R$ 75,00. Fa�a um programa que receba a quantidade de produtos e apresente na tela o valor pago:
-> sem desconto se a compra for menor que 10 unidades;
-> desconto de 10% se a compra for acima de 10 unidades;
-> desconto de 15% se a compra for acima de 40 unidades;
-> desconto de 25% se a compra for acima de 100 unidades. 
Teste: n=8 => R$ 600,00
n=15 => R$ 1012,50
n=60 => R$ 3825,00
n=150 => R$ 8437,50 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	float a=75, vtotal;
	printf("Digite a quantidade comprada ");
	scanf("%d",&n);
	if (n<10){
		vtotal=n*a;
		printf("Voc� comprou %d unidades e pagar� R$ %.2f",n,vtotal);
	}
	else
	if (n<=40){
		vtotal=n*a*0.90;
		//vtotal=n*a-n*a*0.10
		printf("Voc� comprou %d unidades, ter� um desconto de 10%% e pagar� R$ %.2f",n,vtotal);
	}
	else
	if(n<=100){
		vtotal=n*a*0.85;
		//vtotal=n*a-n*a*0.15
		printf("Voc� comprou %d unidades, ter� um desconto de 15%% e pagar� R$ %.2f",n,vtotal);
	}
	else{
			vtotal=n*a*0.75;
		//vtotal=n*a-n*a*0.25
		printf("Voc� comprou %d unidades, ter� um desconto de 25%% e pagar� R$ %.2f",n,vtotal);
	}
	getch();
	return 0;
}

}
