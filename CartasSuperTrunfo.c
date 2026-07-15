#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[3], estado2[3], codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int pts_turisticos1, pts_turisticos2, densipop1, densipop2;
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2, pibpcap1, pibpcap2, super_1, super_2;
    
    // Área para entrada de dados
    // Carta 1
    printf("Escolha os valores de 2 cartas\n");
    printf("Vamos para a carta 1\n");
    printf("Digite o Estado da carta 1. Escolha uma letra de A a H: "); //Usuário insere letra representando um Estado
    scanf("%s", &estado1);
    printf("Digite o codigo da carta 1. Escolha um numero de 01 a 04. Insira os 2 algarismos: "); //Usuário insere a sequência numerica após a letra do Estado
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade da carta 1: "); //Usuário insere o nome da cidade
    scanf("%s", &cidade1);
    printf("Digite a populacao da cidade da carta 1: "); //Usuário insere a população da cidade
    scanf("%lu", &pop1);
    printf("Digite a area da cidade da carta 1 em km2: "); //Usuário insere a área da cidade
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da carta 1 em bilhoes de reais: "); //Usuário insere o PIB da cidade
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade da carta 1: "); //Usuário insere a quantidade de pontos turísticos da cidade
    scanf("%d", &pts_turisticos1);
    printf("\n\n");

    // Carta 2
    printf("Digite o Estado da carta 2. Escolha uma letra de A a H: ");
    scanf("%s", &estado2);
    printf("Digite o codigo da carta 2. Escolha um numero de 01 a 04. Insira os 2 algarismos: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade da carta 2: "); //Usuário insere o nome da qualquer
    scanf("%s", &cidade2);
    printf("Digite a populacao da cidade da carta 2: ");
    scanf("%lu", &pop2);
    printf("Digite a area da cidade da carta 2 em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da carta 2 em bilhoes de reais: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade da carta 2: ");
    scanf("%d", &pts_turisticos2);
    printf("\n\n");

    // Nível Aventureiro
  // Área para exibição dos dados da cidade
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s-%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu habitantes\n", pop1);
    printf("Area territorial: %.2f km2\n", area1);
    densipop1 = pop1 / (int) area1;
    printf("Densidade populacional: %d habitantes/km2\n", densipop1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);

    // Calculando PIB Per Capita Carta 1
    pib1 = pib1 * 1000000000;
    pibpcap1 = pib1 / pop1;

    printf("PIB per Capita: R$ %.2f\n", pibpcap1);
    printf("Quantidade de pontos turisticos: %d\n", pts_turisticos1);
    super_1 = (((float) pop1) + area1 + pib1 + pibpcap1 + ((float) pts_turisticos1)) + (1 / densipop1);
    printf("Super Poder: %.2f", super_1);
    printf("\n\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s-%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu habitantes\n", pop2);
    printf("Area territorial: %.2f km2\n", area2);
    densipop2 = pop2 / (int) area2;
    printf("Densidade populacional: %d habitantes/km2\n", densipop2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);

    // Calculando PIB Per Capita Carta 2
    pib2 = pib2 * 1000000000;
    pibpcap2 = pib2 / pop2;

    printf("PIB per Capita: R$ %.2f\n", pibpcap2);
    printf("Quantidade de pontos turisticos: %d\n", pts_turisticos2);
    super_2 = (((float) pop2) + area2 + pib2 + pibpcap2 + ((float) pts_turisticos2)) + (1 / densipop2);
    printf("Super Poder: %.2f", super_2);
    printf("\n\n");// Resultados
    printf("Populacao: %d\n", pop1 > pop2);
    printf("Area: %d\n", area1 > area2);
    printf("Densidade populacional: %d\n", densipop1 < densipop2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("PIB per Capita: %d\n", pibpcap1 > pibpcap2);
    printf("Quantidade de pontos turisticos: %d\n", pts_turisticos1 > pts_turisticos2);
    printf("Super Poder: %d", super_1 > super_2);
  return 0;
} 
