#include <stdio.h>

void letter_one() {
  char state;
  char code[10], city_name[120];
  int population, number_of_tourist_attractions;
  float area, gdp;

  printf("Nome da cidade: ");
  fgets(city_name, sizeof(city_name), stdin);

  printf("Estado: ");
  scanf("%c", &state);

  printf("Código: ");
  scanf("%s", code);

  printf("População: ");
  scanf("%i", &population);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &gdp);

  printf("Número de pontos turísticos: ");
  scanf("%i", &number_of_tourist_attractions);

  printf("\n-------------- Carta 1 --------------\n");

  printf("Estado: %c\n", state);
  printf("Código: %s\n", code);
  printf("Nome da cidade: %s", city_name);
  printf("População: %i\n", population);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", gdp);
  printf("Número de pontos turísticos: %i\n", number_of_tourist_attractions);

  printf("-------------------------------------\n");

  return;
}

void letter_two() {
  char state;
  char code[10], city_name[120];
  int population, number_of_tourist_attractions;
  float area, gdp;

  while (getchar() != '\n');
  
  printf("Nome da cidade: ");
  fgets(city_name, sizeof(city_name), stdin);

  printf("Estado: ");
  scanf("%c", &state);

  printf("Código: ");
  scanf("%s", code);

  printf("População: ");
  scanf("%i", &population);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &gdp);

  printf("Número de pontos turísticos: ");
  scanf("%i", &number_of_tourist_attractions);

  printf("\n-------------- Carta 2 --------------\n");

  printf("Estado: %c\n", state);
  printf("Código: %s\n", code);
  printf("Nome da cidade: %s", city_name);
  printf("População: %i\n", population);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", gdp);
  printf("Número de pontos turísticos: %i\n", number_of_tourist_attractions);

  printf("-------------------------------------\n");

  return;
}


int main() {
  letter_one();
  letter_two();
  
  return 0;
}