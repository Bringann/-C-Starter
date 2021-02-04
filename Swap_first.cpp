#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;

	int a = 5, b = 10, temp;

	cout << "До обмена: \n";
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
    a = b;
    b = temp;

	cout << "После обмена: \n";
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}