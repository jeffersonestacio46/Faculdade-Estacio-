#include <stdio.h>

int main(){
    
    float notas[3] = {85.5, 90.0, 78.3}; //Array de notas()

    printf("Nota do aluno 1 é: %.1f\n", notas[0]);
    printf("Nota do aluno 1 é: %.1f\n", notas[1]);
    printf("Nota do aluno 1 é: %.1f\n", notas[2]);
    //Observação: Arrays começa contar do 0, ou seja, o numero 85.5 faz perta de 0, e o 3 que informamos do lado de nota é apenas para informar quantos numero ou letras iremos colocar ao lado, mas no codigo sempre inicia com 0

    return 0;
}