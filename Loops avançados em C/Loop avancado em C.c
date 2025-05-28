#include <stdio.h>

int main (){
    //i e j iniciados ao mesmo tempo
    for(int i = 0, j = 10; i < j; i++, j--){
        printf("i - %d, j - %d\n", i, j);
    }
    return 0;
}//controle simultâneo