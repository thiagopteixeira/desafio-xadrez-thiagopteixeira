#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int bispo = 0; // Valor inicial do Bispo

    while (bispo < 5) // Enquanto Bispo ser menor que 5, faça:
    {
        printf("Bispo: Cima, Direita\n"); // Imprime a movimentação do bispo. Sendo: Cima, Direita.

        bispo++; // Imprimenta valor de Bispo
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Mover a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) // Valor inicial de i, a estrutura se repetira enquanto i ser menor que 5 e o valor de i é imcrementado
    {
        printf("Torre: Direita\n"); // Imprime a direção do movimento
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int rainha = 0; // Valor inicial da Rainha

    do
    {
        printf("Rainha: %d casa para a esquerda\n", rainha); // Imprime a casa atual da Rainha
        rainha++;
    } while (rainha < 8); // Essa movimentação vai ocorrer enquanto valor da Rainha ser menor que 8

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}