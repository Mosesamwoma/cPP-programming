#include<iostream>
using namespace std;
int factR(int n);
int main(int argc, char** argv)
{
	int n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	cout<<"factorial="<<factR(n)<<endl;
	return 0;
}
int factR(int n)
{
	if(n<2)
		return 1;
	else
	{
		return n*factR(n-1);
	}
}