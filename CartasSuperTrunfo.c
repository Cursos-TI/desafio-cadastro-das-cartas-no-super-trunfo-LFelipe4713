#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Carta 1

    char estado [5];
    char codigo [6];
    char cidade [9]; 
    int area, pib, pontos, populacao;

    printf("Esse estado é o paraiso das aguas: ");
    scanf("%s", estado);
    printf("O estado é: %s\n", estado);

    printf("Digite o codigo desse estado: ");
    scanf("%s", codigo);
    printf("O código é: %s\n", codigo);

    printf("Qual a capital do estado: ");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Esse estado tem uma população de: ");
    scanf("%d", &populacao);
    printf("A populção do estado é: %d milhões de pessoas\n", populacao);

    printf("Digite a area do estado: ");
    scanf("%d", &area);
    printf("O estado tem: %d km²\n", area);

    printf("Informe o PIB do estado: ");
    scanf("%d", &pib);
    printf("O pib do estado é de: %d bilhões\n", pib);

    printf("Quantos pontos turisticos possui: ");
    scanf("%d", &pontos);
    printf("Esse estado possui: %d pontos turisticos\n", pontos);

    printf("O estado de %s, também conhecido como paraiso das aguas cujo o código é o %s, possui ao todo %d pontos turitsticos\n", estado, codigo, pontos);
    printf("Também conta hoje com uma população de %d milhões de pessoas que está distribuida em uma área de %d km2, ao todo o estado conta com um pib de %d bilhões, sendo a maior parte vivendo na capital %s\n", populacao, area, pib, cidade);

    //Carta 2
    
    printf("Estado conhecido também pelo acarajé: ");
    scanf("%s", estado);
    printf("O estado é: %s\n", estado);
    
    printf("Digite o codigo desse estado: ");
    scanf("%s", codigo);
    printf("O código é: %s\n", codigo);
    
    printf("Qual a capital do estado: ");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);
    
    printf("Esse estado tem uma população de: ");
    scanf("%d", &populacao);
    printf("A populção do estado %s é: %d milhões de pessoas\n",estado, populacao);
    
    printf("Digite a area do estado: ");
    scanf("%d", &area);
    printf("O estado tem: %d km²\n", area);
    
    printf("Informe o PIB do estado: ");
    scanf("%d", &pib);
    printf("O pib do estado é de: %d bilhões\n", pib);
    
    printf("Quantos pontos turisticos possui: ");
    scanf("%d", &pontos);
    printf("Esse estado possui: %d pontos turisticos\n", pontos);

    printf("O estado de %s, também conhecido como terra das boas comidas cujo o código é o %s, possui ao todo %d pontos turitsticos\n", estado, codigo, pontos);
    printf("Também conta hoje com uma população de %d milhões de pessoas que está distribuida em uma área de %d km2, ao todo o estado conta com um pib de %d bilhões, sendo a maior parte vivendo na capital %s\n", populacao, area, pib, cidade);

    return 0;
}
