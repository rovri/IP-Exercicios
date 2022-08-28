#include <stdio.h>

int main(){

    int arranjo[4];
    arranjo[0] = 4;
    arranjo[1] = 7;
    arranjo[2] = 15;
    arranjo[3] = 94;

    int *pontArranjo;
    pontArranjo = &arranjo[0];

    printf("valor apontado = %i , endereco apontado = %i\n", *pontArranjo, pontArranjo);

    printf("sizeofint = %i\n", sizeof(int));

    pontArranjo += 2;

    printf("valor apontado = %i , endereco apontado = %i\n", *pontArranjo, pontArranjo);


    return 0;
}
