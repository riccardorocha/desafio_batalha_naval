#include <stdio.h>
 
int main() {
    int tabuleiro[10][10];
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int i, j;

    //Criando o tabuleiro 10 x 10
    for(i = 0; i < 10; i++) 
    {        
        //printf("%d  ", i+1);
         
        for(j = 0; j < 10; j++)
        {   
            tabuleiro[i][j] = 0; 
        }
        
    }

    //Posição do navio horizontal na linha 2, colunas 5, 6 e 7
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        
        if (j > 4 && j < 8)
        {
            if (tabuleiro[2][j] == 0)
            {
                tabuleiro[2][j] = 3;
            }
        }   
    }

    //Posição do navio vertical na coluna 2, linhas 2, 3 e 4
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        
        if (i > 1 && i < 5)
        {
            if (tabuleiro[i][2] == 0)
            {
                tabuleiro[i][2] = 3;
            }
        }   
    }

    //Posição do navio na coluna principal nas linhas 5, 6 e 7
    for (int i=0; i < 8; i++)
    {
        if (i > 4)
        {
            if (tabuleiro[i][i] == 0)
            {
                tabuleiro[i][i] = 3;
            }
        }   
    }
    
    //Posição do navio na coluna secundária nas linhas 6, 7 e 8
    for (int i=0; i < 9; i++)
    {
        if (i > 5)
        {
            if (tabuleiro[i][9-i] == 0)
            {
                tabuleiro[i][9-i] = 3;
            }
        }   
    }


    //IMPRINDO OS RESULTADOS

    printf("\n");
    printf("  ******** JOGO BATALHA NAVAL  ******** \n\n");

    //Imprimindo a linha referência das colunas/letras
    for(j = 0; j < 10; j++) 
    {
        printf("   %c", linha[j]);
    }
    printf("\n");

    //Exibindo as posições 0 de água e as posições 3 dos navios
    for(i=0; i<10; i++) 
    {        
        printf("%d  ", i+1); //Imprimindo a  referência das linhas
         
        for(j = 0; j < 10; j++)
        {
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}