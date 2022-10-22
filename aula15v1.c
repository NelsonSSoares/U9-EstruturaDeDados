/*109- Crie um algoritmo que coloque em ordem decrescente pelo método bolha o vetor que recebe os números: 95, 27, 69, 54, 12, 89, 43, 77 e imprima-os.  */

# include <stdio.h>

# include <conio.h>

# include <locale.h>

# include <stdlib.h>

# define MAX 8


void bsort (int v[ ], int qtd){

     int i, j;

     int aux;

     for (i=1;i<qtd;i++){

          for (j=0;j<qtd-i;j++){

               if (v[j]<v[j+1]){

                     aux=v[j];

                     v[j]=v[j+1];

                     v[j+1]=aux;

               }

          }

     }

}


int main(){

        setlocale(LC_ALL, "Portuguese");

        int i, vet[MAX]={95,27,69,54,12,89,43,77};

        bsort (vet, MAX);

        printf("\n\nO vetor ordenado é: \n\n");

        for(i=0;i<MAX;i++){

                printf("%d\t",vet[i]);

        }

        getch();

        return 0;

}
