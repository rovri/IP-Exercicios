#include <stdio.h>

int main(){

    void retangulo(int largura, int altura);

    retangulo(5, 4);

    return 0;
}

void retangulo(int largura, int altura){

    int coluna, linha;

    for(coluna = 1; coluna <= altura; coluna++){

        for(linha = 1; linha <= largura; linha++){
            printf("#");
        }

        printf("\n");
    }
}
