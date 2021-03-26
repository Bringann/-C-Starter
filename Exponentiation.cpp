#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    //double exponent = 0;
    int exponent = 0;
    double base = 0;
    double result = 1;

    cout << "Введите число: ";
    cin >> base;
    cout << "Введите степень: ";
    cin >> exponent;

    cout << base << " ^ " << exponent << " = ";

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    //result = pow(base, exponent);

    cout << result;

    return 0;
}