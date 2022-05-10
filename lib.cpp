//
// Created by gasta on 10/05/2022.
//

#include "lib.h"

char init(char mat[][20]){
    for(int i=0; i<10; i++){
        for(int j=0; j<20; j++){
            mat[i][j]=0;
        }
    }
}
char init(char ar[20]){
    for(int i=0; i<20; i++){
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
            }else{
                break;
            }
        }
    }if(a==20){
        return i;
    }
}
