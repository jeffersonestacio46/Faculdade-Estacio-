#include <stdio.h>

int main(){
    int matriz[3][3]; //Declaração de uma matriz 3x3 de inteiros

    //Inicialização da matriz usando estruturas de repetição 'for' aninhadas
    for(int i = 0; i < 3; i++){//cada ciclo de i, vai gera ciclo de j; 
        //                                                                          ex: [2][1] por exemplo, usando o for sem precisar atribuir valor em cada matriz
        for(int j = 0; j < 3; j++){
            matriz[i][j] = i + j; //Atribuindo valores a matriz
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}