#include<iostream>
using namespace std;
double power(double n,int p=2)
{
	double pn=1.0;
	while(p--)
	pn*=n;
	return pn;
}
int main()
{
	int a;double b;
	cout<<"Enter Number and then Power";
	cin>>b>>a;
	cout<<power(b,a)<<" "<<power(b);
}
