#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	int mark;
	cout<<"enter the marks:"<<endl;
	cin>>mark;
	int grade = mark / 10;
 switch(grade)
	{
	case 10:
		break;
	case 9:
		break;
	case 8:
		break;
	case 7:cout<<"grade A"<<endl;
		break;
	case 6:cout<<"grade B"<<endl;
		break;
	case 5:cout<<"grade C"<<endl;
		break;
	case 4:cout<<"grade D"<<endl;
		break;
	case 3:
		break;
	case 2:
		break;
	case 1:
		break;
	case 0:cout<<"grade E"<<endl;
		break;
	default:cout<<"invalid marks"<<endl;
		break;
	}
	return 0;
}