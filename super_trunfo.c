#include <stdio.h>

/*🚩 Objetivo: Criar um programa em C que cadastra duas cartas com os seguintes atributos:

População (int)
Área (float)
PIB (float)
Número de pontos turísticos (int)*/

int main(){
    //Carta 1
    char estado1;
    char codigo1[4]; 
    char nomeCidade1[50];
    unsigned long int populacao1; 
    float area1;
    float pib1; 
    int turisticos1;
    //desafio aventureiro
    float densidade1;
    float capita1;
    // Desafio Mestre
    float inversoDensidade1;

    //carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    //desafio aventureiro
    float densidade2;
    float capita2;
    //Desafio Mestre
    float inversoDensidade2;

    //Carta 1
    printf("Carta 1\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código: \n");
    scanf(" %3s", codigo1);

     getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);

    printf("Digite a população: \n");
    scanf(" %ld", &populacao1);

    printf("Digite a area: \n");
    scanf(" %f", &area1);
  
    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite aos números de pontos turísticos: \n");
    scanf(" %d", &turisticos1);



    //Carta 2
    printf("Carta 2\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%3s", codigo2);

     getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);

    printf("Digite a populuação: \n");
    scanf("%ld", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);
  
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite aos números de pontos turísticos: \n");
    scanf("%d", &turisticos2);


    //Calculo Desindade populacional e PIB per Capita Carta 1

    densidade1 = (float)populacao1/area1 ; // População / area
    capita1 = (float) pib1/populacao1; // PIB / população

    //Calculo Desindade populacional e PIB per Capita Carta 2

    densidade2 = (float)populacao2/area2 ; // População / area
    capita2 = (float) pib2/populacao2; // PIB / população


    // Calculo Inverso densidade populacional 1

    inversoDensidade1 = (float)1/densidade1;

    // Calculo Inverso densidade populacional 2

    inversoDensidade2 = (float)1/densidade2;

    // Calcular Super Poder Carta 1

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + capita1 + inversoDensidade1;

    // Calcular Super Poder Carta 2

   float superPoder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + capita2 + inversoDensidade2;

   // Calculo comparação

   int populacao = populacao1 > populacao2;
   int area = area1 > area2;
   int pib = pib1 > pib2;
   int turistico = turisticos1 > turisticos2;
   int densidade = densidade1 < densidade2;
   int capita = capita1 > capita2;
   int superPoder = superPoder1 > superPoder2;

   // Calculo carta 

   int cartaPopulacao = 2 - (populacao1 > populacao2);
   int cartaArea = 2 - (area1 > area2);
   int cartaPib = 2 - (pib1 > pib2);
   int cartaTuristico = 2 - (turisticos1 > turisticos2);
   int cartaDensidade = 2 - (densidade1 < densidade2);
   int cartaCapita = 2 - (capita1 > capita2);
   int cartaSuperPoder = 2 - (superPoder1 > superPoder2);


    //Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

    printf("\nCarta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("A densindade populacional: %f \n", densidade1);
    printf("O PIB per capita: %f \n",capita1);
    //printf super poder
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("A densindade populacional: %f \n", densidade2);
    printf("O PIB per capita: %f \n",capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", cartaPopulacao, populacao);
    printf("Área: Carta %d venceu (%d)\n", cartaArea, area );
    printf("PIB: Carta %d venceu (%d)\n", cartaPib, pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", cartaTuristico, turistico);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cartaDensidade, densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", cartaCapita, capita);
    printf("Super Poder: Carta %d venceu (%d)\n", cartaSuperPoder, superPoder);

    return 0;
}