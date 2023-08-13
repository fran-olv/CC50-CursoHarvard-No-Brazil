#include <stdio.h>
#include <cs50.h>

int main(void)
{
     //  Pega o valor de n com o usuário
    int n;
    do
    {
          n = get_int("Largura: ");
    }
    while (n < 1 || n > 8);

    // Imprima pontos de interrogação
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(i+j <n-1)
                printf(" ");
            else
                printf("#");
        }
    printf("\n");
    }
}
