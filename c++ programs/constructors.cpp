#include<iostream>
using namespace std;
class animal
{
private:
protected:
public:
	string color,aname;
	void move();
	animal();
	animal(string m,string cr);//default constructor
	animal(animal &original);//copy constuctor
	animal(animal &or2,animal &or3);
	~animal();
};
void animal::move()
{
	cout<<"animal is moving\n";
}
animal::animal()
{
cout<<"animal an animal...\n";
color="black";
aname="XYZ";	
}
animal::animal(string m,string cr)
{
cout<<"creating an animal using cc...\n";
color=cr;
aname=m;	
}
animal::animal(animal &original)
{
cout<<"creating an animal using pc...\n";
color=original.aname;
aname=original.color;	
}
animal::animal(animal &or2,animal &or3)
{
	cout<<"creating an animal using cc...\n";
	color=or2.color+or3.color;
	aname=or2.aname+or3.aname;
}
animal::~animal()//destuctor
{
	cout<<"destroying the"<<aname<<"..\n"
	;
}
int main()
{
	animal w;
	animal k("cow","red");
	animal h("dog","green");
	animal p(k);
	animal x(k,h);
	cout<<"colour of animal="<<x.aname<<endl;
	cout<<"colour of animal="<<x.color<<endl;
	return 0;
}