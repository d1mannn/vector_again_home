#include "Library.h"

int main()
{
	setlocale(LC_ALL, "");
	MyVector v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
		cout << v1[i] << endl;
	}
	MyVector v2(v1);
	for (int i = 0; i < v2.size(); i++)
	{
		v2[i] = 5;
	}
	int sum = v2[0] + v1[3];
	cout << "sum = " << sum << endl;
	v2 - v1;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}
	system("pause");
	return 0;
}