#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int pop1, pop2, pts_turisticos1, pts_turisticos2;
    float area1, area2, pib1, pib2, densipop1, densipop2, pibpcap1, pibpcap2;

    // Área para entrada de dados
    printf("Voce tem o direito de escolher os valores de 2 cartas\n");
    printf("Vamos para a carta 1\n");
    printf("\nDigite o Estado da carta 1. Escolha uma letra de A a H: "); //Usuário insere letra representando um Estado
    scanf("%c", &estado1);
    printf("Digite o codigo da carta 1. Escolha um numero de 01 a 04. Insira os 2 algarismos: "); //Usuário insere a sequência numerica após a letra do Estado
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade da carta 1: "); //Usuário insere o nome de qualquer cidade
    scanf("%s", &cidade1);
    printf("Digite a populacao da cidade da carta 1: "); //Usuário insere a população da cidade
    scanf("%d", &pop1);
    printf("Digite a area da cidade da carta 1 em km2: "); //Usuário insere a área da cidade
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 em bilhões de reais: "); //Usuário insere o PIB da cidade
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade da carta 1: "); //Usuário insere a quantidade de pontos turísticos da cidade
    scanf("%d", &pts_turisticos1);

    // Nível Aventureiro

    densipop1 = pop1 / area1;
    
    printf("\n\nAgora vamos para a carta 2");
    printf("\nDigite o Estado da carta 2. Escolha uma letra de A a H: ");
    scanf("%c", &estado2);
    printf("Digite o codigo da carta 2. Escolha um numero de 01 a 04. Insira os 2 algarismos: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &cidade2);
    printf("Digite a populacao da cidade da carta 2: ");
    scanf("%d", &pop2);
    printf("Digite a area da cidade da carta 2 em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade da carta 2: ");
    scanf("%d", &pts_turisticos2);

    densipop2 = pop2 / area2;

  // Área para exibição dos dados da cidade
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", pop1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    // Calculando o PIB per capita
    pib1 = pib1 * 1000000000;
    pibpcap1 = pib1 / pop1;
    printf("Quantidade de pontos turisticos: %d\n\n", pts_turisticos1);

    printf("Densidade populacional: %.2f habitantes/km2\n", densipop1);
    printf("PIB per capita: R$ %.2f", pibpcap1);
    
    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", pop2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    // Calculando o PIB per capita
    pib2 = pib2 * 1000000000;
    pibpcap2 = pib2 / pop2;
    printf("Quantidade de pontos turisticos: %d\n", pts_turisticos2);

    printf("Densidade populacional: %.2f habitantes/km2\n", densipop2);
    printf("PIB per capita: R$ %.2f", pibpcap2);

return 0;
} 
