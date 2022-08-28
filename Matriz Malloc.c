#include <stdio.h>

int main(){

    char babytriz[3][10] = {{'o', 'i', '\0'}, {'g', 'o', 's', 't', 'o', 's', 'a', 'o', '\0'}, {'b', 'l', 'z', '\0'}};

    char** matriz = (char**) malloc(sizeof(char*)*3);

    matriz[0] = (char*) malloc(sizeof(char)*3);
    matriz[1] = (char*) malloc(sizeof(char)*9);
    matriz[2] = (char*) malloc(sizeof(char)*4);

    for(int i = 0; i < 3; i++){

        int o = -1;

         do {

            o++;

            matriz[i][o] = babytriz[i][o];

        } while (babytriz[i][o] != '\0');

    };

    for(int i = 0; i<3; i++){

        printf("%s ", matriz[i]);
    }

    return 0;
}
