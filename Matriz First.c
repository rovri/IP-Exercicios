#include <stdio.h>

int main(){

    char matriz[3][5] = {{'O', 'n', 'e'}, {'T', 'w', 'o'}, {'T', 'h', 'r', 'e', 'e'}};

    for(int i= 0; i < 3; i++){

        for(int o= 0; o < 5; o++){

            printf("%c", matriz[i][o]);

        }

        printf("\n");
    }

    return 0;
}

