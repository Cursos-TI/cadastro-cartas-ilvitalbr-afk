#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis
     char estado1[20];
     char estado2[20];
     char codigo1[3];
     char codigo2[3];
     char nome_cidade1 [20], nome_cidade2 [20];
     int populacao1, populacao2;
     int pontos1_turistico, pontos2_turistico;
     float area1_km2, area2_km2;
     float pib1, pib2;
     float densidade1, densidade2;
     float pibcapita1, pibcapita2;


     // Área para entrada de dados

     printf("*****Cadastro da Carta 1*****\n");

     printf("Digite o estado uma letra de 'A' a 'H' (representando um dos oito estados) : ");
     scanf("%s", &estado1);

     printf("Digite o codigo da Carta 1 (a letra do estado seguida de um número 01) : ");
     scanf("%s", &codigo1);

     printf("Digite a Cidade: ");
     scanf("%s", &nome_cidade1);


     printf("Digite a população: ");
     scanf("%d", &populacao1);

     printf("Digite quantidade pontos turisticos: ");
     scanf("%d", &pontos1_turistico);

     printf("Digite a area em Km2: ");
     scanf("%f", &area1_km2);

     printf("Digite o PIB: ");
     scanf("%f", &pib1);
  
     // Calculando densidade demgrafica Carta 1
     densidade1 = (populacao1/area1_km2);
     // Calculo renda per capita
     pibcapita1 = (pib1 / populacao1);
 

     // Área para exibição dos dados 
     printf("Carta 1\n");

     printf("Estado: %s \n", estado1);

     printf("Codigo: %s \n", codigo1);

     printf("Cidade: %s \n", nome_cidade1);

     printf("População: %d\n", populacao1);

     printf("Pontos Turisticos: %d\n", pontos1_turistico);

     printf("Area Km2: %f km²\n", area1_km2);

     printf("PIB: %f bilhões de reais\n", pib1);

     printf("Densidade Demografica: %f hab/km²\n ", densidade1);

     printf("PIB per Capita: %f reais \n", pibcapita1);

 
     printf("--------------------------------------------------------------------------------\n");
     // Cadastro Carta 2
     //  Entrada de dados
     printf("*****Cadastro da Carta 2*****\n");
     printf("Digite o estado uma letra de 'A' a 'H' (representando um dos oito estados) : ");
     scanf("%s", &estado2);

     printf("Digite o codigo da Carta 2 (a letra do estado seguida de um número 02) : ");
     scanf("%s", &codigo2);

     printf("Digite a Cidade:");
     scanf("%s", &nome_cidade2);

     printf("Digite a população: ");
     scanf("%d", &populacao2);

     printf("Digite quantidade pontos turisticos: ");
     scanf("%d", &pontos2_turistico);

     printf("Digite a area em Km2: ");
     scanf("%f", &area2_km2);

     printf("Digite o PIB: ");
     scanf("%f", &pib2);
  
     // Calculando densidade demgrafica Carta 2
     densidade2 = (populacao2 / area2_km2);
 
     pibcapita2 = (pib2 / populacao2);  

      // Área para exibição dos dados 
     printf("Carta 2\n");

     printf("Estado: %s \n", estado2);

     printf("Codigo: %s \n", codigo2);

     printf("Cidade: %s", &nome_cidade2);

     printf("População: %d\n", populacao2);

     printf("Pontos Turisticos: %d\n", pontos2_turistico);

     printf("Area Km2: %f km²\n", area2_km2);

     printf("PIB: %f bilhões de reais\n", pib2);

     printf("Densidade Demografica: %f hab/km²\n ", densidade2);

     printf("PIB per Capita: %f reais \n", pibcapita2);

      return 0;

}


