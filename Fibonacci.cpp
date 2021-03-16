#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int n;
    long first = 0;
    long second = 1;
    long sum = 0;

    cout << "Введите количество элементов: ";
    cin >> n;

    cout << "Последовательность чисел Фибоначчи: " << first << " " << second;

    for (int i = 2; i < n; ++i)
    {
        sum = first + second;
        first = second;
        second = sum;
        cout << " " << sum;
    }

    return 0;
}