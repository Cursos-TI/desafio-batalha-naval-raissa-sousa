#include <stdio.h>

#define TAM 10
#define H 5      // tamanho das matrizes de habilidade
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    /*char letras[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Criando o tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    int tamanhoNavio = 3;
    
    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 1; // navio horizontal
    int linhaV = 5, colunaV = 6; // navio vertical

    // Validação navio horizontal
    if (colunaH + tamanhoNavio > 10) {
        printf("Erro: navio horizontal fora do tabuleiro.\n");
        return 1;
    }

    // Posiciona navio horizontal
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaH][colunaH + i] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Validação navio vertical
    if (linhaV + tamanhoNavio > 10) {
        printf("Erro: navio vertical fora do tabuleiro.\n");
        return 1;
    }

    // Posiciona navio vertical
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    //Exibindo o tabuleiro
    printf("\nTABULEIRO BATALHA NAVAL\n\n");
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }*/

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
   
    /*char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];
    int tamanhoNavio = 3;

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ---------------- NAVIO HORIZONTAL ----------------
    int linhaH = 2, colunaH = 1;

    if (colunaH + tamanhoNavio > 10) {
        printf("Erro: navio horizontal fora do tabuleiro.\n");
        return 1;
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaH][colunaH + i] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // ---------------- NAVIO VERTICAL ----------------
    int linhaV = 5, colunaV = 6;

    if (linhaV + tamanhoNavio > 10) {
        printf("Erro: navio vertical fora do tabuleiro.\n");
        return 1;
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaV + i][colunaV] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // ---------------- NAVIO DIAGONAL ↘ ----------------
    int linhaD1 = 4, colunaD1 = 1;

    if (linhaD1 + tamanhoNavio > 10 || colunaD1 + tamanhoNavio > 10) {
        printf("Erro: navio diagonal fora do tabuleiro.\n");
        return 1;
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaD1 + i][colunaD1 + i] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
    }

    // ---------------- NAVIO DIAGONAL ↙ ----------------
    int linhaD2 = 0, colunaD2 = 9;

    if (linhaD2 + tamanhoNavio > 10 || colunaD2 - (tamanhoNavio - 1) < 0) {
        printf("Erro: navio diagonal fora do tabuleiro.\n");
        return 1;
    }

    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaD2 + i][colunaD2 - i] != 0) {
            printf("Erro: sobreposição de navios.\n");
            return 1;
        }
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
    }

    // ---------------- EXIBIÇÃO DO TABULEIRO ----------------
    printf("\nTABULEIRO BATALHA NAVAL\n\n");
    printf("  ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }*/

    // Nível Mestre - Habilidades Especiais com Matrizes
    
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[TAM][TAM];

    // ---------- MATRIZES DE HABILIDADE ----------
    int cone[H][H];
    int cruz[H][H];
    int octaedro[H][H];

    // ---------- INICIALIZA TABULEIRO ----------
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // ---------- NAVIOS (reaproveitando sua lógica) ----------
    tabuleiro[2][1] = NAVIO;
    tabuleiro[2][2] = NAVIO;
    tabuleiro[2][3] = NAVIO;

    tabuleiro[5][6] = NAVIO;
    tabuleiro[6][6] = NAVIO;
    tabuleiro[7][6] = NAVIO;


    // =====================================================
    // CONSTRUÇÃO DAS MATRIZES DE HABILIDADE
    // =====================================================

    // ---------- CONE ----------
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            int centro = H / 2;
            if (j >= centro - i && j <= centro + i) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }
        }
    }

    // ---------- CRUZ ----------
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (i == H / 2 || j == H / 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }
        }
    }

    // ---------- OCTAEDRO (LOSANGO) ----------
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            int dist = abs(i - H/2) + abs(j - H/2);
            if (dist <= H / 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // =====================================================
    // SOBREPOSIÇÃO DAS HABILIDADES NO TABULEIRO
    // =====================================================

    int origemConeL = 1, origemConeC = 4;
    int origemCruzL = 6, origemCruzC = 2;
    int origemOctL  = 6, origemOctC  = 7;

    // ---------- APLICA CONE ----------
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (cone[i][j] == 1) {
                int l = origemConeL + i - H/2;
                int c = origemConeC + j - H/2;

                if (l >= 0 && l < TAM && c >= 0 && c < TAM && tabuleiro[l][c] == AGUA) {
                    tabuleiro[l][c] = HABILIDADE;
                }
            }
        }
    }

    // ---------- APLICA CRUZ ----------
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (cruz[i][j] == 1) {
                int l = origemCruzL + i - H/2;
                int c = origemCruzC + j - H/2;

                if (l >= 0 && l < TAM && c >= 0 && c < TAM && tabuleiro[l][c] == AGUA) {
                    tabuleiro[l][c] = HABILIDADE;
                }
            }
        }
    }

    // ---------- APLICA OCTAEDRO ----------
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; j++) {
            if (octaedro[i][j] == 1) {
                int l = origemOctL + i - H/2;
                int c = origemOctC + j - H/2;

                if (l >= 0 && l < TAM && c >= 0 && c < TAM && tabuleiro[l][c] == AGUA) {
                    tabuleiro[l][c] = HABILIDADE;
                }
            }
        }
    }

    // =====================================================
    // EXIBIÇÃO DO TABULEIRO
    // =====================================================

    printf("\nTABULEIRO BATALHA NAVAL - NIVEL MESTRE\n\n  ");
    for (int j = 0; j < TAM; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}