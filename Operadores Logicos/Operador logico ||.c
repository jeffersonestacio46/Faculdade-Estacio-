#include <stdio.h>

int main (){

    int a = 10, b = 5;
    
    //O operador || retorna verdadeiro se pelo menos uma das expressões for positiva, se ambas expressões forem falsa o resultado será falso
    //Segue o exemplo a baixo:
    if(a > 0  || b > 0){
        printf("Pelo menos um dos numeros é positivo\n");
    }else {
        printf("Ambos numero são postivos\n");
    }



}