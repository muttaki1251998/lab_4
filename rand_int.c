#include "header.h"

int rand_int(int a, int b)
{   
    
    int rand_value = 0;
    int temp = 0;
    
    if(b>a)
    {
        rand_value = (rand() % (b - a + 1)) + 1;
    }
    else
    {
        temp = a;
        a = b;
        b = temp;
        rand_value = (rand() % (b - a + 1)) + 1;
    }

    
    return rand_value;

}