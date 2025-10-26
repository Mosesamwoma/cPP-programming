#include<iostream>
using namespace std;

class animal
{
	private:
		string aname;
		int legs, wings;
  public:
  	void move();
  	void move(int e);
  	animal();
  	int getlegs();
};

void animal::move()
{
	cout << "animal moving anyhowly..\n";
}

void animal::move(int e)
{
	cout << "animal moving in a specific way..\n";  // Example of differentiated behavior
}

animal::animal()
{
	aname = "mammal";
	legs = 2;
	wings = 0;
}

int animal::getlegs()
{
	return legs;
}

int main(int argc, char** argv)
{
	animal x;
	x.move();
	cout << x.getlegs() << endl;
	return 0;
}