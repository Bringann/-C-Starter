#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    double n;
    double avr;
    double sum = 0;

    cout << "Количество чисел: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nВведите число: " << i << ": ";
        cin >> avr;
        sum += avr;
    }

    avr = sum / n;

    cout << "\nСреднее арифметическое: " << avr << "\n";

    return 0;
}