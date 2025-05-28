#include <stdio.h>

#define TAM_ESTADO 10
#define TAM_CODIGO 5
#define TAM_CIDADE 20

int main() {
    // Dados da primeira entrada
    char estado1[TAM_ESTADO];
    char codigo_da_carta1[TAM_CODIGO];
    char nome_da_cidade1[TAM_CIDADE];
    int populacao1;
    float area_em_m2_1;
    float PIB1;
    int numero_de_pontos_turisticos1;

    // Dados da segunda entrada
    char estado2[TAM_ESTADO];
    char codigo_da_carta2[TAM_CODIGO];
    char nome_da_cidade2[TAM_CIDADE];
    int populacao2;
    float area_em_m2_2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    // Coletando dados da primeira vez
    printf("--- Coleta de dados da 1ª cidade ---\n");
    printf("Digite o nome do estado:\n");
    scanf("%9s", estado1);
    printf("Digite o codigo da carta:\n");
    scanf("%4s", codigo_da_carta1);
    printf("Digite o nome da cidade:\n");
    scanf("%19s", nome_da_cidade1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a area em m²:\n");
    scanf("%f", &area_em_m2_1);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos1);
    while (getchar() != '\n'); // Limpar buffer

    // Coletando dados da segunda vez
    printf("\n--- Coleta de dados da 2ª cidade ---\n");
    printf("Digite o nome do estado:\n");
    scanf("%9s", estado2);
    printf("Digite o codigo da carta:\n");
    scanf("%4s", codigo_da_carta2);
    printf("Digite o nome da cidade:\n");
    scanf("%19s", nome_da_cidade2);
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite a area em m²:\n");
    scanf("%f", &area_em_m2_2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos2);
    while (getchar() != '\n'); // Limpar buffer

    // Imprimindo os dados coletados
    printf("\n--- Dados das cidades informadas ---\n");

    printf("\n--- Dados da 1ª cidade ---\n");
    printf("O nome do estado é: %s\n", estado1);
    printf("O codigo da carta é: %s\n", codigo_da_carta1);
    printf("O nome da cidade é: %s\n", nome_da_cidade1);
    printf("O numero da população é: %d mil de pessoas\n", populacao1);
    printf("O tamanho da area em m² é: %.2f m²\n", area_em_m2_1);
    printf("O PIB é de: %.2f milhões de reais\n", PIB1);
    printf("Possui o número de %d pontos turisticos\n", numero_de_pontos_turisticos1);

    printf("\n--- Dados da 2ª cidade ---\n");
    printf("O nome do estado é: %s\n", estado2);
    printf("O codigo da carta é: %s\n", codigo_da_carta2);
    printf("O nome da cidade é: %s\n", nome_da_cidade2);
    printf("O numero da população é: %d mil de pessoas\n", populacao2);
    printf("O tamanho da area em m² é: %.2f m²\n", area_em_m2_2);
    printf("O PIB é de: %.2f milhões de reais\n", PIB2);
    printf("Possui o número de %d pontos turisticos\n", numero_de_pontos_turisticos2);

    return 0;
}