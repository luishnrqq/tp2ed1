# ifndef tepe2_h
# define tepe2_h

typedef struct celula TADCelula;
typedef struct MatrizEsparsa TADTabuleiro;

typedef struct {
 int linha;
 int coluna;
 int valor;
}Celula;

typedef struct {
    int linha[100];
    int col[100];
}MatrizEsparsa;

#endif