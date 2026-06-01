#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1[20], codigo_carta_1[4], cidade_1[20];
  int populacao_1, n_pontos_turisticos_1;
  float area_1, pib_1, densidade_pop_1, pib_per_capita_1;

  char estado_2[20], codigo_carta_2[4], cidade_2[20];
  int populacao_2, n_pontos_turisticos_2;
  float area_2, pib_2, densidade_pop_2, pib_per_capita_2;

  // Área para entrada de dados
  printf("------------ PRIMEIRA CARTA ------------\n");
  printf("Digite o nome do estado: ");
  scanf("%s", estado_1);
  printf("Digite o código da carta: ");
  scanf("%s", codigo_carta_1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade_1);
  printf("Qual o número de habitante da cidade? ");
  scanf("%i", &populacao_1);
  printf("Qual a área da cidade em Km²? ");
  scanf("%f", &area_1);
  densidade_pop_1 = populacao_1 / (area_1);
  printf("Qual o PIB da cidade? (em bilhões de reais) ");
  scanf("%f", &pib_1);
  pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
  printf("Quantos pontos turísticos a cidade tem? ");
  scanf("%i", &n_pontos_turisticos_1);

  printf("------------ SEGUNDA CARTA ------------\n");
  printf("Digite o nome do estado: ");
  scanf("%s", estado_2);
  printf("Digite o código da carta: ");
  scanf("%s", codigo_carta_2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade_2);
  printf("Qual o número de habitante da cidade? ");
  scanf("%i", &populacao_2);
  printf("Qual a área da cidade em Km²? ");
  scanf("%f", &area_2);
  densidade_pop_2 = populacao_2 / (area_2);
  printf("Qual o PIB da cidade? (em bilhões de reais) ");
  scanf("%f", &pib_2);
  pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;
  printf("Quantos pontos turísticos a cidade tem? ");
  scanf("%i", &n_pontos_turisticos_2);

  // Área para exibição dos dados da cidade
  printf("---------- CARTA 1 ----------\n");
  printf("Estado: %s\n", estado_1);
  printf("Código: %s\n", codigo_carta_1);
  printf("Nome da cidade: %s\n", cidade_1);
  printf("População: %i\n", populacao_1);
  printf("Área: %.2f Km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de pontos turísticos: %i\n", n_pontos_turisticos_1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade_pop_1);
  printf("PIB per capita: %.2f reais\n", pib_per_capita_1);

  printf("---------- CARTA 2 ----------\n");
  printf("Estado: %s\n", estado_2);
  printf("Código: %s\n", codigo_carta_2);
  printf("Nome da cidade: %s\n", cidade_2);
  printf("População: %i\n", populacao_2);
  printf("Área: %.2f Km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de pontos turísticos: %i\n", n_pontos_turisticos_2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade_pop_2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita_2);

return 0;
} 
