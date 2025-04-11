#include<stdio.h>
int main(){
int escolha1, escolha2, atributo1, atributo2, atributo3, atributo4, populacao1, populacao2,  pontos1, pontos2, resultado, resultado1, resultado2, soma1, soma2;
float area1, area2, pib1, pib2, densidade1, densidade2;

populacao1 = 322869;
area1 = 93382;
pontos1 = 24;
pib1 = 31423573;
densidade1 = 3457;


populacao2 = 94765; 
area2 = 1420285;
pontos2 = 23;
pib2 = 5313105;
densidade2 = 66;




printf("Duelo de Cartas!\n");
printf("Escolha o primeiro atributo para comparacão:\n");
printf("1. Populacão\n");
printf("2. Área\n");
printf("3. Pontos turisticos\n");
printf("4. Pib\n");
printf("5. Densidade demografica\n");
scanf(" \n %d", &escolha1);

switch (escolha1)
{
case 1:
printf("Você escolheu Populacão!\n");
printf("Populacão 1: %d - Populacão 2: %d", populacao1, populacao2);
resultado1 = (populacao1 > populacao2) ? 1 : 0;
atributo1 = populacao1;
atributo3 = populacao2;
break;

case 2:
printf("Você escolheu Área!\n");
printf("Área 1: %.0f - Área 2: %.0f\n",area1, area2);
resultado1 = (area1 > area2) ? 1 : 0;
atributo1 = area1;
atributo3 = area2;
break;

case 3:
printf("Você escolheu Pontos turísticos!\n");
printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontos1, pontos2);
 resultado1 = (pontos1 > pontos2) ? 1 : 0;
atributo1 = pontos1;
atributo3 = pontos2;
break;

case 4:
printf("Você escolheu Pib!\n");
printf("Pib 1: %.0f - Pib 2: %.0f\n", pib1, pib2);
resultado1 = (pib1 > pib2) ? 1 : 0;
atributo1 = pib1;
atributo3 = pib2;
break;

case 5:
printf("Você escolheu Densidade demografica!\n");
printf("Densidade demografica 1: %.0f - Densidade demografica 2: %.0f\n", densidade1, densidade2);
resultado1 = (densidade1 < densidade2) ? 1 : 0;
atributo1 = densidade1;
atributo3 = densidade2;
break;


default:
printf("Opcão invalida!");
    break;
    
   
}
 printf("\n");
 printf("\n");


printf("Escolha o Segundo atributo para comparacão:\n");
printf("1. Populacão\n");
printf("2. Área\n");
printf("3. Pontos turisticos\n");
printf("4. Pib\n");
printf("5. Densidade demografica\n");
scanf("%d", &escolha2);

 if(escolha1 == escolha2){
        printf("Você escolheu o mesmo atributo!\n");
 }else{
    
    switch (escolha2)
{  
    case 1:
    printf("Você escolheu Populacão!\n");
    printf("Populacão 1: %d - Populacão 2: %d", populacao1, populacao2);
    resultado2 = (populacao1 > populacao2) ? 1 : 0;
    atributo2 = populacao1;
    atributo4 = populacao2;
    break;
    
    case 2:
    printf("Você escolheu Área!\n");
    printf("Área 1: %.0f - Área 2: %.0f\n",area1, area2);
    resultado2 = (area1 > area2) ? 1 : 0;
    atributo2 = area1;
    atributo4 = area2;
    break;
    
    case 3:
    printf("Você escolheu Pontos turísticos!\n");
    printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontos1, pontos2);
    resultado2 = (pontos1 > pontos2) ? 1 : 0;
    atributo2 = pontos1;
    atributo4 = pontos2;
    break;
    
    case 4:
    printf("Você escolheu Pib!\n");
    printf("Pib 1: %.0f - Pib 2: %.0f\n", pib1, pib2);
    resultado2 = (pib1 > pib2) ? 1 : 0;
    atributo2 = pib1;
    atributo4 = pib2;
    break;
    
    case 5:
    printf("Você escolheu Densidade demografica!\n");
    printf("Densidade demografica 1: %.0f - Densidade demografica 2: %.0f\n", densidade1, densidade2);
    resultado2 = (densidade1 < densidade2) ? 1 : 0;
    atributo2 = densidade1;
    atributo4 = densidade2;
    break;
    
    
    default:
    printf("Opcão invalida!");
        break;
}
printf("\n");

soma1 = atributo1 + atributo2;
soma2 = atributo3 + atributo4;


printf("###Cartas! VITÓRIA - ARACRUZ###\n");
printf("\n");

printf("Atributos escolhidos:\n");
if(escolha1 == 1){
    printf("Populacão 1: %d - Populacão 2: %d\n", populacao1, populacao2);
}else if(escolha1 == 2){
    printf("Área 1: %.0f - Área 2: %.0f\n",area1, area2);
}else if(escolha1 == 3){
    printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontos1, pontos2);
}else if(escolha1 == 4){
    printf("Pib 1: %.0f - Pib 2: %.0f\n", pib1, pib2);
}else{
    printf("Densidade demografica 1: %.0f - Densidade demografica 2: %.0f\n", densidade1, densidade2);
}

if(escolha2 == 1){
    printf("Populacão 1: %d - Populacão 2: %d\n", populacao1, populacao2);
}else if(escolha2 == 2){
    printf("Área 1: %.0f - Área 2: %.0f\n",area1, area2);
}else if(escolha2 == 3){
    printf("Pontos Turísticos 1: %d - Pontos Turísticos 2: %d\n", pontos1, pontos2);
}else if(escolha2 == 4){
    printf("Pib 1: %.0f - Pib 2: %.0f\n", pib1, pib2);
}else{
    printf("Densidade demografica 1: %.0f - Densidade demografica 2: %.0f\n", densidade1, densidade2);
}

printf("\n");


printf("Resultado Primeiro atributo:\n");
if (resultado1 == 1){
    printf("Vitória Ganhou!\n");
}else if(resultado1 == 0)
{ printf("Aracruz Ganhou!\n");
}
printf("Resultado Segundo atributo:\n");
   if (resultado2 == 1)
    {   printf("Vitória Ganhou!\n");
    }else if(resultado2 == 0)
    { printf("Aracruz Ganhou!\n");
}
printf("\n");

printf("Soma dos atributos da carta Vitória:\n");
printf("%d\n", soma1);
printf("Soma dos atributos da carta Aracruz:\n");
printf("%d", soma2);

printf("\n");

resultado = (soma1 > soma2) ? printf("A carta Vitória Venceu!") : printf("A Carta Aracruz Venceu!");


}

}
