#include <stdio.h>

int main (){
    //Declaração das variáveis para criação das cartas: 
    //Estado, Código, Cidade, População, Área km², Pontos turísticos, Densidade Populacional (População*Área Km²) e PIB per capita (PIB*População):
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    int pontosTuristicos1, pontosTuristicos2;
    float superpoder1, superpoder2;
    int opcao;

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
    densidade1 = (float)(populacao1 / area1); //cálculo para descobrir a Densidade Populacional (População*Área).
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
    densidade2 = (float)(populacao2/area2); //cálculo para descobrir a Densidade Populacional (População*Área).
    percapita2 = (pib2 * 1e9) / (float)populacao2; //cálculo para descobrir o PIB per capita (PIB*População).

    //Cálculos de "SuperPoder" para a CARTA 02:
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1 / densidade2);


    //Comparação utilizando menu interativo (SWITCH)
    printf("\n# # # MENU DE COMPARAÇÕES DE ATRIBUTOS: # # #\n\n");
    printf("1. Comparar a população \n");
    printf("2. Comparar a área km²\n");
    printf("3. Comparar o PIB\n");
    printf("4. Comparar o número de pontos turísticos\n");
    printf("5. Comparar a densidade demográfica\n");
    printf("6. Comparar PIB Per Capita\n");
    printf("7. Comparar o 'Super Poder'\n");
    printf("Escolha uma das opções acima:\n\n");
    
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        
        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO) ###\n\n");
        printf("Carta 01 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 02 - %s: %lu\n", cidade2, populacao2);
    
        if (populacao1 > populacao2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (populacao1 < populacao2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;
    
    case 2:

        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREA KM²) ###\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, area1);
        printf("Carta 02 - %s: %.2f\n", cidade2, area2);

        if (area1 > area2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (area1 < area2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;
    
    case 3: 

        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB) ###\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 02 - %s: %.2f\n", cidade2, pib2);
    
        if (pib1 > pib2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (pib1 < pib2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;
    
    case 4: 

        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS) ###\n\n");
        printf("Carta 01 - %s: %d\n", cidade1, pontosTuristicos1);
        printf("Carta 02 - %s: %d\n", cidade2, pontosTuristicos2);
    
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (pontosTuristicos1 < pontosTuristicos2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;

    case 5: 

        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE DEMOGRÁFICA) ###\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 02 - %s: %.2f\n", cidade2, densidade2);
    
        if (densidade1 < densidade2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (densidade1 > densidade2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;

    case 6: 

        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB Per Capita) ###\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, percapita1);
        printf("Carta 02 - %s: %.2f\n", cidade2, percapita2);
    
        if (percapita1 > percapita2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (percapita1 < percapita2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;

    case 7: 

        printf("\n### COMPARAÇÃO DE CARTAS (ATRIBUTO: SUPER PODER) ###\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, superpoder1);
        printf("Carta 02 - %s: %.2f\n", cidade2, superpoder2);
    
        if (superpoder1 > superpoder2)
        {
            printf("A carta 01 venceu!\n\n");
        } else if (superpoder1 < superpoder2){
            printf("A carta 02 venceu!\n\n");
        } else {
            printf("Empate!\n\n");
        }
        break;

    default:
        printf("OPÇÃO INVÁLIDA! DIGITE NOVAMENTE O NÚMERO CORRETAMENTE.\n");
        break;
    }
    return 0;
}