#include<iostream>
using namespace std;
class animal
{
	private:
		string aname;
		int legs,wings;
  public:
  	void move();
  	void move(int e);
  	animal();
  	int getlegs();
};
class bat: public animal
{
	string bname;
	int legs,wings;
public:
	void move();
};

void animal::move()
{
	cout<<"animal moving anyhowly..\n";
}
void animal::move(int e)
{
	cout<<"animal moving anyhowly..\n";
}
void bat::move()
{
	cout<<"animal moving anyhowly..\n";
}
animal::animal()
{
	aname="mammal";
	legs=2;
	wings=0;
}
int animal::getlegs()
{
	return legs;
}
int main(int argc, char** argv)
{
	bat x;
	x.move();
	//x.move(20);
	return 0;
}