#include <stdio.h>

int main() {
    int dia;

    printf("Entre o valor do dia (1-7):\n");
    scanf("%d", &dia);

    switch (dia){
        case 1:
        printf("Domingo\n");
        break;
        case 2:
        printf("Segunda-feira");
        break;
        case 3:
        printf("Terça-Feira");
        break;
        case 4:
        printf("Quarta-Feira");
        break;
        case 5:
        printf("Quinta-Feira");
        break;
        case 6:
        printf("Sexta-Feira");
        break;
        case 7:
        printf("Sabado");
        break;
        
    default:
    printf("Numero invalido");
        break;
    }
}