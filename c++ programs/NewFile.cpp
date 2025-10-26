#include <iostream>
using namespace std;

int main()
{
	double radius;
	double area;
	const double pi = .142;
	cout << "enter the radius:";
	cin >> radius;
	area = pi * radius * radius;
	cout << "the area of the circle:\n" << area << endl;
	return 0;
}
