#include "header.h"

double rand_double(double a, double b)
{    
    int temp = 0;
    int rand_value;
    if(b>a)
    {
        rand_value = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
    }
    else
    {
        temp = a;
        a = b;
        b = temp;
        rand_value = ((double) rand() / (double) RAND_MAX) * (b-a) + a;
    }

    return rand_value;

}