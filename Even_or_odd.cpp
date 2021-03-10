#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n;
    cout << "Введите целое число: ";
    cin >> n;

    (n % 2 == 0) ? cout << n << " четное число." : cout << n << " нечетное число.";
        

    return 0;
}