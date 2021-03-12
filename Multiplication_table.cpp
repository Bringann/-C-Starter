#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Таблица умножения:\n";

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << setw(2) << j * i << " ";
        }
        cout << "\n";
    }

    return 0;
}