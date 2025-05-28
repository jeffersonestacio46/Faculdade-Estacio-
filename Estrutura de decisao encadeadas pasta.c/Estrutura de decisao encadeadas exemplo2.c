#include <stdio.h>

int main (){

    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);
    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //F >= 50

    if (nota >= 90){
        printf("conceito A!\n");
    }else if (nota >= 80){
        printf("Conceito é B!\n");
    }else if (nota >= 70){
        printf("Conceito C!\n");
    }else if (nota >= 60){
        printf("Conceito D!\n");
    }
}
