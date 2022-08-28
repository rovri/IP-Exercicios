#include <stdio.h>

int main(){
  
  double somaIntervalo(double inicio, double fim, double passo);
  
  double valor = somaIntervalo(1, 2, 0.25);

  printf("O resultado final é: %f\n", valor);
  
  return 0;
}

double somaIntervalo(double inicio, double fim, double passo) {

  double atual = inicio;
  double somaTotal = 0;

  if (inicio <= 0 || fim <= 0 || passo <= 0) {
   return(somaTotal); }
    
   else {
  
    while(atual < fim) {

      somaTotal += atual;
      atual += passo;
    
      printf("somaTotal = %f\natual = %f\n", somaTotal, atual);
      
      } 
    }
  return(somaTotal);
  
}