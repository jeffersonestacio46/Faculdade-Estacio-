#include <stdio.h>

int main (){
    int i = 1;
    while (i <= 10){// Loop externo
        int j = 1;//Variavel local
        while (j <= 10){//Loop interno
            printf("%d\t", i * j);
            j++;//Incremento loop interno
        }
        printf("\n");
        i++;//Incremento loop externo
    }
    return 0;
}