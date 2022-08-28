#include <stdio.h>

int main(){

    double *somaPolinomios(double *p, double *q, int n);

    double p1[6];
    p1[0] = 1;
    p1[1] = 3;
    p1[2] = 45;
    p1[3] = 67;
    p1[4] = 21;
    p1[5] = 43;

    double q1[6];
    q1[0] = 3;
    q1[1] = 2;
    q1[2] = 1;
    q1[3] = 768;
    q1[4] = 1;
    q1[5] = 23;

    int n = 6;

    double soma[n];
    double *pontQP;
    pontQP = soma;
    *pontQP = *somaPolinomios(p1, q1, n);

    for (int k = 0; k < n; k++){

        *(pontQP+k) = *(somaPolinomios(p1, q1, n)+k);

    }

    //printf("%.2f\n", *pontQP);
    //printf("%.2f\n", *pontQP);

    for(int i= 0; i < n; i++){

        printf("%.2fx^%i + ", *(pontQP + i), i);
    }

    //printf("%f\n", *(pontQP+1));

    printf("\n");

    return 0;
}

double *somaPolinomios(double *p, double *q, int n){

    double r[n];
    double *pontR = r;

    for(int i = 0; i < n; i++){

        r[i] = *(p + i) + *(q + i);
    }

    for(int j= 0; j < n; j++){

        //printf("%fx^%i + ", r[j], j);
    }

    //printf("0 \n\n");

    return pontR;

}
