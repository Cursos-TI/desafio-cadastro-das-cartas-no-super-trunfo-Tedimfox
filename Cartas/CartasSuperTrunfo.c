#include<stdio.h>

    int main(){

        
        char estado;
        char pais;

        char cidade = 'A';
        char codigo;
        float area;
        float populacao;
        int pontos;
        float pib;
        float densidade;
        float percapta;


        int opcao1 = 1;
        int opcao2 = 2;
        int opcao3 = 3;
        int opcao4 = 4;

        printf("Super Trunfo! (PAÍSES) \n ");

        printf("Escolha um País: \n");
        scanf("%s", &pais);

        printf("Escolha um Estado(*SIGLA*): \n");
        scanf(" %s", &estado);

        printf("Escolha uma Cidade: \n");
        scanf("%s", &cidade );

            printf("Digite o Código (a combinacão do Estado com a Cidade): \n");
            scanf(" %s", &codigo);       
           
            printf("Digite a População Total: \n");
            scanf(" %f", &populacao);

            printf("Digite a Área: \n");
            scanf("%f", &area);
            
            printf("Digite o PIB: \n");
            scanf(" %f", &pib);
            
            printf("Digite os Pontos Turisticos: \n");
            scanf(" %d", &pontos);

printf("\n");
            

            printf("Carta:0%d\n" , opcao1);
            
printf("\n");
            printf("Código:A0%d\n", opcao1);
            printf("Populacão: %.0f\n", populacao);
            printf("Área: %.0fKM²\n ", area);
            printf("PIB:R$%.0f\n ", pib);
            printf("Pontos Turísticos: %d\n", pontos);

            densidade = (float)(populacao / area);
            percapta = (float)(pib / populacao);

            printf("Densidade Populacional:%.0f Habitante por M²\n", densidade);
            printf("PIB per CAPTA:%.3f\n", percapta);
printf("\n");

return 0;
    }
    
      
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

      
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    


    