#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código desenvolve o sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição para simular os movimentos
// da Torre, do Bispo, da Rainha e do Cavalo.

int main() {
    // Nível Novato - Movimentação das Peças
    // As constantes representam o número de casas que cada peça deve se mover.
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int casasCavaloBaixo = 2;
    const int casasCavaloEsquerda = 1;

    int contadorBispo = 1;
    int contadorRainha = 1;

    printf("=== Desafio de Xadrez - MateCheck ===\n");
    printf("Nivel Aventureiro\n\n");

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

    // Nível Aventureiro - Movimentação do Cavalo
    // O Cavalo se move em "L": duas casas para baixo e uma casa para a esquerda.
    // O loop for controla as duas etapas do movimento: primeiro vertical,
    // depois horizontal. O loop while interno imprime cada casa percorrida.
    printf("\nMovimento do Cavalo:\n");

    for (int etapaCavalo = 1; etapaCavalo <= 2; etapaCavalo++) {
        int contadorCavalo = 1;
        int limiteMovimento = casasCavaloBaixo;

        if (etapaCavalo == 2) {
            limiteMovimento = casasCavaloEsquerda;
        }

        while (contadorCavalo <= limiteMovimento) {
            if (etapaCavalo == 1) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }

            contadorCavalo++;
        }
    }

    return 0;
}
