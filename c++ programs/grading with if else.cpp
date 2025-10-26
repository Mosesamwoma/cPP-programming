#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int mark = 0;
	cout << "enter the marks:" << endl;
	cin >> mark;

	if(mark < 0 || mark > 100)
	{
		cout << "inalid marks" << endl;
		return 1;
	}
	if(mark >= 70)
	{
		cout << "grade A" << endl;
	}
	else if(mark >= 60)
	{
		cout << "grade B" << endl;
	}
	else if(mark >= 50)
	{
		cout << "grade C" << endl;
	}
	else if(mark >= 40)
	{
		cout << "grade D" << endl;
	}
	else
	{
		cout << "grade E" << endl;
	}
	return 0;
}
