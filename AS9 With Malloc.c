#include <stdio.h>
#include <stdlib.h>

int main(){

    double *somaPolinomios(double *p, double *q, int n);

    double A[5] = {1.4,34.2,3,2,75};
    double B[5] = {3,4.1,5.1,11,8124};
    int n = 5;

    double *pontA;
    pontA = A;
    double *pontB;
    pontB = B;

    double *Soma;
    Soma = somaPolinomios(pontA, pontB, n);

    for(int i = 0; i < n; i++){

        printf("i = %i, %f\n", i, Soma[i]);
    }
    return 0;
}

double *somaPolinomios(double *p, double *q, int n){

    double *pontSoma = (double*) malloc(sizeof(double)*n);

    for(int i = 0; i < n; i++){

        pontSoma[i] = p[i] + q[i];
    }
    return pontSoma;
}
