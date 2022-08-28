#include <stdio.h>

int main(){

    struct horario{

        int horas;
        int minutos;
        int segundos;
        char extra;
    };

    struct horario agora;

    agora.horas = 11;
    agora.minutos = 50;
    agora.segundos = 23;
    agora.extra = 'c';

    printf("%i:%i:%i %c\n", agora.horas, agora.minutos, agora.segundos, agora.extra);

    return 0;
}
