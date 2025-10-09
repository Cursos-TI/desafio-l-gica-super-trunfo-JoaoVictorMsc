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

    
    // variaveis do switch.
    char *valor; 
    char *valorDois;
    int resultado, resultadoDois;
    int opcao,opcaoDois;

    // menu primeiro atributo.
    printf("### Escolha o primeiro atributo que sera comparado ### \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Número de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");

    printf("Digite a opção do menu. \n");
    scanf("%d", &opcao);


    switch(opcao){
        case 1:
            printf("Você escolheu a opção População. \n");
            resultado = populacao > populacaoDois ? 1 : 0;
            valor = "População";
        break;
        case 2:
            printf("Você escolheu a opção Área. \n");
            resultado = area > areaDois ? 1 : 0;
            valor = "Área";
        break;
        case 3:
            printf("Você escolheu a opção PIB. \n");
            resultado = PIB > PIBDois ? 1 : 0;
            valor = "PIB";
        break;
        case 4:
            printf("Você escolheu a opção Número de pontos turísticos. \n");
            resultado = numeroDePontosTuristicos > numeroDePontosTuristicosDois ? 1 : 0;
            valor = "Número de pontos turísticos";
        break;
        case 5:
            printf("Você escolheu a opção Densidade demográfica. \n");
            resultado = densidadePopulacional < densidadePopulacionalDois ? 1 : 0;
            valor = "Densidade";
        break;
        default: 
            printf("Opção Invalida. \n");
        break;
    }

    // menu segundo atributo.
    printf("### Escolha o segundo atributo que sera comparado ### \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Número de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");

    printf("Digite a opção do menu. \n");
    scanf("%d", &opcaoDois);


    if(opcao == opcaoDois){
        printf("Opção invalida escolha outro! \n");
    } else {
        switch(opcaoDois){
        case 1:
            printf("Você escolheu a opção População. \n");
            resultadoDois = populacao > populacaoDois ? 1 : 0;
            valorDois = "População";
        break;
        case 2:
            printf("Você escolheu a opção Área. \n");
            resultadoDois = area > areaDois ? 1 : 0;
            valorDois = "Área";
        break;
        case 3:
            printf("Você escolheru a opção PIB. \n");
            resultadoDois = PIB > PIBDois ? 1 : 0;
            valorDois = "PIB";
        break;
        case 4:
            printf("Você escolheu a opção Número de pontos turísticos. \n");
            resultadoDois = numeroDePontosTuristicos > numeroDePontosTuristicosDois ? 1 : 0;
            valorDois = "Número de pontos turísticos";
        break;
        case 5:
            printf("Você escolheu a opção Densidade demográfica. \n");
            resultadoDois = densidadePopulacional < densidadePopulacionalDois ? 1 : 0;
            valorDois = "Densidade";
        break;
        default: 
            printf("Opção Invalida. \n");
        break;
        }
    }

    if (resultado && resultadoDois){
        printf("Parabéns, Você venceu! \n");
    } else if (resultado != resultadoDois){
        printf("Empate!\n");
    } else {
        printf("Você perdeu! \n");
    }

    // exibição
    printf("Cidades %s e %s \n",nomeDaCidade, nomeDaCidadeDois);
    printf("Os dois atributos são: %s, %s \n",valor, valorDois);
    printf("Carta 01:\n");
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f bilhoes de reais \n",PIB);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional);
    printf("Carta 02:\n");
    printf("População: %d \n", populacaoDois);
    printf("Área: %.2f km²\n",areaDois);
    printf("PIB: %.2f bilhoes de reais \n",PIBDois);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicosDois);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalDois);


    double soma, somaDois;

    soma = (double) populacao + area + PIB + numeroDePontosTuristicos + densidadePopulacional;
    somaDois = (double) populacaoDois + areaDois + PIBDois + numeroDePontosTuristicosDois + densidadePopulacionalDois;

    printf("A soma da carta 01 é %.2f \n", soma);
    printf("A soma da carta 02 %.2f \n", somaDois);

    if(soma > somaDois){
        printf("Carta 01 venceu! \n");
    } else if ( soma < somaDois){
        printf("Carta 02 venceu! \n");
    } else { 
        printf("Empate! \n");
    }
    }        
    return 0;
}
