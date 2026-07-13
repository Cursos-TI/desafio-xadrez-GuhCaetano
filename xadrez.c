#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nivel Mestre: movimentos com recursividade, loops aninhados e controle
// avancado de fluxo.

const int CASAS_BISPO = 5;
const int CASAS_TORRE = 5;
const int CASAS_RAINHA = 8;
const int CASAS_CAVALO_CIMA = 2;
const int CASAS_CAVALO_DIREITA = 1;

void moverBispo(int casasRestantes);
void moverTorre(int casasRestantes);
void moverRainha(int casasRestantes);
void moverCavalo(void);

int main() {
    printf("=== Desafio de Xadrez - MateCheck ===\n");
    printf("Nivel Mestre\n\n");

    printf("Movimento do Bispo:\n");
    moverBispo(CASAS_BISPO);

    printf("\nMovimento da Torre:\n");
    moverTorre(CASAS_TORRE);

    printf("\nMovimento da Rainha:\n");
    moverRainha(CASAS_RAINHA);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}

// Funcao recursiva do Bispo.
// A cada chamada, uma casa diagonal e percorrida. Para representar a diagonal,
// usamos loops aninhados: o loop externo simboliza o movimento vertical
// ("Cima") e o loop interno simboliza o movimento horizontal ("Direita").
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }

    for (int movimentoVertical = 1; movimentoVertical <= 1; movimentoVertical++) {
        printf("Cima\n");

        for (int movimentoHorizontal = 1; movimentoHorizontal <= 1; movimentoHorizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

// Funcao recursiva da Torre.
// Imprime "Direita" uma vez e chama a si mesma com uma casa a menos ate
// completar as 5 casas definidas em CASAS_TORRE.
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Funcao recursiva da Rainha.
// Imprime "Esquerda" uma vez por chamada recursiva ate completar as 8 casas.
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Movimento complexo do Cavalo.
// O Cavalo faz um "L": duas casas para cima e uma casa para a direita.
// O primeiro loop usa multiplas variaveis e condicoes para controlar as etapas.
// O segundo loop imprime as casas de cada etapa. O continue finaliza cada passo
// vertical e o break encerra o movimento depois da casa horizontal.
void moverCavalo(void) {
    int totalCasasCavalo = CASAS_CAVALO_CIMA + CASAS_CAVALO_DIREITA;

    for (int etapa = 1, casasPercorridas = 0;
         etapa <= 2 && casasPercorridas < totalCasasCavalo;
         etapa++) {
        int limiteDaEtapa = CASAS_CAVALO_CIMA;

        if (etapa == 2) {
            limiteDaEtapa = CASAS_CAVALO_DIREITA;
        }

        for (int passo = 1;
             passo <= limiteDaEtapa && casasPercorridas < totalCasasCavalo;
             passo++, casasPercorridas++) {
            if (etapa == 1) {
                printf("Cima\n");
                continue;
            }

            printf("Direita\n");
            casasPercorridas++;
            break;
        }
    }
}
