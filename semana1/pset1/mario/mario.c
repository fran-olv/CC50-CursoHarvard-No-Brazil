#include <stdio.h>
#include <cs50.h>

int main(void)
{
     //  Solicita ao usuário o valor da altura
    int altura, linha, espaco, coluna;
    do
    {
          altura = get_int("Largura: ");
    }
    while (altura < 1 || altura > 8);

    // Imprime ponros
     for(linha = 0; linha < altura; linha++)
    {
        for (espaco = 0; espaco < altura-linha-1; espaco++)
        {
            printf(" ");
        }
        for(coluna = 0; coluna <= linha ; coluna++)
        {
            printf("#");
        }
    printf("\n");
   }
}
