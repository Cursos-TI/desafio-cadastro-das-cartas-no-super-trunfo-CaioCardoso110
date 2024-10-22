#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[30], cidade[30];
    float area, densidade;
    long long int pib, percapita;
    long long int populacao;
    int turismo;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" CADASTRO DE CARTAS SUPER TRUNFO \n");

    printf("Digite o código da carta: ");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &cidade);

    printf("Digite a população estimada (em milhões): ");
    scanf(" %lld", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%lld", &pib);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &turismo);

    // Cálculo da densidade populacional e do PIB per capita

    densidade = populacao / area;
    percapita = (pib / populacao;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" DADOS DA CARTA DO SUPER TRUNFO \n");
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %lld milhões\n", populacao);
    printf("Área (km²): %.1f \n", area);
    printf("PIB (Milhões): %lld \n", pib);
    printf("Número de pontos turísticos: %d \n", turismo);
    printf("A densidade populacional é de: %.1f\n", densidade);
    printf("O PIB per Capita é de R$%lld\n reais", percapita);

    return 0;
}
