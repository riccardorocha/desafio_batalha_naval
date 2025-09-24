#include <stdio.h>
 
#include <stdio.h>
 
int main() {
    int tabuleiro[10][10];
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int i, j;

    //Criando o tabuleiro 10 x 10
    for(i = 0; i < 10; i++) 
    {    
        for(j = 0; j < 10; j++)
        {   
            tabuleiro[i][j] = 0; 
        }
        
    }
   

    //Posição do navio horizontal na linha 0, colunas 0, 1 e 2
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        if (j > -1 && j < 3)
        {
            if (tabuleiro[0][j] == 0)
            {
                tabuleiro[0][j] = 3;
            }
        }
        }   
    }

    //Posição do navio vertical na coluna 0, linhas 2, 3 e 4
    for (int i = 0; i < 10; i++)
    {            
        if (i > 1 && i < 5)
        {
            if (tabuleiro[i][0] == 0)
            {
                tabuleiro[i][0] = 3;
            }
        }   
    }

    //Posição do navio na coluna principal nas linhas 5, 6 e 7
    for (int i = 0; i < 10; i++)
    {
        if (i > 6)
        {
            if (tabuleiro[i][i] == 0)
            {
                tabuleiro[i][i] = 3;
            }
        }   
    }
    
    //Posição do navio na coluna secundária nas linhas 6, 7 e 8
    for (int i = 0; i < 10; i++)
    {
        if (i > 6)
        {
            if (tabuleiro[i][9-i] == 0)
            {
                tabuleiro[i][9-i] = 3;
            }
        }   
    }

    //Posição do cone 5 x 5 - Representado pelo n. 5
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        if (i == 4 && j == 2)
        {
            tabuleiro[i][j] = 5;
            tabuleiro[i+1][j] = 5;
            tabuleiro[i+1][j-1] = 5;
            tabuleiro[i+1][j+1] = 5;
            tabuleiro[i+2][j] = 5;
            tabuleiro[i+2][j-1] = 5;
            tabuleiro[i+2][j-2] = 5;
            tabuleiro[i+2][j+1] = 5;
            tabuleiro[i+2][j+2] = 5;
        }
        }   
    }

    //Posição da cruz 5 x 5 - Representado pelo n. 6
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        if (i == 0 && j == 4)
        {
            tabuleiro[i][j] = 6;
            tabuleiro[i+1][j] = 6;
            tabuleiro[i+2][j] = 6;
            tabuleiro[i+2][j-1] = 6;
            tabuleiro[i+2][j-2] = 6;
            tabuleiro[i+2][j+1] = 6;
            tabuleiro[i+2][j+2] = 6;
            tabuleiro[i+3][j] = 6;
            tabuleiro[i+4][j] = 6;
        }
        }   
    }

    //Posição do octaedro 5 x 5 - Representado pelo n. 7
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        if (i == 2 && j == 7)
        {
            tabuleiro[i][j] = 7;
            tabuleiro[i+1][j] = 7;
            tabuleiro[i+1][j-1] = 7;
            tabuleiro[i+1][j+1] = 7;
            tabuleiro[i+2][j] = 7;
            tabuleiro[i+2][j-1] = 7;
            tabuleiro[i+2][j-2] = 7;
            tabuleiro[i+2][j+1] = 7;
            tabuleiro[i+2][j+2] = 7;
            tabuleiro[i+3][j] = 7;
            tabuleiro[i+3][j-1] = 7;
            tabuleiro[i+3][j+1] = 7;
            tabuleiro[i+4][j] = 7;
        }
        }   
    }

    
//IMPRINDO OS RESULTADOS

    printf("\n");
    printf("  ******** JOGO BATALHA NAVAL  ******** \n\n");

    //Imprimindo a linha referência das colunas/letras
    printf(" ");
    for(j = 0; j < 10; j++) 
    {
        printf("   %c", linha[j]);
    }
    printf("\n\n");

    //Exibindo as posições 0 de água e as posições 3 dos navios
    for(i=0; i<10; i++) 
    {        
        printf("%d   ", i); //Imprimindo a referência das linhas
         
        for(j = 0; j < 10; j++)
        {
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}