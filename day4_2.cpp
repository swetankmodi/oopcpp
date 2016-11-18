#include<iostream>
using namespace std;
class test
{
	private:int x;
			int y;
	public:istream& operator>>(istream& in)
			{
					in>>x;
					in>>y;
					return in;
			}	
			ostream& operator<<(ostream& out)
			{
					out<<x<<" "<<y;
					return out;
			}			
};

int main()
{
	test t;
	t.operator>>(cin);
	t.operator<<(cout);
}
