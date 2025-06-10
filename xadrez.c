#include <stdio.h>
#include <stdlib.h>

//Define o tabuleiro
char tabuleiro[8][8];
//Função para inicializar o tabuleiro
void inicializaTabuleiro() {
    for (int i = 0; i <8; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j] = '.';

        }

    }

}

//Função para imprimir o tabuleiro
void imprimeTabuleiro() {
    printf(" a b c d e f g h\n");
    for (int i = 0; i <8; i++) {
        printf("%d", i+1);
        for (int j = 0; j <8; j++) {
            printf("%c", tabuleiro[i][j]);

        }

        printf("\n");

    }

}

// Função para movimentar a Torre 
void movimentaTorre(int x1, int y1, int x2, int y2) {
    if (x1 == x2|| y1 == y2) {
        tabuleiro[x2][y2]= 'T';
        tabuleiro[x1][y1]= '.';
        printf("Torre movida de (%d, %d)para (%d, %d)\n", x1 + 1, y1 + 'a', x2 + 1, y2 + 'a');
    } else {

        printf("Movimento inválido para a torre\n");

    }

}

// Função para movimentar o bispo
void movimentaBispo(int x1, int y1, int x2, int y2) {
    if (abs(x2 - x1) == abs(y2 - y1)) {
        tabuleiro[x2][y2] = 'B';
        tabuleiro[x1][y1] = '.';
        printf("Bispo movido de (%d, %d)para(%d, %d)\n", x1 + 1, y1 + 'a', x2 + 1, y2 + 'a');
    } else { 
        printf("Movimento inválido para o Bispo\n");

    }

}

// Função para movimentar a Rainha
void movimentaRainha(int x1, int y1, int x2, int y2) {
    if (x1 == x2 || y1 ==y2 || abs(x2 - x1) == abs(y2 - y1)) {
        tabuleiro[x2][y2] = 'R';
        tabuleiro[x1][y1] = '.';
        printf("Rainha movida de (%d, %d)para (%d, %d)\n", x1 + 1, y1 + 'a', x2 +1, y2 + 'a');
    } else { 
        printf("Movimento inválido para a Rainha\n");
    }

}

int main() {
    inicializaTabuleiro();
    tabuleiro[0][0] = 'T'; //Torre
    tabuleiro[0][2] = 'B', //bISPO
    tabuleiro[0][3] = 'R'; //Rainha

    imprimeTabuleiro();

    movimentaTorre(0,0,0,4);
    movimentaBispo(0,2,4,6);
    movimentaRainha(0,3,5,3);

    imprimeTabuleiro();


    return 0;
}
