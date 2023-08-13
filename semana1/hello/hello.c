#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("olá, mundo");

    string resposta = get_string("Qual é o seu nome?");
    printf("olá, %s", resposta);
}



//compilar: make hello
//checkar: check50 cs50/problems/2021/x/hello