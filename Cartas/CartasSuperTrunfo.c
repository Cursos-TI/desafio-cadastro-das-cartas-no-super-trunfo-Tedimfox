#include<stdio.h>

    int main(){

        char pais;
        int escolha1;
        char estado;     
        char cidade1, cidade2;
        char codigo;

        float area1, area2, area3, area4;
        float populacao1, populacao2, populacao3, populacao4;
        int pontos1, pontos2, pontos3, pontos4;
        float pib1, pib2, pib3, pib4;



        float densidade1, densidade2, densidade3, densidade4;
        float percapta1, percapta2, percapta3, percapta4;
        float ultimate1, ultimate2, ultimate3, ultimate4;
        int opcao1 = 1, opcao2 = 2, opcao3 = 3, opcao4 = 4;
        

        printf("Super Trunfo! (PAÍSES) \n ");

        printf("Escolha um País: \n");
        scanf("%s", &pais);

        printf("Escolha um Estado(*SIGLA*)(Codigo:A): \n");
        scanf(" %s", &estado);

        printf("Escolha uma Cidade(Codigo:01): \n");
        scanf("%s", &cidade1 );

            printf("Digite o Código (a combinacão do Estado com a Cidade): \n");
            scanf(" %s", &codigo);       
           
            printf("Digite a População Total: \n");
            scanf(" %f", &populacao1);

            printf("Digite a Área: \n");
            scanf("%f", &area1);
            
            printf("Digite o PIB: \n");
            scanf(" %f", &pib1);
            
            printf("Digite os Pontos Turisticos: \n");
            scanf(" %d", &pontos1);

printf("\n");
            

            printf("Carta:0%d\n" , opcao1);
            
printf("\n");
            printf("Código:A0%d\n", opcao1);
            printf("Populacão: %.0f\n", populacao1);
            printf("Área: %.0fKM²\n ", area1);
            printf("PIB:R$%.0f\n ", pib1);
            printf("Pontos Turísticos: %d\n", pontos1);

            densidade1 = (float)(populacao1 / area1);
            percapta1 = (float)(pib1 / populacao1);

            printf("Densidade Populacional:%f Habitante por M²\n", densidade1);
            printf("PIB per CAPTA:%f\n", percapta1);

            
            ultimate1 = (int)(populacao1 + area1 + pib1 + pontos1);
            printf("Ultimate: %f\n", ultimate1);

printf("\n");

printf("Carta: 02\n");

printf("Escolha uma Cidade(Codigo:02): \n");
scanf("%s", &cidade2 );

    printf("Digite o Código (a combinacão do Estado com a Cidade): \n");
    scanf(" %s", &codigo);       
   
    printf("Digite a População Total: \n");
    scanf(" %f", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);
    
    printf("Digite os Pontos Turisticos: \n");
    scanf(" %d", &pontos2);


printf("\n");
    

    printf("Carta:0%d\n" , opcao2);
    
printf("\n");
    printf("Código:A0%d\n", opcao2);
    printf("Populacão: %.0f\n", populacao2);
    printf("Área: %.0fKM²\n ", area2);
    printf("PIB:R$%.0f\n ", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    densidade2 = (float)(populacao2 / area2);
    percapta2 = (float)(pib2 / populacao2);

    printf("Densidade Populacional:%f Habitante por M²\n", densidade2);
    printf("PIB per CAPTA:%f\n", percapta2);

    
    ultimate2 = (int)(populacao2 + area2 + pib2 + pontos2);
        printf("Ultimate: %.0f\n", ultimate2);


printf("\n");
    

    

    printf("Teste de combate:\n");
    //printf("Se o resultado for 1 a primeira carta vence!!\n");
    //printf("Se o resultado for 0 a segunda carta vence!!\n");

    printf("\n");

//printf("RESULTADO:\n");

    //printf("Comparacao Populacão: %d\n", populacao1 > populacao2 );
   // printf("Comparacao Área: %d\n", area1 > area2 );
   // printf("Comparacao Pib: %d\n", pib1 > pib2 );
   // printf("Comparacao Pontos Turísticos: %d\n", pontos1 > pontos2 );
   // printf("Comparacao Desnsidade Populacional: %d\n", densidade1 < densidade2 );  
  //  printf("Comparacao PIB per CAPTA: %d\n", percapta1 > percapta2 );
  //  printf("Comparacao Ultimate: %d\n", ultimate1 > ultimate2);

   // printf("\n");
     //   printf("Comparação de cartas(Atributo:População):\n");
       
      //  printf("Carta 1 - Vitória: 322.869\n");
        
       // printf("Carta 2 - Aracruz: 94.765\n");

  //  printf("Resultado:\n");
    
  //  if (populacao1 > populacao2){
   //     printf("Carta 1 Venceu!\n");
   // } else{
   //     printf("Carta 2 Venceu!\n");
   // }



    //ADICIONANDO TESTE AVENTUREIRO 2.O

    
    printf("Cidade: Vitória x Aracruz\n");
    printf("Escolha um atributo para comparacão:\n");
    
    printf("1. Populacão\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos túristicos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolha1);
printf("\n");// para ficar melhor visualmente 



    switch (escolha1)
    {
    case 1:

    
        printf("Carta 1: Vitória | Carta 2: Aracruz\n");
printf("\n");
        printf("Você escolheu Populacão!\n");
        printf("### O maior Vence!###\n");
        printf("Carta 1: %d | Carta 2: %d\n", populacao1, populacao2);

        if (escolha1 = 1)
        if( populacao1 > populacao2){
  
            printf("Carta 1 venceu!");
            }else if (populacao1 == populacao2)
            {
                printf("Houve um Empate!");
            }else
            {
                printf("Carta 2 venceu!");
            }
            
   

        break;
    

    case 2:
        printf("Carta 1: Vitória | Carta 2: Aracruz\n");
printf("\n");
        printf("Você escolheu Área!\n");            
        printf("### O maior Vence!###\n");
        printf("Carta 1: %.0f| Carta 2: %.0f\n", area1, area2);

        if (escolha1 = 2)
        if (area1 > area2){
  
            printf("Carta 1 venceu!");
            }else if(area1 == area2){
                printf("Houve um Empate!");
            }  
            else{
                printf("Carta 2 venceu!");
            }
        break;


    case 3:
        printf("Carta 1: Vitória | Carta 2: Aracruz\n");
printf("\n");
        printf("Você escolheu PIB!\n");            
        printf("### O maior Vence!###\n");
        printf("Carta 1: %.0f | Carta 2: %.0f\n", pib1, pib2);

        if (escolha1 = 3)
        if( pib1 > pib2){
  
            printf("Carta 1 venceu!");
            }else if(pib1 == pib2){
            
            printf("Houve um Empate!");
            }else{
                printf("Carta 2 venceu!");
            }
        break;


    case 4:
        printf("Carta 1: Vitória | Carta 2: Aracruz\n");
printf("\n");
        printf("Você escolheu Pontos túristicos!\n");            
        printf("### O maior Vence!###\n");
        printf("Carta 1: %d | Carta 2: %d\n", pontos1, pontos2);

        if (escolha1 = 4)
        if( pontos1 > pontos2){
  
            printf("Carta 1 venceu!");
            }else if(pontos1 == pontos2){
                printf("Houve um Empate!");
            }else{
                printf("Carta 2 venceu!");
            }
        break;


    case 5:
        printf("Carta 1: Vitória | Carta 2: Aracruz\n");
printf("\n");
        printf("Você escolheu Densidade demográfica!\n");            
        printf("### O menor Vence!###\n");
        printf("Carta 1: %.0f | Carta 2: %.0f\n", densidade1, densidade2); 
        
        if (escolha1 = 5)
        if( densidade1 < densidade2){
  
        printf("Carta 1 venceu!");
            }else if(densidade1 == densidade2){
        }else{ 
                printf("Carta 2 venceu!");
            }
        break;
   
      
   default:
   printf("Opcão invalida!");
      break;

}

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

    


    