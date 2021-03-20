#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int n;
    unsigned long long fact = 1;

    cout << "Введите целое положительное число: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Ошибка! Факториала отрицательного числа не существует.";
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        cout << "Факториал числа: " << n << " = " << fact;
    }

    return 0;
}