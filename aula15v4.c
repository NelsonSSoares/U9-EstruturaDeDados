/* 114- Crie um programa que receba 10 letras via teclado e as ordene em ordem alfabética crescente pelo método bolha. (OBS: letra maiúscula) */


# include <stdio.h>

# include <conio.h>

# include <locale.h>

# include <stdlib.h>

# include <ctype.h>

# define MAX 10


void bsort (char v[ ], int qtd){

     int i, j;

     char aux;

     for (i=1;i<qtd;i++){

          for (j=0;j<qtd-i;j++){

               if (v[j]>v[j+1]){

                     aux=v[j];

                     v[j]=v[j+1];

                     v[j+1]=aux;

               }

          }

     }

}


int main(){

        setlocale(LC_ALL, "Portuguese");

        char vet[MAX];

        int i;

        for (i=0;i<MAX;i++){

                printf("Digite uma letra ");

                scanf("%s",&vet[i]);

        }

        bsort(vet,MAX);

        for(i=0;i<MAX;i++){

                vet[i]=toupper(vet[i]);

                printf("%c\t",vet[i]);

        }

        getch();

        return 0;

}
