#include <stdio.h>

int main() {
    // Movimento da Torre
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Espaço para separar as saídas

    // Movimento do Bispo
    int casasBispo = 5;
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < casasBispo; i++) {
        printf("Cima, Direita\n");
    }

    printf("\n"); // Espaço para separar as saídas

    // Movimento da Rainha
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    for (int i = 0; i < casasRainha; i++) {
        printf("Esquerda\n");
    }

    return 0;
}