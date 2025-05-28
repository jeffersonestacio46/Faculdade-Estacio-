#include <stdio.h>

int main (){

    int i = 0;

    while (i <= 10){
        if (i % 2 != 0){ 
        //O uso do (!=) diz que se for diferente igual a 0 a condição irá imprimir numero impar, caso estivesse com (==) iria imprimir os numeros pares
            printf("O numero %d é impar!\n", i);
        }
        
        i++;
    }
    
    return 0;
}