#include "lib.h"

void init(char mat[][20], int dim){
    for(int i=0; i<dim; i++){
        for(int j=0; j<20; j++){
            mat[i][j]=0;
        }
    }
}

void init(char ar[], int dim){
    for(int i=0; i<dim; i++){
        ar[i]=0;
    }
}

int ricerca_nomi(char elenco_nomi[10][20], char inserimento_nomi[20]){
    int a=0;
    for(int i=0; i<10; i++){
        a=0;
        for(int j=0; j<20; j++){
            if(elenco_nomi[i][j]==inserimento_nomi[j]){
                a++;
            }else if(a==20){
                return i;
            }else{
                break;
            }
        }
    }
    return -1;
}
