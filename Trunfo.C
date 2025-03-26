#include <stdio.h>

int main(){

    char cidade[50], estadoLetra[2], carta[10], cidade2[50], estadoLetra2[2], carta2[10];
    float area, pib, area2, pib2;
    int turismo, turismo2;
    unsigned int populacao, populacao2;
    double densidade, pibCap, densidade2, pibCap2; 
    

    printf("Escolha uma letra de A à H: \n");
    scanf("%c", estadoLetra);

    printf("Escolha o número da carta de 01 à 04: \n");
    scanf("%s", carta);
    
    printf("Escolha um nome para a cidade: \n");
    scanf("%s", cidade);

    printf("Quantos habitantes há em sua cidade: \n");
    scanf("%u", &populacao);

    printf("Qual a área da sua cidade: \n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos sua cidade possuí: \n");
    scanf("%d", &turismo);



    //Cidade numero 2:
    printf("Escolha uma letra de A à H da segunda cidade: \n");
    scanf("%c", estadoLetra2);

    printf("Escolha o número da carta de 01 à 04 da segunda cidade: \n");
    scanf("%s", carta2);
    
    printf("Escolha um nome para a segunda cidade: \n");
    scanf("%s", cidade2);

    printf("Quantos habitantes há na segunda cidade: \n");
    scanf("%u", &populacao2);

    printf("Qual a área da sua segunda cidade: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da sua segunda cidade: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos sua segunda cidade possuí: \n");
    scanf("%d", &turismo2);

    densidade = populacao / area;
    pibCap = pib / populacao;

    densidade2 = populacao2 / area2;
    pibCap2 = pib2 / populacao2;

    float poder, poder2;

    poder = populacao + area + pib + (float)turismo + pibCap - densidade;
    poder2 = populacao2 + area2 + pib2 + (float)turismo2 + pibCap2 - densidade2;

    

    printf("Carta 1:\n");
    printf("Estado: %s\n", estadoLetra);
    printf("Codigo: %s\n", carta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %u de habitantes\n", populacao);
    printf("Area: %.2f km\n", area);
    printf("PIB: R$%.2f bi\n", pib);
    printf("Pontos Turisticos: %d\n", turismo);
    printf("Denside: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pibCap);
    printf("Super Poder: %.2f\n", poder);

    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estadoLetra2);
    printf("Codigo: %s\n", carta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %u de habitantes\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: R$%.2f bi\n", pib2);
    printf("Pontos Turisticos: %d\n", turismo2);
    printf("Denside: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibCap2);
    printf("Super Poder: %.2f\n", poder2);
    
    printf("\n");
    printf("Populacao: %d\n", populacao > populacao2);
    printf("Area: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turisticos: %d\n", turismo > turismo2);
    printf("Densidade Populacional: %d\n", densidade < densidade2);
    printf("PIB per capita: %d\n", pibCap > pibCap2);
    printf("Super Poder: %d\n", poder > poder2);
    

    return 0;
}
