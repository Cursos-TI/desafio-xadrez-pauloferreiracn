#include <stdio.h>

/*
Desafio de Xadrez - MateCheck
Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
*/

// --- DEFINIÇÃO DAS FUNÇÕES ---

void moverBispo(int passo) { // Movimentação do Bispo 
     if (passo == 0) {
        return;
    }
    printf("Mover na diagonal (passo %d)\n", passo);
    moverBispo(passo - 1); 
}

void moverTorre(int passo) { // Movimentação da Torre 
    if (passo == 0) {
        return;
    }
    
    printf("Mover para direita (passo %d)\n", passo);
    moverTorre(passo - 1);
}


void moverRainha(int passo) { // Movimentação da Rainha
    // Esta função já estava correta.
    if (passo == 0) {
        return;
    }
    
    printf("Mover para esquerda (passo %d)\n", passo);
    moverRainha(passo - 1);
}

// Nível Aventureiro - Movimentação do Cavalo

void moverCavalo1() {
    printf("\nMovimento do Cavalo: \n"); // Movimento em L: 2 pra baixo, 1 pra esquerda
    for (int i = 0; i < 2; i++) {  // Loop para 2 passos para baixo
        printf("Mover para baixo\n");
    }
        
    for (int j = 0; j < 1; j++) { // Loop para 1 passo para esquerda
        printf("Mover para esquerda\n");
    }
}

// Nível Mestre - Funções Recursivas e Loops Aninhados

void moverCavalo2() {
    printf("\nMovimento do Cavalo (Mestre):\n");

    int movimentos = 0;
    for (int vertical = 0; vertical <= 2; vertical++) {
        for (int horizontal = 0; horizontal <= 2; horizontal++) {
            // Movimento válido: 2 pra cima e 1 pra direita
            if ((vertical == 2 && horizontal == 1)) {
                printf("Mover para cima\n");
                printf("Mover para cima\n");
                printf("Mover para direita\n");
                movimentos++;
                break; // Saida do loop interno após fazer 1 movimento
            } else {
                continue; // pula movimentos que não representam L
            }
        }
        if (movimentos > 0) {
             break; 
        }
    }
}

// --- FUNÇÃO PRINCIPAL ---
// FIX: Só pode haver UMA função main. Esta é a função principal que executa o programa.
int main() {
    // Nível Novato - Movimentação das Peças
    // FIX: Constantes movidas para dentro da main correta.
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

    printf("\n---------------------------\n");

    printf("\nNível Aventureiro - Cavalo com Loops Aninhados:\n");
    moverCavalo1();

    printf("\n---------------------------\n");

    printf("\nNível Mestre - Cavalo Avançado:\n");
    moverCavalo2();

    return 0; 
}
