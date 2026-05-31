#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1[20], codigo_carta_1[3], cidade_1[20];
  int populacao_1, n_pontos_turisticos_1;
  float area_1, pib_1;

  char estado_2[20], codigo_carta_2[3], cidade_2[20];
  int populacao_2, n_pontos_turisticos_2;
  float area_2, pib_2;

  // Área para entrada de dados
  printf("------- PRIMEIRA CARTA -------\n");
  printf("Digite o nome do estado: ");
  scanf("%s\n", estado_1);
  printf("Digite o código da carta: ");
  scanf("%s\n", codigo_carta_1);
  printf("Digite o nome da cidade: ");
  scanf("%s\n", cidade_1);
  printf("Qual o número de habitante da cidade? ");
  scanf("%i\n", &populacao_1);
  printf("Qual a área da cidade em Km²? ");
  scanf("%f\n", &area_1);
  printf("Qual o PIB da cidade (em bilhões de reais)? ");
  scanf("%f\n", &pib_1);
  printf("Quantos pontos turísticos a cidade tem? ");
  scanf("%i\n", &n_pontos_turisticos_1);


  // Área para exibição dos dados da cidade
  printf("---------- CARTA 1 ----------");
  printf("Estado: %s\n", estado_1);
  printf("Código: %s\n", codigo_carta_1);
  printf("Nome da cidade: %s\n", cidade_1);
  printf("Área: %.2f", area_1);
  printf("PIB: %.2f", pib_1);
  printf("Número de pontos turísticos: %i", n_pontos_turisticos_1);

return 0;
} 
