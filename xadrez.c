#include <stdio.h>

// Recursiva para a Torre (direita)
void moverTorre(int atual, int destino)
{
    if (atual == 1)
    {
        printf("TORRE direita 1 casa\n");
    }
    else if (atual <= destino)
    {
        printf("TORRE direita + 1 casa \n");
    }

    if (atual == destino)
    {
        printf("TORRE movimentou %d casas a direita. \n", destino);
        return;
    }

    moverTorre(atual + 1, destino);
}

// Recursiva para o Bispo (diagonal cima-direita)
void moverBispo(int atual, int destino)
{
    if (atual == 1)
    {
        printf("BISPO cima - direita 1 casa\n");
    }
    else if (atual <= destino)
    {
        printf("BISPO cima - direita + 1 casa \n");
    }

    if (atual == destino)
    {
        printf("BISPO movimentou %d casas na diagonal (cima - direita). \n", destino);
        return;
    }

    moverBispo(atual + 1, destino);
}

// Loops aninhados para o Bispo (extra)
void moverBispoComLoops(int destino)
{
    printf("\n[LOOPS ANINHADOS - BISPO]\n");
    for (int i = 1; i <= destino; i++)
    {
        for (int j = 1; j <= 1; j++) // fixa 1 casa horizontal por passo vertical
        {
            if (i == 1)
                printf("BISPO cima - direita 1 casa\n");
            else if (i < destino)
                printf("BISPO cima - direita + 1 casa\n");
            else
                printf("BISPO movimentou %d casas na diagonal (cima - direita). \n", destino);
        }
    }
}

// Recursiva para a Rainha (esquerda)
void moverRainha(int atual, int destino)
{
    if (atual == 1)
    {
        printf("RAINHA esquerda 1 casa\n");
    }
    else if (atual <= destino)
    {
        printf("RAINHA esquerda + 1 casa \n");
    }

    if (atual == destino)
    {
        printf("RAINHA movimentou %d casas a esquerda. \n", destino);
        return;
    }

    moverRainha(atual + 1, destino);
}

// Cavalo com loops complexos e controle de fluxo
void moverCavalo()
{
    int casas_cima = 2;
    int casas_direita = 1;
    int movimento_atual = 0;

    printf("\n");

    for (int i = casas_cima; i >= 1; i--)
    {
        movimento_atual++;

        if (i == casas_cima)
        {
            printf("CAVALO cima 1 casa(s)\n");
        }
        else
        {
            printf("CAVALO cima + 1 casa(s)\n");
        }

        if (i == 1)
        {
            for (int j = 1; j <= casas_direita; j++)
            {
                if (j == 1)
                {
                    printf("CAVALO direita 1 casa(s)\n");
                }
                else
                {
                    printf("CAVALO direita + 1 casa(s)\n");
                }

                if (j == casas_direita)
                {
                    break;
                }
            }
        }
    }

    printf("CAVALO movimentou em 'L': %d casa(s) para cima e %d casa(s) para a direita.\n", casas_cima, casas_direita);
}

int main()
{
    int destino_torre = 5;
    int destino_bispo = 5;
    int destino_rainha = 8;

    printf("\n");

    // Torre com Recursão
    moverTorre(1, destino_torre);

    printf("\n");

    // Bispo com Recursão
    moverBispo(1, destino_bispo);

    printf("\n");

    // Rainha com Recursão
    moverRainha(1, destino_rainha);

    // Cavalo com loops complexos
    moverCavalo();

    // Bispo com Loops Aninhados (extra)
    moverBispoComLoops(destino_bispo);

    return 0;
}
