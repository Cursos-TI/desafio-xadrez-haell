#include <stdio.h>


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int NUM_CASAS = 1; // Representa o número de casas no tabuleiro de xadrez
    int destino_torre = 5; // Posição final da Torre
    int destino_bispo = 5; // Posição final do Bispo
    int destino_rainha = 8; // Posição final da Rainha
    

    // Nível Novato - Movimentação das Peças
    
    // Implementação de Movimentação da Torre
    for (NUM_CASAS; NUM_CASAS <= destino_torre; NUM_CASAS++) {

        // Contando as casas
        if (NUM_CASAS == 1) {
            printf("TORRE direita 1 casa\n");
        } 
        if (NUM_CASAS < destino_torre){
            printf("TORRE direita + 1 casa \n");
        } else {
            printf("TORRE movimentou %d casas a direita. \n", NUM_CASAS);
        }
    }
    // Reinicia o número de casas para a próxima peça
    NUM_CASAS = 1;       
    printf("\n");

    // Implementação de Movimentação do Bispo
    while (NUM_CASAS <= destino_bispo) {

        if (NUM_CASAS == 1) {
            printf("BISPO cima - direita 1 casa\n");
        } 
        if (NUM_CASAS < destino_bispo) {
            printf("BISPO cima - direita + 1 casa \n");
        } else {
            printf("BISPO movimentou %d casas na diagonal (cima - direita). \n", NUM_CASAS);
        }
        NUM_CASAS++;
    }
    // Reinicia o número de casas para a próxima peça
    NUM_CASAS = 1;
    printf("\n");
    
    // Implementação de Movimentação da Rainha
    do {
        if (NUM_CASAS == 1) {
            printf("RAINHA esquerda 1 casa\n");
        } 
        if (NUM_CASAS < destino_rainha) {
            printf("RAINHA esquerda + 1 casa \n");
        } else {
            printf("RAINHA movimentou %d casas a esquerda. \n", NUM_CASAS);
        }
        NUM_CASAS++;
    } while (NUM_CASAS <= destino_rainha);
    // Reinicia o número de casas para a próxima peça
    NUM_CASAS = 1;

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
