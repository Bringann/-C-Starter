#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;

	int a = 5, b = 10;

	cout << "До обмена: \n";
	cout << "a = " << a << ", b = " << b << endl;

	a = a + b;//5 + 10 = 15
	b = a - b;//15 - 10 = 5
	a = a - b;//15 - 5 = 10

	cout << "После обмена: \n";
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}