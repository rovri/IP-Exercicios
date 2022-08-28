#include <stdio.h>

int main(){

    int TransfMinu(char c);
    char x = 'P';

    printf("%c", TransfMinu(x));



    return 0;
}

int TransfMinu(char c){

    if(c >= 'A' && c <= 'Z') {

        c = c - 'A' + 'a';
        return c;

    }
    else return c;


}
