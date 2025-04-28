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
    int atributo1, atributo2;
    //Declaração de variáveis para resultados
    float Atributopopulacao1, Atributopopulacao2;
    float AtributoPIB1, AtributoPIB2;
    float Atributoarea1, Atributoarea2;
    float Atributodensidade1, Atributodensidade2;
    float AtributoPerCapita1, AtributoPerCapita2;
    int AtributoPontoTuristico1, AtributoPontoTuristico2;
    float AtributoSuperPoder1, AtributoSuperPoder2;
    float resultado1, resultado2;


    // leitura e armazenamento de dados para definir a CARTA 01:
    printf("--> Digite as informações para definir a primeira carta <-- \n\n");
    
    printf("Escolha uma letra entre de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado1);

    printf("Código da carta (Ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (Em Km²): ");
    scanf("%f", &area1);

    printf("PIB (Em Bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
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

    printf("Código da carta (Ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2); 

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em Km²): ");
    scanf("%f", &area2);

    printf("PIB (Em Bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
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
    
    scanf("%d", &atributo1);


    switch (atributo1)
    {
    case 1:
        
        
        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO) # # #\n\n");
        printf("Carta 01 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 02 - %s: %lu\n\n", cidade2, populacao2);
        

        Atributopopulacao1 = populacao1;
        Atributopopulacao2 = populacao2;
        resultado1 = Atributopopulacao1 > Atributopopulacao2 ? 1 : 0;
        break;
        
    case 2:

        
        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREA KM²) # # #\n\n");
        printf("Carta 01 - %s: %.2f (Km²)\n", cidade1, area1);
        printf("Carta 02 - %s: %.2f (Km²)\n\n", cidade2, area2);
        

        Atributoarea1 = area1;
        Atributoarea2 = area2;
        resultado1 = Atributoarea1 > Atributoarea2 ? 1 : 0;
        break;
    
    case 3: 

        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB) # # #\n\n");
        printf("Carta 01 - %s: %.2f Bilhões\n", cidade1, pib1);
        printf("Carta 02 - %s: %.2f Bilhões\n\n", cidade2, pib2);
    
        AtributoPIB1 = pib1;
        AtributoPIB2 = pib2;
        resultado1 = AtributoPIB1 > AtributoPIB2 ? 1 : 0;
        break;
    
    case 4: 

        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS) # # #\n\n");
        printf("Carta 01 - %s: %d\n", cidade1, pontosTuristicos1);
        printf("Carta 02 - %s: %d\n\n", cidade2, pontosTuristicos2);
        
        AtributoPontoTuristico1 = pontosTuristicos1;
        AtributoPontoTuristico2 = pontosTuristicos2;
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;

    case 5: 

        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE DEMOGRÁFICA) # # #\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 02 - %s: %.2f\n\n", cidade2, densidade2);
        
        Atributodensidade1 = densidade1;
        Atributodensidade2 = densidade2;
        resultado1 = Atributodensidade1 < Atributodensidade2 ? 1 : 0;
        break;

    case 6: 

        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB Per Capita) # # #\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, percapita1);
        printf("Carta 02 - %s: %.2f\n\n", cidade2, percapita2);
    
        AtributoPerCapita1 = percapita1;
        AtributoPerCapita2 = percapita2;
        resultado1 = AtributoPerCapita1 > AtributoPerCapita2 ? 1 : 0;
        break;

    case 7: 

        printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: SUPER PODER) # # #\n\n");
        printf("Carta 01 - %s: %.2f\n", cidade1, superpoder1);
        printf("Carta 02 - %s: %.2f\n\n", cidade2, superpoder2);
    
        AtributoSuperPoder1 = superpoder1;
        AtributoSuperPoder2 = superpoder2;
        resultado1 = AtributoSuperPoder1 > AtributoSuperPoder2 ? 1 : 0;
        break;

    default:
        printf("OPÇÃO INVÁLIDA! DIGITE NOVAMENTE O NÚMERO CORRETAMENTE.\n");
        break;
    }


    //Comparação utilizando menu interativo (SWITCH)
    printf("# # # AGORA, ESCOLHA UM ATRIBUTO DIFERENTE PARA COMPARAÇÃO! # # #\n");
    printf("1. Comparar a população \n");
    printf("2. Comparar a área km²\n");
    printf("3. Comparar o PIB\n");
    printf("4. Comparar o número de pontos turísticos\n");
    printf("5. Comparar a densidade demográfica\n");
    printf("6. Comparar PIB Per Capita\n");
    printf("7. Comparar o 'Super Poder'\n");
    printf("Escolha uma das opções acima:\n\n");
    scanf("%d", &atributo2);
    
    if (atributo1 == atributo2){
        printf("Erro! Você escolheu os mesmos atributos.\n");
        
    } else {
        switch (atributo2)
        {
        case 1:
            
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO) # # #\n\n");
            printf("Carta 01 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 02 - %s: %lu\n\n", cidade2, populacao2);
        
            Atributopopulacao1 = populacao1;
            Atributopopulacao2 = populacao2;
            resultado2 = Atributopopulacao1 > Atributopopulacao2 ? 1 : 0;
            break;
    
        case 2:
    
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREA KM²) # # #\n\n");
            printf("Carta 01 - %s: %.2f (Km²)\n", cidade1, area1);
            printf("Carta 02 - %s: %.2f (Km²)\n\n", cidade2, area2);
    
            Atributoarea1 = area1;
            Atributoarea2 = area2;
            resultado2 = Atributoarea1 > Atributoarea2 ? 1 : 0;
            break;
        
        case 3: 
    
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB) # # #\n\n");
            printf("Carta 01 - %s: %.2f Bilhões\n", cidade1, pib1);
            printf("Carta 02 - %s: %.2f Bilhões\n\n", cidade2, pib2);
        
            AtributoPIB1 = pib1;
            AtributoPIB2 = pib2;
            resultado2 = AtributoPIB1 > AtributoPIB2 ? 1 : 0;
            break;
        
        case 4: 
    
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS) # # #\n\n");
            printf("Carta 01 - %s: %d\n", cidade1, pontosTuristicos1);
            printf("Carta 02 - %s: %d\n\n", cidade2, pontosTuristicos2);
            
            AtributoPontoTuristico1 = pontosTuristicos1;
            AtributoPontoTuristico2 = pontosTuristicos2;
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
    
        case 5: 
    
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE DEMOGRÁFICA) # # #\n\n");
            printf("Carta 01 - %s: %.2f\n", cidade1, densidade1);
            printf("Carta 02 - %s: %.2f\n\n", cidade2, densidade2);
            
            Atributodensidade1 = densidade1;
            Atributodensidade2 = densidade2;
            resultado2 = Atributodensidade1 < Atributodensidade2 ? 1 : 0;
            break;
    
        case 6: 
    
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: PIB Per Capita) # # #\n\n");
            printf("Carta 01 - %s: %.2f\n", cidade1, percapita1);
            printf("Carta 02 - %s: %.2f\n\n", cidade2, percapita2);
        
            AtributoPerCapita1 = percapita1;
            AtributoPerCapita2 = percapita2;
            resultado2 = AtributoPerCapita1 > AtributoPerCapita2 ? 1 : 0;
            break;
    
        case 7: 
    
            printf("\n# # # COMPARAÇÃO DE CARTAS (ATRIBUTO: SUPER PODER) # # #\n\n");
            printf("Carta 01 - %s: %.2f\n", cidade1, superpoder1);
            printf("Carta 02 - %s: %.2f\n\n", cidade2, superpoder2);
        
            AtributoSuperPoder1 = superpoder1;
            AtributoSuperPoder2 = superpoder2;
            resultado2 = AtributoSuperPoder1 > AtributoSuperPoder2 ? 1 : 0;
            break;
    
        default:
            printf("OPÇÃO INVÁLIDA! DIGITE NOVAMENTE O NÚMERO CORRETAMENTE.\n");
            break;
        }}
        
        if (resultado1 && resultado2){
            printf("\n\nParabéns, você ganhou!\n\n");
        } else if (resultado1 != resultado2){
            printf("\nHouve um empate!\n");
        } else {
            printf("Infelizmente, você perdeu!\n");
        }

    
    return 0;
}
