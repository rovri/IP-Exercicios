#include <stdio.h>

int main(){

    double areaTrapezio(double baseMaior, double baseMenor, double altura);
    double area;
    double areaRetangulo(double base, double altura);
    double areaDoQuadrado(double lado);

    area = areaTrapezio(4, 6, 3);

    printf("%f\n", area);

    areaRetangulo(11, 27);

    areaDoQuadrado(6);

    return 0;
}

double areaTrapezio(double baseMaior, double baseMenor, double altura){

    double area = (baseMaior + baseMenor) * altura / 2;

    return area;
}

double areaRetangulo(double base, double altura){

    double area = areaTrapezio(base,base,altura);

    printf("Area do retangulo: %f\n", area);

    return area;
}

double areaDoQuadrado(double lado){

    double area = areaRetangulo(lado, lado);

    printf("Area do quadrado eh %f\n", area);

    return area;
}
