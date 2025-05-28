#include <stdio.h>

#define TAMANHO_TABULEIRO 10

// Função para criar o tabuleiro (inicializa com 0)
void criar_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            int val = tabuleiro[i][j];
            char c;
            if (val == 0) c = '~';       // Água
            else if (val == 3) c = '#';  // Navio
            else if (val == 5) c = '*';  // Área afetada
            else c = '?';                // Outros (não esperado)
            printf("%c ", c);
        }
        printf("\n");
    }
    printf("\n");
}

// Cria a matriz do cone 5x5
void matriz_cone(int matriz[5][5]) {
    int tamanho = 5;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (j >= (tamanho/2 - i) && j <= (tamanho/2 + i)) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

// Cria a matriz da cruz 5x5
void matriz_cruz(int matriz[5][5]) {
    int tamanho = 5;
    int meio = tamanho / 2;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i == meio || j == meio)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Cria a matriz do octaedro 5x5 (losango)
void matriz_octaedro(int matriz[5][5]) {
    int tamanho = 5;
    int meio = tamanho / 2;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (abs(meio - i) + abs(meio - j) <= meio)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }
}

// Aplica a habilidade sobre o tabuleiro, centralizando na origem (linha, coluna)
void aplicar_habilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int habilidade[5][5], int origem_linha, int origem_coluna) {
    int tamanho = 5;
    int meio = tamanho / 2;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            int linha_tab = origem_linha + i - meio;
            int col_tab = origem_coluna + j - meio;

            if (linha_tab >= 0 && linha_tab < TAMANHO_TABULEIRO && col_tab >= 0 && col_tab < TAMANHO_TABULEIRO) {
                if (habilidade[i][j] == 1) {
                    // Não sobrescreve navio (3)
                    if (tabuleiro[linha_tab][col_tab] != 3)
                        tabuleiro[linha_tab][col_tab] = 5; // área afetada
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    criar_tabuleiro(tabuleiro);

    // Define posição do navio
    tabuleiro[5][5] = 3;

    // Cria as matrizes de habilidade
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    matriz_cone(cone);
    matriz_cruz(cruz);
    matriz_octaedro(octaedro);

    // Aplica as habilidades no tabuleiro
    aplicar_habilidade(tabuleiro, cone, 1, 2);
    aplicar_habilidade(tabuleiro, cruz, 3, 2);
    aplicar_habilidade(tabuleiro, octaedro, 5, 2);

    // Exibe o tabuleiro com as habilidades aplicadas
    exibir_tabuleiro(tabuleiro);

    return 0;
}