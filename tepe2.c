#include "tepe2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct celula{
 int linha;
 int coluna;
 int valor;
};

struct MatrizEsparsa{
  //Matriz de célula para compor o tabuleiro  
  struct celula celulas[100][100];
};


int MatrizCria(MatrizEsparsa **m){
    int i,j;
    TADCelula *mat = malloc(mat->linha * sizeof (MatrizEsparsa));
    for( i = 0;i < mat->linha;i++){
        mat[i] = malloc(mat->coluna * sizeof(MatrizEsparsa));
    }

    for (i=0; i < mat->linha; i++){
        for (j=0; j < mat->coluna; j++){
            m[i][j] = 0;
        }
    }

    if (*m == NULL ) {
        printf ("Memoria insuficiente !\n");
        exit (1);
  } 
}