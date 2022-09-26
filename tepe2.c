#include "tepe2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct celula{
//  int linha;
//  int coluna;
//  int valor;
// };

// struct MatrizEsparsa{
//   //Matriz de célula para compor o tabuleiro  
//   struct celula celulas[100][100];
// };


int MatrizCria(MatrizEsparsa **m){
   
    //Aloca a matriz
    *m = (MatrizEsparsa*) malloc(sizeof(MatrizEsparsa));
    if(*m == NULL){
        return 0;
    }
    //Inicializa a matriz
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            (*m)->linha[i] = 0;
            (*m)->col[j] = 0;
        }
    }
    return 1;
}

void MatrizDestroi(MatrizEsparsa **m){
    free(*m);
};