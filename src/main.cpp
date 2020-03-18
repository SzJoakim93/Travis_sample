#include <iostream>

#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a;

    cout << "Add number: " << endl;
    cin >> a;

    cout << "Square: " << square(a) << endl;
    cout << "Cube: " << cube(a) << endl;
    cout << (isPrime(a) ? "Prime" : "Not prime") << endl;

    return 0;
}
