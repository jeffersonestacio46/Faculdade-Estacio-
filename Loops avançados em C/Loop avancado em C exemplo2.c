#include <stdio.h>

int main (){
    //&& ou ||
    //i e j iniciados ao mesmo tempo
    //++ ou --
    for(int i = 0, j = 10; i < 5 && j > 5; i++, j--){
        printf("i - %d, j - %d\n", i, j);
    }return 0;
}//controle simutaneo