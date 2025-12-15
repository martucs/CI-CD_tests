#include <assert.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

void tests()
{
    assert(suma(2, 3) == 5);
    assert(resta(2, 3) == -1);
    assert(resta(-222, 3) == -225);
    assert(multiplicacion(2, 3) == 6);
    assert(multiplicacion(2, -3) == -6);
    assert(division(2, 3) == 2 / 3);
    assert(division(3, 3) == 1);
    assert(resta(29387, 55000));
}