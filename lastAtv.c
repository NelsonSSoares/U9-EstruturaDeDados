# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>
# define MAX 5

float notes[MAX];
char names[MAX][4];
int absences[5];

void vector(){
	absences[0] = 3;
	absences[1] = 7;
	absences[2] = 15;
	absences[3] = 11;
	absences[4] = 1;
	
	notes[0] = 7.5;
	notes[1] = 9.5;
	notes[2] = 3.5;
	notes[3] = 4.5;
	notes[4] = 8.5;
	
	strcpy(names[0], "Lia");
	strcpy(names[1], "Ana");
	strcpy(names[2], "Ivo");
	strcpy(names[3], "Teo");
	strcpy(names[4], "Gil");
}

void ord_name(char names[MAX][4], float notes[MAX], int absences[], int qtd){

	int i, j, aux_absences;
	float aux_notes;
	char aux_names[4];
	
	for(i = 0; i < qtd-1; i++){
		for (j = 0; j < qtd - (i+1); j++){
			if (strcmp(names[j], names[j+1]) > 0){
				strcpy(aux_names , names[j]);
				strcpy(names[j] , names[j+1]);
				strcpy(names[j+1] , aux_names);
				
				aux_notes = notes[j];
				notes[j] = notes[j+1];
				notes[j+1] = aux_notes;

				aux_absences = absences[j];
				absences[j] = absences[j+1];
				absences[j+1] = aux_absences;
			}
		}
	}
}

void ord_nota(float notes[MAX], int absences[], char names[MAX][4], int qtd){
int i, j, min, aux_absences;
float aux_notes;
char aux_names[4];

for(i = 0; i < qtd-1; i++){
	min = i;
for (j = i + 1; j < qtd; j++){

	if (notes[j] < notes[min])
	min = j;
	
	}
	if (i != min){
		aux_notes = notes[i];
		notes[i] = notes[min];
		notes[min] = aux_notes;

		aux_absences = absences[i];
		absences[i] = absences[min];
		absences[min] = aux_absences;
		
		strcpy(aux_names , names[i]);
		strcpy(names[i] , names[min]);
		strcpy(names[min] , aux_names);
	}
	}
}

void ord_absences(int absences[], float notes[MAX], char names[MAX][4], int qtd){ 
  int i, j, aux_absences;
	float aux_notes;
	char aux_names[4];
	
     for (i=1;i<qtd;i++){ 
			 aux_absences=absences[i]; 
			 aux_notes=notes[i];
			 strcpy(aux_names, names[i]);
			 j=i-1;
			 while (j>=0 && absences[j]>aux_absences){
					absences[j+1] = absences[j];
				 	notes[j+1] = notes[j];
				 	strcpy(names[j+1], names[j]);
						j--;
			 }
			 	absences[j+1] = aux_absences;
				notes[j+1] = aux_notes;
				strcpy(names[j+1], aux_names);
    }
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	vector();
		printf("\n\n================== ATIVIDADE 8 ===================");
	
	printf("\n\n Valores iniciais");
	printf("\n==================================================\n");
	printf("names  =\t");
	for (i = 0; i < MAX; i++){
		  printf("%s  |\t",names[i]);
	}
	printf("\n\n");
	printf("notas  =\t");
	for (i = 0; i < MAX; i++){
		printf("%.1f  |\t",notes[i]);
	}
	printf("\n\n");
	printf("Faltas =\t");
	for (i = 0; i < MAX; i++){
		printf(" %d   |\t",absences[i]);
	}
	printf("\n==================================================\n");
	printf("\n\n");

	
	ord_name(names, notes, absences,  MAX);
	printf("\n\n Ordenação por names");
	printf("\n==================================================\n");
	printf("names  =\t");
	for (i = 0; i < MAX; i++){
		  printf("%s  |\t",names[i]);
	}
	printf("\n\n");
	printf("notas  =\t");
	for (i = 0; i < MAX; i++){
		printf("%.1f  |\t",notes[i]);
	}
	printf("\n\n");
	printf("Faltas =\t");
	for (i = 0; i < MAX; i++){
		printf(" %d   |\t",absences[i]);
	}
	printf("\n==================================================\n");


	ord_nota(notes, absences, names, MAX);
	printf("\n\n Ordenação por notas");
	printf("\n==================================================\n");
	printf("names  =\t");
	for (i = 0; i < MAX; i++){
		  printf("%s  |\t",names[i]);
	}
	printf("\n\n");
	printf("notas  =\t");
	for (i = 0; i < MAX; i++){
		printf("%.1f  |\t",notes[i]);
	}
	printf("\n\n");
	printf("Faltas =\t");
	for (i = 0; i < MAX; i++){
		printf(" %d   |\t",absences[i]);
	}
	printf("\n==================================================\n");
	

	ord_absences(absences, notes, names, MAX);
	printf("\n\n Ordenação por Faltas");
	printf("\n==================================================\n");
	printf("names  =\t");
	for (i = 0; i < MAX; i++){
		  printf("%s  |\t",names[i]);
	}
	printf("\n\n");
	printf("notes  =\t");
	for (i = 0; i < MAX; i++){
		printf("%.1f  |\t",notes[i]);
	}
	printf("\n\n");
	printf("Faltas =\t");
	for (i = 0; i < MAX; i++){
		printf(" %d   |\t",absences[i]);
	}
	printf("\n==================================================\n");
	printf("\n\n");
	return 0;
}

