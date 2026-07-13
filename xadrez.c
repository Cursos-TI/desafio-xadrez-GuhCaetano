#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código desenvolve o sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição para simular os movimentos
// da Torre, do Bispo e da Rainha no nível novato.

int main() {
    // Nível Novato - Movimentação das Peças
    // As constantes representam o número de casas que cada peça deve se mover.
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    int contadorBispo = 1;
    int contadorRainha = 1;

    printf("=== Desafio de Xadrez - MateCheck ===\n");
    printf("Nivel Novato\n\n");

    // Implementação de Movimentação do Bispo
    // O Bispo se move 5 casas na diagonal superior direita.
    // Para representar a diagonal, imprimimos a combinação "Cima Direita".
    printf("Movimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Implementação de Movimentação da Torre
    // A Torre se move 5 casas para a direita.
    printf("\nMovimento da Torre:\n");

    for (int contadorTorre = 1; contadorTorre <= casasTorre; contadorTorre++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // A Rainha se move 8 casas para a esquerda.
    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
