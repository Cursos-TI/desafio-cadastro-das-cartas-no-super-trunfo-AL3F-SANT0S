#include <stdio.h>

// Teste Alef Santos

int main()
{

    // Váriaveis da PRIMEIRA carta
    char estado01[2];
    char codigo_carta01[4];
    char nome_cidade01[40];
    int populacao01;
    float area_km01;
    float pib01;
    int qtd_pontos_turisticos01;
    float densidadePopulacional01;
    float pibPerCapita01;

    // Váriaveis da SEGUNDA carta
    char estado02[2];
    char codigo_carta02[4];
    char nome_cidade02[40];
    int populacao02;
    float area_km02;
    float pib02;
    int qtd_pontos_turisticos02;
    float densidadePopulacional02;
    float pibPerCapita02;

   /* char estado01[2] = 'A';
    char codigo_carta01[4] = 'A01';
    char nome_cidade01[40] = 'Macapa';
    int populacao01 = 550308;
    float area_km01 = 6407.123;
    float pib01 = 16.9;
    int qtd_pontos_turisticos01 = 8;
    float densidadePopulacional01;
    float pibPerCapita01;

    // Váriaveis da SEGUNDA carta
    char estado02[2] = "A";
    char codigo_carta02[4] = "A02";
    char nome_cidade02[40] = "Santana";
    int populacao02 = 123096;
    float area_km02 = 1577.218;
    float pib02 = 3.4;
    int qtd_pontos_turisticos02 = 3;
    float densidadePopulacional02;
    float pibPerCapita02;*/

    // Cadastro da PRIMEIRA carta para o jogo
    printf("\nInsira as informações da cidade para cadastrar a PRIMEIRA carta!\n");

    printf("\nInsira o Nome do Estado a qual a Cidade Escolhida Pertence (Não use acentos e use '_' ao em vez de Espaço): ");
    scanf("%s", estado01);

    printf("\nInsira o Código da Carta seguindo o padrão da Primeira letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo_carta01);

    printf("\nInsira o Nome da Cidade Escolhida (Use '_' ao em vez de Espaço): ");
    scanf("%s", nome_cidade01);

    printf("\nInsira a População da Cidade Escolhida: ");
    scanf("%d", &populacao01);

    printf("\nInsira o Tamanho Territorial da Cidade Escolhida em KM² (Quilomêtros Quadrados): ");
    scanf("%f", &area_km01);

    printf("\nInsira o PIB da Cidade Escolhida: ");
    scanf("%f", &pib01);

    printf("\nInsira a quantidade de Pontos Turísticos que a Cidade Escolhida possui: ");
    scanf("%d", &qtd_pontos_turisticos01);

    printf("\nCarta 01 cadastrada com sucesso!\nCadastre a próxima carta!\n");

    // Cadastro da SEGUNDA carta para o jogo
    printf("\nInsira as informações da cidade para cadastrar a Segunda carta!\n");

    printf("\nInsira o Nome do Estado a qual a Cidade Escolhida Pertence (Não use acentos e use '_' ao em vez de Espaço): ");
    scanf("%s", estado02);

    printf("\nInsira o Código da Carta seguindo o padrão da Primeira letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo_carta02);

    printf("\nInsira o Nome da Cidade Escolhida (Use '_' ao em vez de Espaço): ");
    scanf("%s", nome_cidade02);

    printf("\nInsira a População da Cidade Escolhida: ");
    scanf("%d", &populacao02);

    printf("\nInsira o Tamanho Territorial da Cidade Escolhida em KM² (Quilomêtros Quadrados): ");
    scanf("%f", &area_km02);

    printf("\nInsira o PIB da Cidade Escolhida: ");
    scanf("%f", &pib02);

    printf("\nInsira a quantidade de Pontos Turísticos que a Cidade Escolhida possui: ");
    scanf("%d", &qtd_pontos_turisticos02);

    printf("\nCarta 02 cadastrada com sucesso!\n");

    /*
    Exibição da PRIMEIRA CARTA
    */

    densidadePopulacional01 = (populacao01 / area_km01);
    pibPerCapita01 = (pib01 / populacao01);
    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %f km²\n", area_km01);
    printf("PIB: %f bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos01);
    printf("Densidade Populacional: %f pessoas por km²\n", densidadePopulacional01);
    printf("PIB per Capita: R$%f bilhões por pessoa\n", pibPerCapita01);
    /*
    Exibição da SEGUNDA CARTA
    */

    densidadePopulacional01 = (populacao02 / area_km02);
    pibPerCapita01 = (pib02 / populacao02);
    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo_carta02);
    printf("Nome da Cidade: %s\n", nome_cidade02);
    printf("População: %d", populacao02);
    printf("Área: %f km²\n", area_km02);
    printf("PIB: %f bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos02);
    printf("Densidade Populacional: %f pessoas por km²\n", densidadePopulacional02);
    printf("PIB per Capita: R$%f bilhões por pessoa\n", pibPerCapita02);

    return 0;
}
