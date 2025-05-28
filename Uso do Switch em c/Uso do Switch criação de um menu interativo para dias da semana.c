#include <stdio.h>

int main (){
    int dia;

printf("Entre o valor do dia\n");
scanf("%d", &dia);

if (dia == 1){
    printf("Domingo\n");
}else if (dia == 2){
    printf("Segunda-Feira\n");
}else if(dia == 3){
    printf("Terça-Feira\n");
}else if(dia == 4){
    printf("Quarta-Feira\n");
}else if(dia == 5){
    printf("Quinta-Feira\n");
}else if(dia == 6){
    printf("Sexta-Feira");
}else if(dia == 7){
    printf("Domingo");
}
}