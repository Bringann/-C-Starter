#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int i, n;
    float arr[100];

    cout << "Введите размер массива(от 1 до 100): ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; ++i)
    {
        cout << "Введите число " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    cout << "Самое большое число = " << arr[0];

    return 0;
}
