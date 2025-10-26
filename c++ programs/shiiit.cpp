#include <iostream>
using namespace std;
class Rectangle
{
private:
	double length;
	double width;
public:
	void setvalues()
	{
		cout<<"enter the length"<<endl;
		cin>>length;
		cout<<"enter the width"<<endl;
		cin>>width;
	}
	void display()
	{
	double area=length*width;
      cout<<"the volume="<<area<<endl;	
	}

};
int main(int argc, char** argv)
{
	Rectangle rectangle;
	rectangle.setvalues();
	rectangle.display();
	return 0;
}
