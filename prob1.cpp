#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, z;

	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	cout << "Enter third number: ";
	cin >> z;

	if  (x == y && y == z)
		cout << endl << "All the numbers are equal";
	else if (x >= y && x >= z)
		cout << endl << "The LARGEST of the three numbers is " << x;
	else if (y >= x && y >= z)
		cout << endl << "The LARGEST of the three numbers is " << y;
	else if (z >= x && z >= y)
		cout << endl << "The LARGEST of the three numbers is " << z;

	_getch();
	return 0;

}
