#include <stdio.h>

int main() {

  long fibonacci(int n);

  int n;
  printf("Escreva a posição de Fibonacci: ");
  scanf("%i", &n);
  long f = fibonacci(n);

  printf("O número de Fibonacci na posição %i é igual a: %li\n", n, f);

  return 0;
}

long fibonacci(int n){

  long penultimo, ultimo, atual;
  long temporaria;
  int i;

  penultimo = 0;
  ultimo = 1;
  atual = 0;

  if(n < 0) return -1;

    else{
  
      if(n == 1) return 1; 

        else{
  
          for(i = 0; i < n-1; i++){

            atual = penultimo + ultimo;
            penultimo = ultimo;
            ultimo = atual;

            printf("atual = %li (%i)\n", atual, i+2);
        
          }
        }
    }
  return atual;
}