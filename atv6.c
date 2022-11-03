#include <stdio.h>
#include <string.h>

void ordernar(char nomes [7][30]) {
    int x,r,y;
    char aux[80];
    
    for(x = 0; x<=6; x++){
        for (y = x+1; y<= 6; y++){
            r = strcmp(nomes[x], nomes[y]);
            if(r>0){
                strcpy(aux, nomes[x]);
                strcpy(nomes[x], nomes[y]);
                strcpy(nomes[y], aux);
            }
        }
    }
    
    for(int i=0; i<7; i++){
        printf("%s \n", nomes[i]);       
    }
 
}

int main()
{
    char nomes [7][30] = { {"Miriam"} , 
                         {"Sueli"}, 
                         {"Ana"}, 
                         {"Miguel"}, 
                         {"Daniel"}, 
                         {"Tales"},
                         {"Humberto"}};
                         
    ordernar(nomes);
    return 0;
}
