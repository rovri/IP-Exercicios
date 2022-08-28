#include <stdio.h>

int main(){

    double *somaPolinomios(double *p, double *q, int n);

    double p1[3];
    p1[0] = 1;
    p1[1] = 3;
    p1[2] = 5;

    double q1[3];
    q1[0] = 3;
    q1[1] = 2;
    q1[2] = 1;

    int n = 3;

    double *pontQP;
    pontQP = somaPolinomios(p1, q1, n);

     for(int i= 0; i < n; i++){

        printf("%px^%i + ", pontQP, i);

    }

    printf("%f", *(pontQP+1));

    return 0;
}

double *somaPolinomios(double *p, double *q, int n){

    double r[n];
    double *pontR = r;

    for(int i = 0; i < n; i++){

        r[i] = *(p + i) + *(q + i);
        // printf("a");
    }

    return pontR;

}
