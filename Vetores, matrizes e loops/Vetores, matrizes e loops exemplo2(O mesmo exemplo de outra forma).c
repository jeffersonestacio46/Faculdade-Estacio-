#include <stdio.h>

int main(){
    int vetor [5]; //Declaração de um vetor de 5 inteiros
    //Inicialização do vetor usando o loop 'For'
    for (int i = 0; i < 5; i++){//i++ é incremento
        vetor[i]  = i * 2; // Atribuindo valor ao vetor
            printf("vetor [%d] = %d\n", i, vetor[i]);
    }
    return 0;
}