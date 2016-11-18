#include<iostream>
using namespace std;
class Date
{
	private:int day;
			int mon;
			int year;
	public:Date(int d,int m,int y)
			{
				day=d;
				mon=m;
				year=y;		
			}	
			void display()
			{
				cout<<"The Date Is:"<<day<<"/"<<mon<<"/"<<year<<endl;
			}		
			void operator++(int)
			{
				int flag=1;
				day++;
				if(mon==2)
				{
					if(year%4==0)
						if(day==30)
							{
								day=1;
								mon++;
								return;
							}
					else
						if(day==29)
							{
								day=1;
								mon++;
								return;
							}		
				}
				else if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
						if(day==32)
							{
								day=1;
								mon++;
								if(mon==13)
								{
									mon=1;
									year++;
								}
								return;
							}
				else
				{
					if(day==31)
					{
						day=1;
						mon++;
						return;
					}	
				}				
			}
};
int main()
{
	Date D1(29,02,2004);
	Date D2(31,12,2005);
	D1.display();
	D1++;
	D1.display();
	D2.display();
	D2++;
	D2.display();
}
