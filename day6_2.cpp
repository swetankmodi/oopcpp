#include<iostream>
#include<iomanip>
//void add(M, M);
int const size=3;
using namespace std;

//addition function
template <class M, class S>
void add(M a[][size],S b[][size])
{
 S c[size][size];
 for(int i=0;i<size;i++)
    for(int j=0;j<size;j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }

 for(int i=0;i<size;i++)
      {
    for(int j=0;j<size;j++)
    {
     cout<<"   "<<c[i][j];
      }
    cout<<endl;
    }
}
int main()
{
 int x[size][size],y[size][size];
 float g[size][size],h[size][size];
 int ch;

//Read matrices
 cout<<endl<<"Enter values for Int matrix X:";
 for(int i=0;i<size;i++)
      {
    for(int j=0;j<size;j++)
    {
     cin>>x[i][j];
      }
    cout<<endl;
    }

 cout<<endl<<"Enter values for float matrix g:";
  for(int i=0;i<size;i++)
      {
    for(int j=0;j<size;j++)
    {
     cin>>g[i][j];
      }
    cout<<endl;
    }
    cout<<"Result:"<<endl;
	add(x,g);
	return 0;
}