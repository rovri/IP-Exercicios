#include <stdio.h>

int main(){

    typedef struct aux{

        float nota;
        float freq;

    }aluno;

    aluno Victor;

    printf("Digite a nota e a frequencia do Victor: ");
    scanf("%f%f", &Victor.nota, &Victor.freq);

    printf("%.2f %.2f", Victor.nota, Victor.freq);

    return 0;
}
