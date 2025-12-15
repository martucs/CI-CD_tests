#include <stdio.h>
#include <assert.h>

int suma(int a, int b);

void tests ()
{
    assert(suma(1, 4) == 5);
    assert(suma(1, -1) == 0);
    assert(suma(-2, -1) == -3);
}
