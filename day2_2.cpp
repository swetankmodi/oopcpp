#include<iostream>
using namespace std;
class Time
{
	private:int hours;
			int min;
			int sec;
	public:Time(int h,int m,int s)
			{
					hours=h;
					min=m;
					sec=s;
			}
			void display()
			{
				cout<<hours<<":"<<min<<":"<<sec<<endl;
			}	
			void add(Time T)
			{
					sec=sec+T.sec;
					if(sec>60)
						{
							min++;
							sec-=60;
						}
					min=min+T.min;
					if(min>60)
						{
							hours++;
							hours-=60;
						}
					hours=hours+T.hours;
					//return A;
			}				
};
int main()
{
	Time T1(5,12,35);
	Time T2(5,12,23);
	T1.display();
	T2.display();
	T1.add(T2);
	T1.display();
	return 0;
}
