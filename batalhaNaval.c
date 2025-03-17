#include <stdio.h>

#define TAMANHO 10  // Tamanho fixo do tabuleiro
#define NAVIO_TAM 3 // Tamanho fixo dos navios

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                        tabuleiro[i][j] = 0; // Representa água
                                }
                                    }
                                    }

                                    // Função para posicionar um navio no tabuleiro
                                    void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char orientacao) {
                                        if (orientacao == 'H') { // Horizontal
                                                for (int i = 0; i < NAVIO_TAM; i++) {
                                                            tabuleiro[linha][coluna + i] = 3;
                                                                    }
                                                                        } else if (orientacao == 'V') { // Vertical
                                                                                for (int i = 0; i < NAVIO_TAM; i++) {
                                                                                            tabuleiro[linha + i][coluna] = 3;
                                                                                                    }
                                                                                                        }
                                                                                                        }

                                                                                                        // Função para exibir o tabuleiro no console
                                                                                                        void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
                                                                                                            printf("  ");
                                                                                                                for (int i = 0; i < TAMANHO; i++) {
                                                                                                                        printf("%d ", i); // Índices das colunas
                                                                                                                            }
                                                                                                                                printf("\n");

                                                                                                                                    for (int i = 0; i < TAMANHO; i++) {
                                                                                                                                            printf("%d ", i); // Índices das linhas
                                                                                                                                                    for (int j = 0; j < TAMANHO; j++) {
                                                                                                                                                                printf("%d ", tabuleiro[i][j]);
                                                                                                                                                                        }
                                                                                                                                                                                printf("\n");
                                                                                                                                                                                    }
                                                                                                                                                                                    }

                                                                                                                                                                                    int main() {
                                                                                                                                                                                        int tabuleiro[TAMANHO][TAMANHO];

                                                                                                                                                                                            // Inicializa o tabuleiro
                                                                                                                                                                                                inicializarTabuleiro(tabuleiro);

                                                                                                                                                                                                    // Define coordenadas fixas para os navios
                                                                                                                                                                                                        int linha1 = 2, coluna1 = 3; // Posição inicial do primeiro navio (horizontal)
                                                                                                                                                                                                            int linha2 = 5, coluna2 = 6; // Posição inicial do segundo navio (vertical)

                                                                                                                                                                                                                // Posiciona os navios no tabuleiro
                                                                                                                                                                                                                    posicionarNavio(tabuleiro, linha1, coluna1, 'H');
                                                                                                                                                                                                                        posicionarNavio(tabuleiro, linha2, coluna2, 'V');

                                                                                                                                                                                                                            // Exibe o tabuleiro
                                                                                                                                                                                                                                exibirTabuleiro(tabuleiro);

                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                   }