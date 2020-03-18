#include <cmath>

#include "utils.h"

int square(int a)
{
    return a*a;
}

int cube(int a)
{
    return a*a*a;
}

bool isPrime(int number)
{
    if (number == 1)
        return false;
        
    for (int i = 2; i<= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}