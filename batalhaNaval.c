#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

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
   
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
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
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
