#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

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
