#include <stdio.h>
 
int main() {
    int tabuleiro[10][10];
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int i, j;

    //Imprimindo a linha referência de letras
    for(j = 0; j < 10; j++) 
    {
        printf("   %c", linha[j]);
    }
    printf("\n");

    //Imprimindo as posições 0 de água as posições 3 dos navios
    for(i=0; i<10; i++) 
    {        
        printf("%d  ", i+1);
         
        for(j = 0; j < 10; j++)
        {    
            //Posição do Navio 1 - Batalha Naval - Nível Novato
            tabuleiro[i][j] = 0;
            tabuleiro[2][2] = 3;
            tabuleiro[2][3] = 3;
            tabuleiro[2][4] = 3;
            //Posição do Navio 2 - Batalha Naval - Nível Novato
            tabuleiro[6][7] = 3;
            tabuleiro[7][7] = 3;
            tabuleiro[8][7] = 3;
            
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
