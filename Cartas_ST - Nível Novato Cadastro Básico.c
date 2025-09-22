#include <stdio.h>

int main(){
    //declaração das variáveis da carta 01
    char estado[3];
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    //declaração das variáveis da carta 02
    char estado2[3];
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //Especificadores de fomato e variáveis da carta 01
    printf("\nCarta 1\n");
    printf("Digite uma letra de A a H: ");
    scanf("%s", &estado);
    
    printf("Digite a primeira letra do estado seguido de um número entre 01 a 04: ");
    scanf("%s", &codigo);
    
    printf("Digite o nome de uma cidade: ");
    scanf("%s", &cidade);

    printf("Informe o número de pessoas na cidade: ");
    scanf("%d", &populacao);

    printf("Informe a área em Km²: ");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Informe quantos pontos turísticos da cidade: ");
    scanf("%d", &pontos);

    
    //Especificadores de fomato e variáveis da carta 02
    printf("\nCarta 02\n");
    printf("Digite mais uma letra de A a H: ");
    scanf("%s", &estado2);
    
    printf("Digite a primeira letra do estado seguido de um número entre 01 a 04: ");
    scanf("%s", &codigo2);
    
    printf("Digite o nome de mais uma cidade: ");
    scanf("%s", &cidade2);

    printf("Informe o número de pessoas na cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área em Km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Informe quantos pontos turísticos da cidade: ");
    scanf("%d", &pontos2);
    
    //Impressão da carta 01
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$%.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);

    //Impressão da carta 02
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$%.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);


return 0;


}