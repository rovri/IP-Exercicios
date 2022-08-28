#include <stdio.h>

int main(){

int tamArranjo;

printf("Digite o tamanho do arranjo : ");
scanf("%i", &tamArranjo);

float arranjo1[tamArranjo];

for(int i = 0; i < tamArranjo; i++){

    printf("\nDigite o %i° valor: ", i+1);
    scanf("%f", &arranjo1[i]);
}

printf("\nO arranjo é:\n\n{");
for(int i = 0; i < tamArranjo; i++){

    if (tamArranjo - i == 1) {

       printf("%.2f}\n\n", arranjo1[i]);

    }
    else {

        printf("%.2f,", arranjo1[i]);


    }

}


return 0;
}