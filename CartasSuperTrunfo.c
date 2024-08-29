#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, pontos_turisticos;
    char estado, codigo_carta[3], nome_cidade[20];
    float area, pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf ("Digite o estado: \n");
    scanf ("%c", &estado);

    printf ("Digite o código da carta: \n");
    scanf ("%s", &codigo_carta);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_cidade);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("\nEstado: %c \n", estado);
    printf ("Código da Carta: %s \n", codigo_carta);
    printf ("Nome da Cidade: %s \n", nome_cidade);
    printf ("População: %d \n", populacao);
    printf ("Área: %f km² \n", area);
    printf ("PIB: R$%f \n", pib);
    printf ("Número de Pontos Turísticos: %d", pontos_turisticos);

    return 0;
}