#include <stdio.h>
#include <string.h>

typedef struct 
{
  char state[3], code[10], city_name[120];
  int number_of_tourist_attractions;
  unsigned long int population;
  float area, gdp, gdp_per_capita, population_density, big_power;
} Letter;

Letter letter_one() {
  Letter letter_a;

  printf("Nome da cidade: ");
  fgets(letter_a.city_name, sizeof(letter_a.city_name), stdin);

  printf("Estado: ");
  scanf("%s", letter_a.state);

  printf("Código: ");
  scanf("%s", letter_a.code);

  printf("População: ");
  scanf("%lu", &letter_a.population);

  printf("Área: ");
  scanf("%f", &letter_a.area);

  printf("PIB: ");
  scanf("%f", &letter_a.gdp);

  printf("Número de pontos turísticos: ");
  scanf("%i", &letter_a.number_of_tourist_attractions);

  // printf("\n-------------- Carta 1 --------------\n");

  // printf("Estado: %s\n", letter_a.state);
  // printf("Código: %s\n", letter_a.code);
  // printf("Nome da cidade: %s", letter_a.city_name);
  // printf("População: %lu\n", letter_a.population);
  // printf("Área: %.2f km²\n", letter_a.area);
  // printf("PIB: %.2f bilhões de reais\n", letter_a.gdp);
  // printf("Número de pontos turísticos: %i\n", letter_a.number_of_tourist_attractions);

  letter_a.population_density = (float) letter_a.population / letter_a.area;

  // printf("Densidade populacional: %.2f hab/km²\n", letter_a.population_density);

  letter_a.gdp_per_capita = (float) (letter_a.gdp * 1000000000) / letter_a.population;

  // printf("PIB per Capita: %.2f reais\n", letter_a.gdp_per_capita);

  letter_a.big_power = (float) (letter_a.population + letter_a.area + letter_a.gdp + letter_a.number_of_tourist_attractions + letter_a.gdp_per_capita + letter_a.population_density);

  printf("-------------------------------------\n");

  return letter_a;
}

Letter letter_two() {
  Letter letter_b;

  while (getchar() != '\n');

  printf("Nome da cidade: ");
  fgets(letter_b.city_name, sizeof(letter_b.city_name), stdin);

  printf("Estado: ");
  scanf("%s", letter_b.state);

  printf("Código: ");
  scanf("%s", letter_b.code);

  printf("População: ");
  scanf("%lu", &letter_b.population);

  printf("Área: ");
  scanf("%f", &letter_b.area);

  printf("PIB: ");
  scanf("%f", &letter_b.gdp);

  printf("Número de pontos turísticos: ");
  scanf("%i", &letter_b.number_of_tourist_attractions);

  // printf("\n-------------- Carta 1 --------------\n");

  // printf("Estado: %s\n", letter_b.state);
  // printf("Código: %s\n", letter_b.code);
  // printf("Nome da cidade: %s", letter_b.city_name);
  // printf("População: %lu\n", letter_b.population);
  // printf("Área: %.2f km²\n", letter_b.area);
  // printf("PIB: %.2f bilhões de reais\n", letter_b.gdp);
  // printf("Número de pontos turísticos: %i\n", letter_b.number_of_tourist_attractions);

  letter_b.population_density = (float) letter_b.population / letter_b.area;

  // printf("Densidade populacional: %.2f hab/km²\n", letter_b.population_density);

  letter_b.gdp_per_capita = (float) (letter_b.gdp * 1000000000) / letter_b.population;

  // printf("PIB per Capita: %.2f reais\n", letter_b.gdp_per_capita);

  letter_b.big_power = (float) (letter_b.population + letter_b.area + letter_b.gdp + letter_b.number_of_tourist_attractions + letter_b.gdp_per_capita + letter_b.population_density);

  printf("-------------------------------------\n");

  return letter_b;
}

int compare_letter_code(int winner) {
  if (winner == 0) {
    return 2;
  }
  
  return 1;
}

const char* get_attribute_name(int value) {
  if (value == 1) {
    return "População";
  }

  if (value == 2) {
    return "Área";
  }

  if (value == 3) {
    return "PIB";
  }

  if (value == 4) {
    return "Número de pontos turísticos";
  }

  if (value == 5) {
    return "Densidade populacional";
  }

  if (value == 6) {
    return "PIB per capita";
  }
  
  return "Comparar PIB per capita";
}

void compare_letters() {
  Letter letter_one_result = letter_one();
  Letter letter_two_result = letter_two();

  // int population = letter_one_result.population > letter_two_result.population;
  // int area = letter_one_result.area > letter_two_result.area;
  // int gdp = letter_one_result.gdp > letter_two_result.gdp;
  // int number_of_tourist_attractions = letter_one_result.number_of_tourist_attractions > letter_two_result.number_of_tourist_attractions;
  // int population_density = letter_one_result.population_density > letter_two_result.population_density;
  // int gdp_per_capita = letter_one_result.gdp_per_capita < letter_two_result.gdp_per_capita;
  // int big_power = letter_one_result.big_power > letter_two_result.big_power;

  int attribute;

  printf("Escolha um atributo digitando o valor: \n");
  printf("[1] População \n");
  printf("[2] Área \n");
  printf("[3] PIB \n");
  printf("[4] Número de pontos turísticos \n");
  printf("[5] Densidade populacional \n");
  printf("[6] PIB per capita \n");

  printf("Valor: ");
  scanf("%i", &attribute);

  printf("-------------------------------------\n");
  printf("Comparação de cartas (Atributo: %s):\n", get_attribute_name(attribute));
  printf("-------------------------------------\n");

  if (attribute == 1) {
    letter_one_result.city_name[strcspn(letter_one_result.city_name, "\n")] = '\0';
    printf("Carta 1 - %s (%s): %lu \n", letter_one_result.city_name, letter_one_result.state, letter_one_result.population);
    letter_two_result.city_name[strcspn(letter_two_result.city_name, "\n")] = '\0';
    printf("Carta 2 - %s (%s): %lu \n", letter_two_result.city_name, letter_two_result.state, letter_two_result.population);
    
    if (letter_one_result.population > letter_two_result.population) {
      printf("Resultado: Carta 1 (%s) venceu!\n", letter_one_result.city_name);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", letter_two_result.city_name);
    }
  }

  if (attribute == 2) {
    letter_one_result.city_name[strcspn(letter_one_result.city_name, "\n")] = '\0';
    printf("Carta 1 - %s (%s): %.2f \n", letter_one_result.city_name, letter_one_result.state, letter_one_result.area);
    letter_two_result.city_name[strcspn(letter_two_result.city_name, "\n")] = '\0';
    printf("Carta 2 - %s (%s): %.2f \n", letter_two_result.city_name, letter_two_result.state, letter_two_result.area);
    
    if (letter_one_result.area > letter_two_result.area) {
      printf("Resultado: Carta 1 (%s) venceu!\n", letter_one_result.city_name);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", letter_two_result.city_name);
    }
  }

  if (attribute == 3) {
    letter_one_result.city_name[strcspn(letter_one_result.city_name, "\n")] = '\0';
    printf("Carta 1 - %s (%s): %.2f \n", letter_one_result.city_name, letter_one_result.state, letter_one_result.gdp);
    letter_two_result.city_name[strcspn(letter_two_result.city_name, "\n")] = '\0';
    printf("Carta 2 - %s (%s): %.2f \n", letter_two_result.city_name, letter_two_result.state, letter_two_result.gdp);
    
    if (letter_one_result.gdp > letter_two_result.gdp) {
      printf("Resultado: Carta 1 (%s) venceu!\n", letter_one_result.city_name);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", letter_two_result.city_name);
    }
  }

  if (attribute == 4) {
    letter_one_result.city_name[strcspn(letter_one_result.city_name, "\n")] = '\0';
    printf("Carta 1 - %s (%s): %i \n", letter_one_result.city_name, letter_one_result.state, letter_one_result.number_of_tourist_attractions);
    letter_two_result.city_name[strcspn(letter_two_result.city_name, "\n")] = '\0';
    printf("Carta 2 - %s (%s): %i \n", letter_two_result.city_name, letter_two_result.state, letter_two_result.number_of_tourist_attractions);
    
    if (letter_one_result.number_of_tourist_attractions > letter_two_result.number_of_tourist_attractions) {
      printf("Resultado: Carta 1 (%s) venceu!\n", letter_one_result.city_name);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", letter_two_result.city_name);
    }
  }

  if (attribute == 5) {
    letter_one_result.city_name[strcspn(letter_one_result.city_name, "\n")] = '\0';
    printf("Carta 1 - %s (%s): %.2f \n", letter_one_result.city_name, letter_one_result.state, letter_one_result.population_density);
    letter_two_result.city_name[strcspn(letter_two_result.city_name, "\n")] = '\0';
    printf("Carta 2 - %s (%s): %.2f \n", letter_two_result.city_name, letter_two_result.state, letter_two_result.population_density);
    
    if (letter_one_result.population_density > letter_two_result.population_density) {
      printf("Resultado: Carta 1 (%s) venceu!\n", letter_one_result.city_name);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", letter_two_result.city_name);
    }
  }

  if (attribute == 6) {
    letter_one_result.city_name[strcspn(letter_one_result.city_name, "\n")] = '\0';
    printf("Carta 1 - %s (%s): %.2f \n", letter_one_result.city_name, letter_one_result.state, letter_one_result.gdp_per_capita);
    letter_two_result.city_name[strcspn(letter_two_result.city_name, "\n")] = '\0';
    printf("Carta 2 - %s (%s): %.2f \n", letter_two_result.city_name, letter_two_result.state, letter_two_result.gdp_per_capita);
    
    if (letter_one_result.gdp_per_capita > letter_two_result.gdp_per_capita) {
      printf("Resultado: Carta 1 (%s) venceu!\n", letter_one_result.city_name);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", letter_two_result.city_name);
    }
  }

  // printf("População: carta %i venceu (%i)\n", compare_letter_code(population), population);
  // printf("Área: carta %i venceu (%i)\n", compare_letter_code(area), area);
  // printf("PIB: carta %i venceu (%i)\n", compare_letter_code(gdp), gdp);
  // printf("Pontos turísticos: carta %i venceu (%i)\n", compare_letter_code(number_of_tourist_attractions), number_of_tourist_attractions);
  // printf("Densidade populacional: carta %i venceu (%i)\n", compare_letter_code(population_density), population_density);
  // printf("PIB per capita: carta %i venceu (%i)\n", compare_letter_code(gdp_per_capita), gdp_per_capita);
  // printf("Super poder: carta %i venceu (%i)\n", compare_letter_code(big_power), big_power);

  return;
}

int main() {
  compare_letters();
  
  return 0;
}