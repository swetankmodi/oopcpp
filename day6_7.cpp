#include<iostream>
using namespace std;
namespace Constants
{
	const float PI=3.14;
	const float rt2=1.414;
}
int main()
{
	float area;
	int radius;
	cout<<"Radius:: ";
	cin>>radius;
	area = Constants::PI * radius * radius;
	cout<<"Value of Square Root of Two: "<<Constants::rt2;
	cout<<endl<<"Area of Circle: "<<area<<endl;
	return 0;
}