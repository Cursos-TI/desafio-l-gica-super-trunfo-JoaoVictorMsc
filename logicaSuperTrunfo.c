#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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

     // variaveis do programa carta 01.
    char estado[50], codigoDaCarta[50],nomeDaCidade[50];
    int populacao, numeroDePontosTuristicos;
    float area, PIB, densidadePopulacional, PIBPerCapita;

    // variaveis do programa carta 02.
    char estadoDois[50], codigoDaCartaDois[50],nomeDaCidadeDois[50];
    int populacaoDois, numeroDePontosTuristicosDois;
    float areaDois, PIBDois, densidadePopulacionalDois, PIBPerCapitaDois;

    // Entrada de dados da carta 01.
    printf("Carta 01: \n");
    printf("Digite o estado uma unica letra: \n");
    scanf("%s", estado);
    printf("Digite o codigo: \n");
    scanf("%s", codigoDaCarta);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidade);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicos);

    // pula uma linha.
    printf("\n");

    // entrada de dados da carta 02:
    printf("Carta 02: \n");
    printf("Digite o estado uma unica letra: \n");
    scanf("%s", estadoDois);
    printf("Digite o codigo: \n");
    scanf("%s", codigoDaCartaDois);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", nomeDaCidadeDois);
    printf("Digite a população: \n");
    scanf("%d", &populacaoDois);
    printf("Digite a área: \n");
    scanf("%f", &areaDois);
    printf("Digite o PIB: \n");
    scanf("%f", &PIBDois);
    printf("Digite número de pontos turisticos: \n");
    scanf("%d", &numeroDePontosTuristicosDois);

    // pula uma linha.
    printf("\n");

    // calculo da densidade e PIB carta 01.
    densidadePopulacional = (float) populacao / area;
    PIBPerCapita = (float) PIB / populacao;

    // calculo da densidade e PIB carta 02.
    densidadePopulacionalDois = (float) populacaoDois / areaDois;
    PIBPerCapitaDois = (float) PIBDois / populacaoDois;

    /*// exibindo os valores de densidade e PIB carta 01.
    printf("Carta 01: \n");
    printf("Densidade Populacional da carta 01: %.2f \n", densidadePopulacional);
    printf("PIB per capita da carta 01: %.2f \n", PIBPerCapita);

    // pula uma linha.
    printf("\n");

    // exibindo os valores de densidade e PIB carta 02.
    printf("Carta 02: \n");
    printf("Densidade Populacional da carta 02: %.2f \n", densidadePopulacionalDois);
    printf("PIB per capita da carta 02: %.2f \n", PIBPerCapitaDois);

    // pula uma linha.
    printf("\n");
    
    // comparação usando if
    if(PIB > PIBDois){
        printf("Carta 1 - %s (%s): %.2f \n", nomeDaCidade, estado, PIB);
        printf("Carta 2 - %s (%s): %.2f \n", nomeDaCidadeDois, estadoDois, PIBDois);
        printf("Resultado: Carta 01 (%s) venceu! \n", nomeDaCidade);
    } else {
        printf("Carta 1 - %s (%s): %.2f \n", nomeDaCidade, estado, PIB);
        printf("Carta 2 - %s (%s): %.2f \n", nomeDaCidadeDois, estadoDois, PIBDois);
        printf("Resultado: Carta 02 (%s) venceu! \n", nomeDaCidadeDois);
    }*/

    int opcao;

    printf("### Escolha o atributo que sera comparado ### \n");
    printf("1 - Nome da Cidade. \n");
    printf("2 - População. \n");
    printf("3 - Área. \n");
    printf("4 - PIB. \n");
    printf("5 - Número de pontos turísticos. \n");
    printf("6 - Densidade demográfica. \n");

    printf("Digite a opção do menu. \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
        break;
        case 2:
            if ( populacao > populacaoDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %d e Carta 02 %d \n", populacao, populacaoDois);
                printf("A carta ganhadora é a carta numero 01: %d \n", populacao);
            } else if ( populacao < populacaoDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %d e Carta 02 %d \n", populacao, populacaoDois);
                printf("A carta ganhadora é a carta numero 02: %d \n", populacaoDois);
            } else {
                printf("Empate! \n");
        }
        break;
        case 3:
            if ( area > areaDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %f e Carta 02 %f \n", area, areaDois);
                printf("A carta ganhadora é a carta numero 01: %f \n", area);
            } else if ( area < areaDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %f e Carta 02 %f \n", area, areaDois);
                printf("A carta ganhadora é a carta numero 02: %f \n", areaDois);
            } else {
                printf("Empate! \n");
            }
        break;
        case 4:
            if ( PIB > PIBDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %f e Carta 02 %f \n", PIB ,PIBDois);
                printf("A carta ganhadora é a carta numero 01: %f \n", PIB);
            } else if ( PIB < PIBDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %f e Carta 02 %f \n", PIB, PIBDois);
                printf("A carta ganhadora é a carta numero 02: %f \n", PIBDois);
            } else {
                printf("Empate! \n");
            }
        break;
        case 5:
            if ( numeroDePontosTuristicos > numeroDePontosTuristicosDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %d e Carta 02 %d \n", numeroDePontosTuristicos, numeroDePontosTuristicosDois);
                printf("A carta ganhadora é a carta numero 01: %d \n", numeroDePontosTuristicos);
            } else if ( numeroDePontosTuristicos < numeroDePontosTuristicosDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %d e Carta 02 %d \n", numeroDePontosTuristicos, numeroDePontosTuristicosDois);
                printf("A carta ganhadora é a carta numero 02: %d \n", numeroDePontosTuristicosDois);
            } else {
                printf("Empate! \n");
            }
        break;
        case 6:
            if ( densidadePopulacional < densidadePopulacionalDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %f e Carta 02 %f \n", densidadePopulacional ,densidadePopulacionalDois);
                printf("A carta ganhadora é a carta numero 01: %f \n", densidadePopulacional);
            } else if ( densidadePopulacional > densidadePopulacionalDois ){
                printf("Nome das Cidades %s e %s. \n", nomeDaCidade, nomeDaCidadeDois);
                printf("Você escolheu População! \n ");
                printf("Carta 01: %f e Carta 02 %f \n", densidadePopulacional, densidadePopulacionalDois);
                printf("A carta ganhadora é a carta numero 02: %f \n", densidadePopulacionalDois);
            } else {
                printf("Empate! \n");
            }
            break;
            default:
            printf("Número Invalido!");
    }        
    return 0;
}
