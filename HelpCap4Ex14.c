#include <stdio.h>

int main(){

    double media(double *arranjo, double n);
    double var(double *arranjo, double n, double media);

    double secP[7] = {9, 9, 8, 8, 9, 10, 8};
    double nsecP = 7; // Número de componentes do arranjo

    double casados[14] = {26,28,29,30,30,31,32,32,33,34,35,36,39,44};
    double nCasados = 14;

    double todos[28] = {26,28,29,30,30,31,32,32,33,34,35,36,39,44,20,23,25,26,27,34,37,37,38,40,41,41,43,46};
    double nTodos = 28;

    double* pontsecP = secP;

    double* pontCasados;
    pontCasados = casados;

    double* pontTodos = todos;

    double mediaP = media(pontsecP, nsecP);

    printf("\t--Section P--\n\nMedia = %f\n", mediaP);

    double varP = var(pontsecP, nsecP, mediaP);

    printf("Variancia = %f\n", varP);

    double mediaC = media(pontCasados, nCasados);

    double varCasados = var(pontCasados, nCasados, mediaC);

    printf("\n\t--Casados--\n\nMedia = %.3f\nVariancia = %.3f\n", mediaC, varCasados);

    double mediaT = media(pontTodos, nTodos);
    double varTodos = var(pontTodos, nTodos, mediaT);
    printf("\n\t--Todos--\n\nMedia = %.3f\nVariancia = %.3f\n", mediaT, varTodos);

    double secT[7] = {8, 9, 8, 10, 7, 7, 9};
    double nsecT = 7;

    double* pontsecT = secT;

    double mediasecT = media(pontsecT, nsecT);

    double varsecT = var(pontsecT, nsecT, mediasecT);

    printf("\n\t--Section T--\n\nMedia = %.3f\nVariancia = %.3f\n", mediasecT, varsecT);

    double solteiros[14] = {20,23,25,26,27,34,37,37,38,40,41,41,43,46};
    double nsolteiros = 14;

    double* pontsolteiros = solteiros;

    double mediasolteiros = media(pontsolteiros, nsolteiros);

    double varsolteiros = var(pontsolteiros, nsolteiros, mediasolteiros);

    printf("\n\t--solteiros--\n\nMedia = %.3f\nVariancia = %.3f\n", mediasolteiros, varsolteiros);

    double todasSec[25] = {9, 7, 8, 9, 4, 7, 7, 8, 10, 9, 9, 8, 9, 8, 10, 7, 7, 9, 9, 9, 8, 8, 9, 10, 8};
    double ntodasSec = 25;

    double* ponttodasSec = todasSec;

    double mediatodasSec = media(ponttodasSec, ntodasSec);

    double vartodasSec = var(ponttodasSec, ntodasSec, mediatodasSec);

    printf("\n\t--todasSec--\n\nMedia = %.3f\nVariancia = %.3f\n", mediatodasSec, vartodasSec);

    return 0;
}

double media(double *arranjo, double n){

    double media = 0;
    double somaValores = 0;

    for (int i= 0; i<n ; i++){
        somaValores += arranjo[i];
    };

    media = somaValores / n;

    return media;

}

double var(double *arranjo, double n, double media){

    double somaVar = 0;
    double var = 0;
    for(int i=0; i<n; i++){

        somaVar += (arranjo[i] - media) * (arranjo[i] - media) ;
    }

    var = somaVar / n;

    return var;
}
