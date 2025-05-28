#include <stdio.h>

int main(){
    int i = 1; // variavel de incremento

    do {//entrada (1x pelo menos); em caso a respota seja falsa, vai exibir no console apenas um numero ou uma opção do loop
        printf("%d\n", i); //saida
        i++; //Incremento
    } while (i <= 5);

    return 0;
    
}