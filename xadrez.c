#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre, casasBispo, casasRainha;

    printf("Quantas casas a torre deve mover para a direita\n");
    scanf("%d", &casasTorre);

     printf("Quantas casas o BISPO deve mover na diagonal (cima e direita)? \n");
    scanf("%d", &casasBispo);

    printf("Quantas casas a RAINHA deve mover para a esquerda? \n");
    scanf("%d", &casasRainha);

    printf("\n--- Iniciando os movimentos ---\n\n");
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\nMovimento da Torre:\n");
    for (int j = 1; j <= casasTorre; j++) {
        printf("Direita (%d)\n", j);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

   printf("\nMovimento do Cavalo:\n");

    int movimentoBaixo, movimentoEsquerda;


    printf("Quantas casas o Cavalo deve mover para BAIXO? ");
    scanf("%d", &movimentoBaixo);

    printf("Quantas casas o Cavalo deve mover para a ESQUERDA? ");
    scanf("%d", &movimentoEsquerda);

    printf("\n--- Executando movimento do Cavalo ---\n");

    // Loop externo: movimento para baixo (for)
    for (int baixo = 1; baixo <= movimentoBaixo; baixo++) {
        printf("Baixo (%d)\n", baixo);

        // Loop interno: movimento para a esquerda (while)
        int esquerda = 1;
        while (esquerda <= movimentoEsquerda) {
            // O cavalo só move para a esquerda após os movimentos para baixo
            if (baixo == movimentoBaixo) {
                printf("Esquerda (%d)\n", esquerda);
            }
            esquerda++;
        }
    }



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
