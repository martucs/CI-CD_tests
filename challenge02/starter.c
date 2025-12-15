#include <stdio.h>

int suma(int a, int b)
{
    return (a + b);
}

int resta(int a, int b)
{
    return (a - b);
}

int multiplicacion(int a, int b)
{
    return (a * b);
}

int division(int a, int b)
{
    if (b == 0)
        return (printf("cannot divide by 0\n"));
    return (a / b);
}

void    tests();

int main() 
{
    tests();
    printf("Calculadora ha pasado los tests\n");
    return 0;
}
