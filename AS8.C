#include <stdio.h>

int main(){

    /*

    int *valores;
    int arranjo[2];
    valores = &arranjo[1];

    arranjo[1] = 5;
    arranjo[0] = 87;

    int *segundo;
    segundo = valores + sizeof(int);

    printf("%i", (valores + sizeof(int)));  // 6422028 6422024

    */

    int contagem1(int *valores, int n, int x);


    int arranjo[5];
    arranjo[0] = 1;
    arranjo[1] = 2;
    arranjo[2] = 1;
    arranjo[3] = 2;
    arranjo[4] = 6;

    int contX = contagem1(arranjo, 5, 2);

    printf("%i\n", contX);

    return 0;
}

int contagem1(int *valores, int n, int x){

    int contX = 0;

    for(int i = 0; i < n ; i++){

        if(x == *(valores + i)) contX++;
    }

    return contX;



    /* for(int i = 0 ;i <= n; i++){

        if(x == arranjo[i]) contX++;
    }
    */

    return contX;
}
