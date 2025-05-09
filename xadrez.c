#include <stdio.h>

int main() {
    // --------- Movimento da Torre (5 casas para a Direita) ---------
    // A torre se move em linha reta na horizontal ou vertical.
    // Usamos o laço for para simular esse movimento.
    
    int casasTorre = 5;  // número de casas que a torre vai se mover
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");  // imprime a direção do movimento da torre a cada casa
    }

    // --------- Movimento do Bispo (5 casas na Diagonal para Cima e Direita) ---------
    // O bispo se move em diagonal, o que significa uma combinação de dois movimentos por casa.
    // Usamos o laço while para simular esse movimento.

    int casasBispo = 5;  // número de casas que o bispo vai se mover
    int contadorBispo = 1;  // contador para o laço while
    printf("\nMovimento do Bispo:\n");
    while(contadorBispo <= casasBispo) {
        printf("Cima Direita\n");  // imprime a combinação de direções para o movimento diagonal
        contadorBispo++;  // incrementa o contador
    }

    // --------- Movimento da Rainha (8 casas para a Esquerda) ---------
    // A rainha pode se mover em todas as direções, neste caso vamos simular movimento na horizontal.
    // Usamos o laço do-while para simular esse movimento.

    int casasRainha = 8;  // número de casas que a rainha vai se mover
    int contadorRainha = 1;  // contador para o laço do-while
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");  // imprime a direção do movimento da rainha a cada casa
        contadorRainha++;  // incrementa o contador
    } while(contadorRainha <= casasRainha);

    return 0;  // finaliza o programa
}
