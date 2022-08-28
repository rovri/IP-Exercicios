#include <stdio.h>

int unidades;
int dezenas;
int centenas;
int milhares;
float valor1 = 5416;

int main(){

  printf("%i\n%f\n", valor1, valor1);
  void separaNumero(int valor);
  separaNumero(valor1);

  return 0;
}

void separaNumero(int valor){

  if(valor < 0 || valor > 9999) {

    unidades = dezenas = centenas = milhares = -1;
    printf("%i\n%i\n%i\n%i", unidades, dezenas, centenas, milhares);

  }
    else {

      printf("o valor eh %i\n", valor);

      unidades = valor % 10;

      dezenas = valor % 100 / 10;

      centenas = valor % 1000 / 100;

      milhares = valor / 1000;

      printf("%i\n%i\n%i\n%i", milhares, centenas, dezenas, unidades);
    }

}
