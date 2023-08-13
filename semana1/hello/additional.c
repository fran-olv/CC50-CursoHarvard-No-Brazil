#include <cs50.h>
#include <stdio.h>

int main(void)
{
     long x = get_long("x: ");

     long y = get_long("y: ");

     printf("%li\n",x + y);

     // Divide x por y
     float z = (float) x / (float) y;
     printf("%f\n", z);

}
//compilar: make additional
//executar: ./additional
///