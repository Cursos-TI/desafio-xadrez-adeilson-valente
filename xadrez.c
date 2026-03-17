#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas){
    if (casas == 0){
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas){
    if(casas == 0){
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas -1);
}

void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {
        printf("Cima, ");

        // Loop interno (horizontal)
        int j = 0;
        while (j < 1) {
            printf("Direita\n");
            j++;
        }
    }

    moverBispo(casas - 1);
}

void moverCavalo() {

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosVerticais; i++) {

        printf("Cima\n");

        if (i == movimentosVerticais - 1) {

            int j = 0;

            while (j < movimentosHorizontais) {

                if (j < 0) {
                    continue;
                }

                printf("Direita\n");

                if (j == movimentosHorizontais - 1) {
                    break;
                }

                j++;
            }
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5;
    int torre = 5;
    int rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < bispo; i++){
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int contadorTorre = 0;

    printf("\nMovimento da Torre:\n");
    while (contadorTorre < torre) {
        printf("Direita\n");
        contadorTorre++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");

    do{
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;
    
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentosBaixo; i++){
        printf("Baixo\n");

        if(i == movimentosBaixo -1){
            int contador = 0;

            while (contador < movimentosEsquerda)
            {
                printf("Esquerda\n");
                contador++;
            }
            
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // TORRE
    printf("\n===Recursividade===\n");
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // CAVALO
    moverCavalo();

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
