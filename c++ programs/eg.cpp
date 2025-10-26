#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int sum=0;
	int score[6];
	float average;
	for(int i=0;i<6;i++)
	{
		cout<<"enter the marks:"<<i+1<<endl;
		cin>>score[i];
		sum+=score[i];
	}
	cout<<sum<<endl;
	average=sum/6;
	cout<<average<<endl;

	return 0;
}
