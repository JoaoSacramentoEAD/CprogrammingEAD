#include <stdio.h>

int main() {
    
    char ch;
    char estado, estado2;
    char codigo[50], codigo2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;

    printf("Digite a letra do estado da carta 1: ");
    scanf("%c", &estado);
    printf("Digite o código do estado da carta 1: ");
    scanf("%s", &codigo);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", &cidade);
    printf("Digite a população total da carta 1: ");
    scanf("%d", &populacao);
    printf("Digite a area total da carta 1(km²): ");
    scanf("%f", &area);
    printf("Digite o pib da carta 1(bilhões): ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos);
    ch = getchar();

    printf("Digite a letra do estado da carta 2: ");
    scanf("%c", &estado2);
    printf("Digite o código do estado da carta 2: ");
    scanf("%s", &codigo2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", &cidade2);
    printf("Digite a população total da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area total da carta 2(km²): ");
    scanf("%f", &area2);
    printf("Digite o pib da carta 2(bilhões): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("-----------------------------------------\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
}
