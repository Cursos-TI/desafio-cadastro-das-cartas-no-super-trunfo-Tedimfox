
#include<stdio.h>
    int main(){

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
            }    



        
    