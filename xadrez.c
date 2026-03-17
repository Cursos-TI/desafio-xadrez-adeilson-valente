#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
