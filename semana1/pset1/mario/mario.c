#include <stdio.h>
#include <cs50.h>

int main(void)
{
     //  Pega o valor de n com o usuário
    int altura;
    do
    {
          altura = get_int("Largura: ");
    }
    while (altura < 1 || altura > 8);

    // Imprima pontos de interrogação
     for(int linha = 0; linha < altura; linha++)
    {
        for(int coluna = 0; coluna < altura ; coluna++)
        {
            if(linha+coluna <altura-1)
                printf(" ");
            else
                printf("#");
        }
    printf("\n");
    }
}
