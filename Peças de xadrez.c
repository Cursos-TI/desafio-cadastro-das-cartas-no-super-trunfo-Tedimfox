#include<stdio.h>

   /* int main(){

        int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

        // movendo a torre para a direita horizontalmente 5 casas  com WHILE
        printf("Torre ande 5 casas a direita!\n");
        while (torre <= 5)
        {
            printf("Direita\n");
            torre++;
        
        }

        printf("\n");
        // movendo bispo 5 casas na diagonal com DO-WHILE
        
        printf("Bispo ande 5 casas na diagonal a direita!\n");

        do
        {  
            printf("Cima direita!\n");
            bispo++;

        }while(bispo <= 5);

        printf("\n");


        // movendo a rainha 8 casas para a esquerda  com FOR
        printf("Rainha ande 8 casas a esquerda!\n");
        
        for(rainha = 1; rainha <= 8; rainha++){
            printf("Esquerda!\n");

        }
        
        printf("\n");

        printf("## Cavalo posição = C4##\n"); // declarando possicão para melhor compreensão do movimento escolhido 
        
        printf("\n");//espaço para melhor visibilidade do código

        printf("Cavalo vá para a posição B2!\n");// Comando da peça

       for(int i = 0; i < 1; i++) // usei o for para imprimir o movimento para esquerda
        {
            while(cavalo <= 2){ // e o while para os 2 movimentos para baixo
                printf("Baixo!\n");
                cavalo++;
            }
            printf("Esquerda!\n");
        }

        return 0;
    }*/


void torre(int casas){
    if(casas > 0){
        torre(casas - 1);
        printf("Direita \n");
    }
    
 }
    void bispo(int casas1){
        if(casas1 > 0){
            bispo(casas1 - 1);
                      
            for(int i = 1; i <= 1; i++) 
            {
                while(i <= 1){ 
                    printf("Cima \n");
                    i++;
                }
                printf("Direita \n");
            }
  
 }  }

void rainha(int casas2){
    if(casas2 > 0){
        rainha(casas2 - 1);
        printf("Esquerda \n");
    }
}

int main(){

    int numero = 5, numero2 = 8, numero3 = 5;
    printf("Torre 5 casas a Direita!\n");
    torre(numero);

 printf("\n");

    printf("Bispo 5 casas na diagonal a direita! \n");
    bispo(numero3);

printf("\n");

    printf("Rainha 8 casas a esquerda! \n");
    rainha(numero2);

printf("\n");

printf("##posicão do cavalo D2 ## \n");
printf("Cavalo mova-se para a casa E4 \n");

printf("\n");



for (int i = 1; i <= 2; i++){
    printf("Cima \n");
}  
    
 for (int j = 1; j <= 1; j++){
    printf("Direita \n");


}

}





