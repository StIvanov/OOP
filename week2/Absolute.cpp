#include "Absolute.h"

int Absolute::ab(int x)
{
    return x < 0 ? (-1) * x : x;
}

double Absolute::ab(double x)
{
    return x < 0 ? -x : x;
}
