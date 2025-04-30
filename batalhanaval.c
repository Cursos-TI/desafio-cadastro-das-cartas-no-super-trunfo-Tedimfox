
#include<stdio.h>
   /* int main(){

        char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};        
        int escolha;
        int tabuleiro[10][10] = {0};


        tabuleiro[1][1] = 3;
        tabuleiro[1][2] = 3;
        tabuleiro[1][3] = 3;

        tabuleiro[4][5] = 3;
        tabuleiro[5][5] = 3;
        tabuleiro[6][5] = 3;
        printf("  ");
        for(char letra = 'A'; letra <= 'J'; letra++){
            printf(" %c", letra);
        }
        printf("\n");
        for(int i = 0; i < 10; i++){
            printf("%2d ", i + 1);

            for(int j = 0; j < 10; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
return 0;
            }    */

            // ALTERACOES

            
int main() {
    int tabuleiro[10][10] = {0}; // Inicia o tabuleiro com 0

    // Navio na horizontal
    for (int j = 1; j <= 3; j++) {
        tabuleiro[1][j] = 3; // Adiciona navio nas colunas 1, 2 e 3 da linha 1
    }

    // Navio na vertical
    for (int i = 4; i <= 6; i++) {
        tabuleiro[i][5] = 3; // Adiciona navio nas linhas 4, 5 e 6 da coluna 5
    }

    // Navio diagonal
    for (int k = 1; k < 4; k++) {
        tabuleiro[8 - k][k] = 3; // Adiciona navio na diagonal (7,0), (6,1), (5,2)
    }

    // Outro navio diagonal
    for (int k = 0; k < 3; k++) {
        tabuleiro[2 + k][6 + k] = 3; // Adiciona navio na diagonal (2,5), (3,6), (4,7)
    }

    // Exibição do tabuleiro
    printf("  ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


        
    