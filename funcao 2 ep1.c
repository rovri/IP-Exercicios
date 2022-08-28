#include <stdio.h>

int main(){

  double potenciacao(double base, int expoente);
  

  double valor = potenciacao(3, 4);
  printf ("%f", valor);


  return 0;

  }
double potenciacao(double base, int expoente){

  int i=2;
  double valor = base;

  if (expoente < 0) return 0;

    else { 
    
      if(expoente == 0 && expoente != base) return 1;
        
        else {

          for(i=2; i<=expoente; i++){

          valor *= base;
          printf("valor = %f\n i=%i\n", valor, i);

          }
        
        }

    }

  
  
  
  return valor;
  
}