#include <stdio.h>

int main(){

  int passosDaDivisao(double dividendo, double divisor, double limiar);

  printf("%i", passosDaDivisao(10, 1, 2));


  return 0;
}

int passosDaDivisao(double dividendo, double divisor, double limiar){

  int i;

  if(dividendo > 0 && divisor > 0 && limiar > 0){

    for(i=0; dividendo >= limiar; i++) {

      dividendo /= divisor;
      printf("dividendo = %f\ni = %i\n", dividendo, i);

    }
  }
    else return -1;

  return i;
}
