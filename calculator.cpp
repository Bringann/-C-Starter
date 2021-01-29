#include <iostream>

int main()
{
    setlocale(LC_ALL, "russian"); //функция позволяет использовать русский язык для вывода в консоль

    float a, b; //переменные
    char op, ch; //операторы

    do {
        std::cout << "Введите арифметическое выражение:\n";

        std::cin >> a >> op >> b;

        switch (op) //оператор множественного вбора switch
        {
        case '-':
            std::cout << "Результат: " << a - b << "\n";
            break;
        case '+':
            std::cout << "Результат: " << a + b << "\n";
            break;
        case '*':
            std::cout << "Результат: " << a * b << "\n";
            break;
        case '/':
            if (b == 0) {
                std::cout << "На ноль делить нельзя!\n";
            } else {
                std::cout << "Результат: " << a / b << "\n";
            }
            break;
        }

        std::cout << "Продолжить или выйти?(y/n):";

        std::cin >> ch;

    } while (ch != 'n');

    return 0;
}