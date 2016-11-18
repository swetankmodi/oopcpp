# include <iostream>
using namespace std;
template <class T> void acc(T a)
{
   cout<<"\n ENTER THE LIMIT OF THE ARRAY:->";
   int n;
   cin>>n;
   T v[n];
   cout<<"\n ENTER THE VALUES IN IT:->";
   for(int i=0;i<n;i++){
          cin>>v[i];
   }
   cout<<endl<<endl;
   for(int i=n-1;i>=0;i--)
       cout<<v[i]<<" ";
}

int main()
{
	cout<<"enter 1 for int, 2 for float, and so on";
    int x;
    cin>>x;
    if(x==1)
    acc(1);
    if(x==2)
    acc(1.0);
	return 0;
}