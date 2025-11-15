#include <stdio.h>

int main() {

    int i;
    int j;
    int Tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int barco1[3] = {3, 3, 3};
    int barco2[3] = {3, 3, 3};
    int barco3[3] = {3, 3, 3};
    int barco4[3] = {3, 3, 3};

    Tabuleiro[0][1] = barco1[0], Tabuleiro[0][2] = barco1[1], Tabuleiro[0][3] = barco1[2];
    Tabuleiro[1][8] = barco2[0], Tabuleiro[2][8] = barco2[1], Tabuleiro[3][8] = barco2[2];
    Tabuleiro[1][1] = barco3[0], Tabuleiro[2][2] = barco3[1], Tabuleiro[3][3] = barco3[3];
    Tabuleiro[8][1] = barco4[0], Tabuleiro[7][2] = barco4[1], Tabuleiro[6][3] = barco4[3];


    
    //impressão da matriz
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
