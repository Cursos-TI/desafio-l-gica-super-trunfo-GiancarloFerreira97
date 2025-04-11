#include <stdio.h>
#include <string.h>

int main(){
    //Declaração das variáveis para criação das cartas: 
    //Estado, Código, Cidade, População, Área km², Pontos turísticos, Densidade Populacional (População*Área Km²) e PIB per capita (PIB*População):
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    int pontosTuristicos1, pontosTuristicos2;
    float superpoder1, superpoder2;

    // leitura e armazenamento de dados para definir a CARTA 01:
    printf("--> Digite as informações para definir a primeira carta <-- \n\n");
    
    printf("Escolha uma letra entre de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado1);

    printf("A letra escolhida para representar o estado seguida de um número de 01 a 04 (Ex: A01, B02, C03...): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite o número da população desta cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área desta cidade(em Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos essa cidade tem: ");
    scanf("%d", &pontosTuristicos1);

    //Cálculos de Densidade Populacional e PIB per capita, baseando nas informações que forem inseridas pelo usuário para a Carta 01:
    densidade1 = (float)populacao1 / area1; //cálculo para descobrir a Densidade Populacional (População*Área).
    percapita1 = (pib1 * 1e9) / (float)populacao1; //cálculo para descobrir o PIB per capita (PIB*População).

    //Cálculos de "SuperPoder" para a CARTA 01:
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1 / densidade1);



    // leitura de dados para definir a CARTA 02:
    printf("\n \n--> Digite as informações para definir a segunda carta <-- \n\n");

    printf("Escolha uma letra entre de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado2);

    printf("A letra escolhida para representar o estado seguida de um número de 01 a 04 (Ex: A01, B02, C03...): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); 

    printf("Digite o número da população desta cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área desta cidade(em Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos essa cidade tem: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculos de Densidade Populacional e PIB per capita, baseando nas informações que forem inseridas pelo usuário para a Carta 02:
    densidade2 = (float)populacao2/area2; //cálculo para descobrir a Densidade Populacional (População*Área).
    percapita2 = (pib2 * 1e9) / (float)populacao2; //cálculo para descobrir o PIB per capita (PIB*População).

    //Cálculos de "SuperPoder" para a CARTA 02:
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1 / densidade2);


    
    //Visualização dos dados inseridos pelo usuário para a CARTA 01:
    printf("\n======== Informações da primeira carta ========\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", percapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);


    //Visualização de dados -- Carta 02
    printf("\n======== Informações da segunda carta ========\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2); 
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    //Comparações entre carta 01 e carta 02
        int Populacao, Area, PIB, PontosTuristicos, Densidade, PIBperCapita, SuperPoder;
        char Carta01 [30] = "Carta 01";
        char Carta02 [30] = "Carta 02";

        Populacao = populacao1 > populacao2;
        Area = area1 > area2;
        PIB = pib1 > pib2;
        PontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
        Densidade = densidade1 < densidade2;
        PIBperCapita = percapita1 > percapita2;
        SuperPoder = superpoder1 > superpoder2;

        printf("\n================ Resultado ================\n\n");
        printf("Comparação de cartas\n\n");
        
        printf("População: %s venceu (%d)!\n", Populacao ? Carta01 : Carta02, Populacao);
        printf("Área/km²: %s venceu (%d)!\n", Area ? Carta01 : Carta02, Area);
        printf("PIB: %s venceu (%d)!\n", PIB ? Carta01 : Carta02, PIB);
        printf("Pontos Turísticos: %s venceu (%d)!\n", PontosTuristicos ? Carta01 : Carta02, PontosTuristicos);
        printf("Densidade Populacional: %s venceu (%d)!\n", Densidade ? Carta01 : Carta02, Densidade);
        printf("PIB per capita: %s venceu (%d)!\n", PIBperCapita ? Carta01 : Carta02, PIBperCapita);
        printf("Super Poder: %s venceu (%d)!\n\n", SuperPoder ? Carta01 : Carta02, SuperPoder);
        
    return 0;

}