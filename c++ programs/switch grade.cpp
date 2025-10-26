#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int mark;
	cout<<"enter the marks:"<<endl;
	cin>>mark;
	if(mark<0 ||mark>100)
	{
		cout<<"inavild marks"<<endl;
        return 1;
	}

	switch(mark/10){
	case 10:
	case 9:
	case 8:
	case 7:cout<<"grade A"<<endl;break;
	case 6:cout<<"grade B"<<endl;break;
	case 5:cout<<"grade C"<<endl;break;
	case 4:cout<<"grade D"<<endl;break;
	default:
		cout<<"grade E"<<endl;
	}
		return 0;
}							