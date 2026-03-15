#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[10];
  char codigocarta[10];
  char cidade[10];
  int populacao;
  float area;
  float pib;
  int npontoturistico;

  // Área para entrada de dados
  printf("Digite a letra do Estado da primeira carta: \n");
  scanf("%s", &estado);
  
  printf("Digite o código da primeira carta: \n");
  scanf("%s", &codigocarta);

  printf("Digite o nome da cidade da primeira carta: \n");
  scanf("%s", &cidade);

  printf("Digite a população da primeira carta: \n");
  scanf("%d", &populacao);

  printf("Digite a área em km2 da cidade da primeira carta: \n");
  scanf("%f", &area);

  printf("Digite o PIB em reais da cidade da primeira carta: \n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turísticos da cidade da primeira carta: \n");
  scanf("%int", &npontoturistico);

  // Área para exibição dos dados da cidade
  printf("Estado: %s \n", estado);
  printf("Código da carta: %s \n", codigocarta);
  printf("Cidade: %s \n", cidade);
  printf("População: %d \n", populacao);
  printf("Área em km2: %f \n", area);
  printf("Produto Interno Bruto - PIB em reais: %f \n", pib);
  printf("Número de pontos turísticos: %d \n", npontoturistico);

return 0;
} 
