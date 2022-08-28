#include <stdio.h>

int main(){

conjecturaDeCollatz(564684);

    return 0;
}

void conjecturaDeCollatz(int n){

    printf("Imprimindo sequencia iniciando em %i\n", n);

    while (n>1){
        if (n % 2 == 0) n = n/2;
        else n = 3*n + 1;

        printf("%i\n",n);
    }
}
