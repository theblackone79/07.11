#include <iostream>

using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "введите номер дня недели: ";
	cin >> a;
	if (a == 1)
	{
		cout << "классный час" << '\n';
		cout << "математика" << '\n';
	}
	else if (a == 2)
	{
		cout << "базы данных" << '\n';
		cout << "физика" << '\n';
	}
	else if (a == 3)
	{
		cout << "физра" << '\n';
		cout << "английский язык" << '\n';
	}
	else if (a == 4)
	{
		cout << "МДК 01.02." << '\n';
		cout << "МДК 02.02." << '\n';
	}
	else if (a == 5)
	{
		cout << "география" << '\n';
		cout << "физика" << '\n';
	}
	else if (a == 6)
	{
		cout << "МДК 01.02." << '\n';
		cout << "физра" << '\n';
	}
	else if (a == 7)
	{
		cout << "практика" << '\n';
		cout << "практика" << '\n';
	}
}