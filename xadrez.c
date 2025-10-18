#include <stdio.h>
// Confirmação update
// DEFINIÇÃO DAS FUNÇÕES DE MOVIMENTAÇAO DO BISPO, TORRE E RAINHA

void moverBispo(int passoBispo) { // Movimentação do Bispo 
     if (passoBispo == 0) {
        return;
    }
    printf("Mover na diagonal %d)\n", passoBispo);
    moverBispo(passoBispo - 1);
}

void moverTorre(int passoTorre) { // Movimentação da Torre 
    if (passoTorre == 0) {
        return;
    }
    printf("Mover para direita %d)\n", passoTorre);
    moverTorre(passoTorre - 1);
}

void moverRainha(int passoRainha) { // Movimentação da Rainha
    if (passoRainha == 0) {
        return;
    }
    printf("Mover para esquerda %d)\n", passoRainha);
    moverRainha(passoRainha - 1);
}

// Nível Aventureiro

void moverCavalo1() {
    printf("\nMovimento do Cavalo: \n"); // Movimento em L: 2 pra baixo, 1 pra esquerda
    for (int i = 0; i < 2; i++) {  // Loop para 2 passos para baixo
        printf("Mover para baixo\n");
    }
    for (int j = 0; j < 1; j++) { // Loop para 1 passo para esquerda
        printf("Mover para esquerda\n");
    }
}

// Nível Mestre
void moverCavalo2() {
    printf("\nMovimento do Cavalo:\n");
    int movimentos = 0;
    for (int vertical = 0; vertical <= 2; vertical++) {
        for (int horizontal = 0; horizontal <= 2; horizontal++) {
            if ((vertical == 2 && horizontal == 1)) {
                printf("Mover para cima\n");
                printf("Mover para cima\n");
                printf("Mover para direita\n");
                movimentos++;
                break; 
            } else {
                continue;
            }
        }
        if (movimentos > 0) {
             break; 
        }
    }
}

// --- FUNÇÃO PRINCIPAL ---
int main() {
    const int PASSOS_BISPO = 5;
    const int PASSOS_TORRE = 5;
    const int PASSOS_RAINHA = 8;

    printf("Nível Novato - Movimentos Básicos\n");

    printf("\nBispo:\n");
    moverBispo(PASSOS_BISPO);

    printf("\nTorre:\n");
    moverTorre(PASSOS_TORRE);

    printf("\nRainha:\n");
    moverRainha(PASSOS_RAINHA);

    printf("\nNível Aventureiro - Cavalo com Loops Aninhados:\n");
    moverCavalo1();

    printf("\nNível Mestre - Cavalo Avançado:\n");
    moverCavalo2();

    return 0; 
}