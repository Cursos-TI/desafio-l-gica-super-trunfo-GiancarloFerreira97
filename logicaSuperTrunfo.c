#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Teste Giancarlo

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

        // leitura de dados para definir a primeira carta:
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
    
    densidade1 = (float)populacao1 / area1; //cálculo para descobrir a Densidade Populacional da CARTA 01: População / Área
    percapita1 = (pib1 * 1e9) / (float)populacao1; //cálculo para descobrir o PIB per capita da CARTA 01: PIB / População


        // leitura de dados para definir a segunda carta:
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

    densidade2 = (float)populacao2/area2; //cálculo para descobrir a Densidade Populacional da CARTA 02: População / Área
    percapita2 = (pib2 * 1e9) / (float)populacao2; //cálculo para descobrir o PIB per capita da CARTA 02: PIB / População

//Visualização de dados -- Carta 01
printf("\n======== Informações da primeira carta ========\n\n");
printf("Estado: %c\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f Bilhões de reais\n", pib1);
printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);
printf("Densidade populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f\n", percapita1);


    //Visualização de dados -- Carta 02
printf("\n======== Informações da segunda carta ========\n\n");
printf("Estado: %c\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhões de reais\n", pib2);
printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);
printf("Densidade populacional: %.2f hab/km²\n", densidade2); // população/áreakm2
printf("PIB per capita: %.2f\n\n", percapita2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

            //Comparações entre carta 01 e carta 02

    printf("\n================ Resultado ================\n\n");
    printf("Comparação de cartas (Atributo: População)\n\n");
    printf("Carta 01: %s / População: %lu \n\n", cidade1, populacao1);
    printf("Carta 02: %s / População: %lu \n\n", cidade2, populacao2);

        if (populacao1 > populacao2){
            printf("Resultado: Carta 01 (%s), venceu!", cidade1);
        } else {
                printf("Resultado: Carta 02 (%s), venceu!", cidade2);
        }

    return 0;
}
