#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {

    setlocale(LC_ALL,"portuguese");

    int pturistico, pturistico1;
    float populacao, area, pib, dm, pibpc, super, populacao1, area1, pib1, dm1, pibpc1, super1;
    char estado, estado1;
    char cidade[10], cidade1[10], codigo[4], codigo1[4];
    
    printf("SUPER TRUNFO 'PAISES' \n");

    printf("\nDigite os dados da carta 1: \n");

    printf("\nEstado: \n");
    scanf("%c", &estado);
    
    printf("Código da Carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);  

    printf("População: \n");
    scanf("%f", &populacao);

    printf("Área em km²: \n");
    scanf("%f", &area);
    
    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Numero de Pontos Turísticos: \n");
    scanf("%d", &pturistico);
     
    
    printf("\nDigite os dados da carta 2: \n");

    printf("\nEstado: \n");
    scanf("%c", &estado1);
    
    printf("Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);  

    printf("População: \n");
    scanf("%f", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &area1);
    
    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turísticos: \n");
    scanf("%d\n", &pturistico1);
    
    
    
    dm = (populacao/area);

    pibpc = (pib/populacao);

    super = (populacao+area+pib+pturistico);

    dm1 = (populacao1/area1);

    pibpc1 = (pib1/populacao1);

    super1 = (populacao1+area1+pib1+pturistico1);


    printf("Estado: %c \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("Código da Carta: %s \n", codigo);
    printf("População: %f \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Nº de pontos turísticos: %d \n", pturistico);
    printf("Densidade demografica: %f\n", dm);
    printf("Pib Per Capita: %f\n", pibpc);
    printf("Super Poder: %f \n", super);

    printf("Estado: %c \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("Código da Carta: %s \n", codigo1);
    printf("População: %f \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Nº de pontos turísticos: %d \n", pturistico1);
    printf("Densidade demografica: %f\n", dm1);
    printf("Pib Per Capita: %f\n", pibpc1);
    printf("Super Poder: %f \n", super1);

    

    system("pause");
    return 0;

}
